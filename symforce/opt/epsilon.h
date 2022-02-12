/* ----------------------------------------------------------------------------
 * SymForce - Copyright 2022, Skydio, Inc.
 * This source code is under the Apache 2.0 license found in the LICENSE file.
 * ---------------------------------------------------------------------------- */

#pragma once

#include <limits>

namespace sym {

/**
 * kDefaultEpsilon is a small positive number for avoiding numerical singularities.
 *
 * It is based on numerical epsilon (the difference between 1.0 and the next floating point number),
 * scaled up for safety.
 *
 * An example of where kDefaultEpsilon might be used is in the evaluation of
 * sin(x - 1) / (x - 1),
 * which, at x = 1, evaluates to 0/0, i.e., NaN. This is despite the fact that the limit as x -> 1
 * is well defined (itself equaling 1).
 *
 * If we used x + copysign(kDefaultEpsilon, x) instead of x, we'd avoid the singularity and get a
 * nearly correct answer (due to the continuity of the function).
 *
 * For more information on epsilons and how to use them, see
 * symforce/notebooks/epsilon_sandbox.ipynb
 */
template <typename Scalar>
constexpr Scalar kDefaultEpsilon = Scalar(10.0) * std::numeric_limits<Scalar>::epsilon();

// Explicit instantiation to reduce duplicate instantiation
extern template const double kDefaultEpsilon<double>;
extern template const float kDefaultEpsilon<float>;

// Shorthand for scalar types
constexpr double kDefaultEpsilond = kDefaultEpsilon<double>;
constexpr float kDefaultEpsilonf = kDefaultEpsilon<float>;

}  // namespace sym
