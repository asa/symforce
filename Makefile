# Development utilities for SymForce
#
# This plays no part in the SymForce build process.  For instructions on building SymForce (which is
# done with CMake), see the README.  For documentation of these commands, see
# https://symforce.org/development.html.

BUILD_DIR=build

PYTHON ?= /usr/bin/env python3

CPP_FORMAT=clang-format

# -----------------------------------------------------------------------------
# Main
# -----------------------------------------------------------------------------

# Build documentation, run tests, measure coverage, show in browser
all: clean docs coverage coverage_open docs_open

FIND_CPP_FILES_TO_FORMAT=find . \
	-not -path "*/lcmtypes/*" \
	-and -not -path "./third_party/*" \
	-and -not -path "./build/*" \
	-and -not -path "./.eggs/*" \
	-and -not -path "./symforce/benchmarks/matrix_multiplication/gen/*" \
	-regextype posix-extended -regex ".*\.(h|cc|tcc)"

# Format using ruff and clang-format
RUFF_FORMAT_CMD=ruff format .
RUFF_ISORT_CMD=ruff check . --select=I
format:
	$(RUFF_FORMAT_CMD)
	$(RUFF_ISORT_CMD) --fix
	$(FIND_CPP_FILES_TO_FORMAT) | xargs $(CPP_FORMAT) -i

# Check formatting using ruff and clang-format - print diff, do not modify files
check_format:
	$(RUFF_FORMAT_CMD) --check --diff
	$(RUFF_ISORT_CMD) --diff
	$(FIND_CPP_FILES_TO_FORMAT) | xargs $(CPP_FORMAT) --dry-run -Werror

# Check type hints using mypy
# NOTE(aaron): mypy does not recurse through directories unless they're packages, so we run `find`.
# See https://github.com/python/mypy/issues/8548
# We don't need to run find on `symforce` because we know the whole thing is a package
MYPY_COMMAND=$(PYTHON) -m mypy --show-error-code --config-file=pyproject.toml
SYMFORCE_LCMTYPES_DIR ?= build/lcmtypes/python2.7
check_types:
	export SYMFORCE_LCMTYPES_DIR=$(SYMFORCE_LCMTYPES_DIR); \
	$(MYPY_COMMAND) symforce $(shell find . \
		\( -path ./symforce \
		-o -path ./third_party \
		-o -path ./build \
		-o -path ./.eggs \
		-o -path ./gen/python/setup.py \
		-o -path ./test/symforce_function_codegen_test_data \
		-o -path ./gen/python/build \
		\) -prune -o -name "*.py" -print) \
		--exclude "symforce/examples/.*/gen/python2\.7/lcmtypes"
	$(MYPY_COMMAND) $(shell find test/symforce_function_codegen_test_data/sympy \
		-path "*/lcmtypes" -prune -false \
		-o -name "*.py")
	$(MYPY_COMMAND) $(shell find test/symforce_function_codegen_test_data/symengine \
		-path "*/lcmtypes" -prune -false \
		-o -name "*.py")

# Run pylint on the symforce package, and tests
# TODO(aaron): Also run on other python code in symforce.  Generated code will require a different
# config since it is py6 and contains a lot of duplicate code
pylint:
	$(PYTHON) -m pylint symforce test/*.py

# Lint check for formatting and type hints
# This needs pass before any merge.
lint: check_types check_format pylint

# Clean all artifacts
clean: docs_clean coverage_clean
	rm -rf $(BUILD_DIR)

.PHONY: all reqs format check_format check_types pylint lint clean

# -----------------------------------------------------------------------------
# Tests
# -----------------------------------------------------------------------------

# Generic target to run a SymEngine codegen test with --update
update_%:
	SYMFORCE_SYMBOLIC_API=symengine $(PYTHON) test/$*.py --update

# All SymForce codegen tests, formatted as update_my_codegen_test targets
GEN_FILES_UPDATE_TARGETS=$(shell \
	find test -name "*_codegen_test.py" \
	| sed -r 's|test/([a-zA-Z0-9_]+).py|update_\1|g')
# Target to update all code generated by SymEngine codegen tests
test_update: $(GEN_FILES_UPDATE_TARGETS)

# Generic target to run a SymPy codegen test with --update --run_slow_tests
sympy_update_%:
	SYMFORCE_SYMBOLIC_API=sympy $(PYTHON) test/$*.py --update --run_slow_tests

# All SymForce codegen tests, formatted as sympy_update_my_codegen_test targets
GEN_FILES_SYMPY_UPDATE_TARGETS=$(shell \
	find test -name "*_codegen_test.py" \
	| sed 's/test\/\(\w\+\).py/sympy_update_\1/g')
# Target to update all code generated by SymPy codegen tests
test_update_sympy: $(GEN_FILES_SYMPY_UPDATE_TARGETS)

# Target to regenerate all code
test_update_all: test_update test_update_sympy

.PHONY: update_% sympy_update_% test_update test_update_sympy test_update_all

# -----------------------------------------------------------------------------
# Test coverage
# -----------------------------------------------------------------------------
COVERAGE_DIR=$(BUILD_DIR)/coverage

coverage_clean:
	rm -rf $(COVERAGE_DIR)

# NOTE(aaron): This is currently broken, since we can't run all our tests with `unittest discover`
coverage_run:
	$(TEST_ENV) $(PYTHON) -m coverage run --source=symforce,gen \
		-m unittest discover -s test/ -p *_test.py -v

coverage_html:
	$(PYTHON) -m coverage html -d $(COVERAGE_DIR) && echo "Coverage report at $(COVERAGE_DIR)/index.html"

coverage: coverage_clean coverage_run coverage_html

coverage_open: coverage
	open $(COVERAGE_DIR)/index.html

.PHONY: coverage_clean coverage_run coverage_html coverage coverage_open

# -----------------------------------------------------------------------------
# Documentation
# -----------------------------------------------------------------------------
DOCS_DIR=$(BUILD_DIR)/docs

docs_clean:
	rm -rf $(DOCS_DIR) docs/api docs/api-cpp docs/api-gen-cpp docs/api-gen-py \
		$(BUILD_DIR)/doxygen-cpp $(BUILD_DIR)/doxygen-gen-cpp

docs_dir:
	mkdir -p $(BUILD_DIR)

docs_py_apidoc: docs_dir
	sphinx-apidoc --separate --module-first -o docs/api ./symforce
	sphinx-apidoc --separate --module-first -o docs/api-gen-py ./gen/python
# The generated symforce.cc_sym.rst file says to generate docs for symforce.cc_sym. However, that file
# only rexports cc_sym, and consequently the actual contents of cc_sym are not documented. We replace
# symforce.cc_sym.rst with a copy which is the same except it says to generate docs for cc_sym instead.
	rm docs/api/symforce.cc_sym.rst
	cp docs/symforce.cc_sym.rst docs/api/symforce.cc_sym.rst

# This is very slow, and breaks incremental builds.  If iterating on the Python docs, you'll want to
# remove this from docs_html, and not run docs_clean.  If
docs_cpp_apidoc: docs_dir
	doxygen docs/Doxyfile-cpp
	doxygen docs/Doxyfile-gen-cpp
	$(PYTHON) -m breathe.apidoc -o docs/api-cpp --project api-cpp $(BUILD_DIR)/doxygen-cpp/xml
	$(PYTHON) -m breathe.apidoc -o docs/api-gen-cpp --project api-gen-cpp $(BUILD_DIR)/doxygen-gen-cpp/xml

PY_EXTENSION_MODULE_PATH?=$(BUILD_DIR)/pybind

docs_html: docs_cpp_apidoc docs_py_apidoc
	export PYTHONPATH=$(PY_EXTENSION_MODULE_PATH):$(PYTHONPATH); \
	SYMFORCE_LOGLEVEL=WARNING $(PYTHON) -m sphinx -b html docs $(DOCS_DIR) -j auto
	mkdir -p $(DOCS_DIR)/docs
	ln -s -f ../_static $(DOCS_DIR)/docs/static

docs: docs_html

docs_open: docs
	xdg-open $(DOCS_DIR)/index.html

.PHONY: docs_clean docs_dir docs_py_apidoc docs_cpp_apidoc docs_html docs docs_open
