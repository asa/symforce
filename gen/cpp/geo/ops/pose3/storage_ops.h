//  -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <geo/pose3.h>

namespace geo {
namespace pose3 {

/**
 * C++ StorageOps implementation for <class 'symforce.geo.pose3.Pose3'>.
 */
template <typename ScalarType>
struct StorageOps {
  using Scalar = typename geo::Pose3<ScalarType>::Scalar;

  static constexpr int32_t StorageDim() {
    return 7;
  }

  static void ToStorage(const geo::Pose3<ScalarType>& a, ScalarType* out);
  static geo::Pose3<ScalarType> FromStorage(const ScalarType* data);
};

}  // namespace pose3

// Wrapper to specialize the public concept
template <>
struct StorageOps<Pose3<double>> : public pose3::StorageOps<double> {};
template <>
struct StorageOps<Pose3<float>> : public pose3::StorageOps<float> {};

}  // namespace geo
