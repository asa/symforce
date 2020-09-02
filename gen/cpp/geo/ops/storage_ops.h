//  -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

namespace geo {

/**
 * C++ StorageOps concept, specialized per type.
 * See `symforce.ops.storage_ops` for details.
 */
template <typename T>
struct StorageOps {
  using Scalar = typename T::Scalar;
  static constexpr int32_t StorageDim();
  static void ToStorage(const T& a, Scalar* out);
  static T FromStorage(const Scalar* data);
};

}  // namespace geo

#include "./scalar/storage_ops.h"
#include "./matrix/storage_ops.h"
