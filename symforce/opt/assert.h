/* ----------------------------------------------------------------------------
 * SymForce - Copyright 2022, Skydio, Inc.
 * This source code is under the Apache 2.0 license found in the LICENSE file.
 * ---------------------------------------------------------------------------- */

#pragma once

#include <string>

#include <fmt/format.h>

namespace sym {

/**
 * Format an assertion failure.
 */
inline std::string FormatFailure(const char* error, const char* func, const char* file, int line) {
  return fmt::format("SYM_ASSERT: {}\n    --> {}\n    --> {}:{}\n", error, func, file, line);
}

/**
 * Format an assertion failure with a custom message, and optional additional things to format into
 * the message.
 */
template <typename... T>
inline std::string FormatFailure(const char* error, const char* func, const char* file, int line,
                                 const char* fmt, T&&... args) {
  // force fmt::runtime to be used to avoid compile-time formatting which breaks between consteval,
  // clang 17 and fmt.
  auto runtime_fmt = fmt::runtime(fmt);
  return fmt::format("SYM_ASSERT: {}\n    --> {}\n    --> {}:{}\n{}\n", error, func, file, line,
                     fmt::format(runtime_fmt, std::forward<T>(args)...));
}

}  // namespace sym

/**
 * Assert a runtime condition with a #define disable mechanism.
 *
 * Inspiration taken from:
 *     http://cnicholson.net/2009/02/stupid-c-tricks-adventures-in-assert/
 *
 * TODO(hayk): Improve with _EQ variant, etc.
 */
#ifndef SYMFORCE_DISABLE_ASSERT
#define SYM_ASSERT(expr, ...)                                                                   \
  do {                                                                                          \
    if (!(expr)) {                                                                              \
      throw std::runtime_error(                                                                 \
          sym::FormatFailure((#expr), __PRETTY_FUNCTION__, __FILE__, __LINE__, ##__VA_ARGS__)); \
    }                                                                                           \
  } while (0)
#else
#define SYM_ASSERT(expr, ...) \
  do {                        \
    (void)sizeof(expr);       \
  } while (0)
#endif
