//  -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <cstdint>
#include <type_traits>

#include "../group_ops.h"

namespace geo {
namespace scalar {

/**
 * C++ GroupOps implementation for scalars.
 */
template <typename T>
struct GroupOps {
  using Scalar = T;
  static_assert(std::is_floating_point<T>::value, "");

  static T Identity() {
    return 0.0;
  }

  static T Inverse(const T& a) {
    return -a;
  }

  static T Compose(const T& a, const T& b) {
    return b + a;
  }

  static T Between(const T& a, const T& b) {
    return b - a;
  }
};

}  // namespace scalar

template<>
struct GroupOps<double> : public scalar::GroupOps<double> {};
template<>
struct GroupOps<float> : public scalar::GroupOps<float> {};

}  // namespace geo
