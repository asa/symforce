// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     cam_package/CLASS.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <ostream>
#include <random>
#include <vector>

#include <Eigen/Core>

#include <sym/ops/storage_ops.h>

namespace sym {

/**
 * Autogenerated C++ implementation of
 * `symforce.cam.double_sphere_camera_cal.DoubleSphereCameraCal`.
 *
 * Camera model where a point is consecutively projected onto two unit spheres
 * with centers shifted by ``xi``, then projected into the image plane using the
 * pinhole model shifted by ``alpha / (1 - alpha)``.
 *
 * There are important differences here from the derivation in the paper and in other open-source
 * packages with double sphere models; see notebooks/double_sphere_derivation.ipynb for more
 * information.
 *
 * The storage for this class is:
 *
 *     [ fx fy cx cy xi alpha ]
 *
 * TODO(aaron): Create double_sphere_derivation.ipynb
 *
 * TODO(aaron): Probably want to check that values and derivatives are correct (or at least sane)
 * on the valid side of the is_valid boundary
 *
 * Reference:
 *     https://vision.in.tum.de/research/vslam/double-sphere
 */
template <typename ScalarType>
class DoubleSphereCameraCal {
 public:
  // Typedefs
  using Scalar = ScalarType;
  using Self = DoubleSphereCameraCal<Scalar>;
  using DataVec = Eigen::Matrix<Scalar, 6, 1>;

  // Construct from focal_length, principal_point, xi, and alpha.
  DoubleSphereCameraCal(const Eigen::Matrix<Scalar, 2, 1>& focal_length,
                        const Eigen::Matrix<Scalar, 2, 1>& principal_point, const Scalar xi,
                        const Scalar alpha)
      : DoubleSphereCameraCal(
            (Eigen::Matrix<Scalar, sym::StorageOps<Self>::StorageDim(), 1>() << focal_length,
             principal_point, xi, alpha)
                .finished()) {}

  // Construct from data vec
  explicit DoubleSphereCameraCal(const DataVec& data) : data_(data) {}

  // Access underlying storage as const
  inline const DataVec& Data() const {
    return data_;
  }

  // --------------------------------------------------------------------------
  // StorageOps concept
  // --------------------------------------------------------------------------

  static constexpr int32_t StorageDim() {
    return sym::StorageOps<Self>::StorageDim();
  }

  void ToStorage(Scalar* const vec) const {
    return sym::StorageOps<Self>::ToStorage(*this, vec);
  }

  static DoubleSphereCameraCal FromStorage(const Scalar* const vec) {
    return sym::StorageOps<Self>::FromStorage(vec);
  }

  // --------------------------------------------------------------------------
  // Camera model methods
  // --------------------------------------------------------------------------

  /**
   * Return the focal length.
   */
  Eigen::Matrix<Scalar, 2, 1> FocalLength() const;

  /**
   * Return the principal point.
   */
  Eigen::Matrix<Scalar, 2, 1> PrincipalPoint() const;

  /**
   * Project a 3D point in the camera frame into 2D pixel coordinates.
   *
   * Returns:
   *     pixel: (x, y) coordinate in pixels if valid
   *     is_valid: 1 if the operation is within bounds else 0
   */
  Eigen::Matrix<Scalar, 2, 1> PixelFromCameraPoint(const Eigen::Matrix<Scalar, 3, 1>& point,
                                                   const Scalar epsilon,
                                                   Scalar* const is_valid = nullptr) const;

  /**
   * Project a 3D point in the camera frame into 2D pixel coordinates.
   *
   * Returns:
   *     pixel: (x, y) coordinate in pixels if valid
   *     is_valid: 1 if the operation is within bounds else 0
   *     pixel_D_cal: Derivative of pixel with respect to intrinsic calibration parameters
   *     pixel_D_point: Derivative of pixel with respect to point
   */
  Eigen::Matrix<Scalar, 2, 1> PixelFromCameraPointWithJacobians(
      const Eigen::Matrix<Scalar, 3, 1>& point, const Scalar epsilon,
      Scalar* const is_valid = nullptr, Eigen::Matrix<Scalar, 2, 6>* const pixel_D_cal = nullptr,
      Eigen::Matrix<Scalar, 2, 3>* const pixel_D_point = nullptr) const;

  /**
   * Backproject a 2D pixel coordinate into a 3D ray in the camera frame.
   *
   * Returns:
   *     camera_ray: The ray in the camera frame (NOT normalized)
   *     is_valid: 1 if the operation is within bounds else 0
   */
  Eigen::Matrix<Scalar, 3, 1> CameraRayFromPixel(const Eigen::Matrix<Scalar, 2, 1>& pixel,
                                                 const Scalar epsilon,
                                                 Scalar* const is_valid = nullptr) const;

  /**
   * Backproject a 2D pixel coordinate into a 3D ray in the camera frame.
   *
   * Returns:
   *     camera_ray: The ray in the camera frame (NOT normalized)
   *     is_valid: 1 if the operation is within bounds else 0
   *     point_D_cal: Derivative of point with respect to intrinsic calibration parameters
   *     point_D_pixel: Derivation of point with respect to pixel
   */
  Eigen::Matrix<Scalar, 3, 1> CameraRayFromPixelWithJacobians(
      const Eigen::Matrix<Scalar, 2, 1>& pixel, const Scalar epsilon,
      Scalar* const is_valid = nullptr, Eigen::Matrix<Scalar, 3, 6>* const point_D_cal = nullptr,
      Eigen::Matrix<Scalar, 3, 2>* const point_D_pixel = nullptr) const;

  // --------------------------------------------------------------------------
  // General Helpers
  // --------------------------------------------------------------------------

  bool IsApprox(const Self& b, const Scalar tol) const {
    // isApprox is multiplicative so we check the norm for the exact zero case
    // https://eigen.tuxfamily.org/dox/classEigen_1_1DenseBase.html#ae8443357b808cd393be1b51974213f9c
    if (b.Data() == DataVec::Zero()) {
      return Data().norm() < tol;
    }

    return Data().isApprox(b.Data(), tol);
  }

  template <typename ToScalar>
  DoubleSphereCameraCal<ToScalar> Cast() const {
    return DoubleSphereCameraCal<ToScalar>(Data().template cast<ToScalar>());
  }

  bool operator==(const DoubleSphereCameraCal& rhs) const {
    return data_ == rhs.Data();
  }

 public:
  DataVec data_;
};

// Shorthand for scalar types
using DoubleSphereCameraCald = DoubleSphereCameraCal<double>;
using DoubleSphereCameraCalf = DoubleSphereCameraCal<float>;

// Print definitions
std::ostream& operator<<(std::ostream& os, const DoubleSphereCameraCal<double>& a);
std::ostream& operator<<(std::ostream& os, const DoubleSphereCameraCal<float>& a);

}  // namespace sym

// Externs to reduce duplicate instantiation
extern template class sym::DoubleSphereCameraCal<double>;
extern template class sym::DoubleSphereCameraCal<float>;

// Concept implementations for this class
#include "./ops/double_sphere_camera_cal/group_ops.h"
#include "./ops/double_sphere_camera_cal/lie_group_ops.h"
#include "./ops/double_sphere_camera_cal/storage_ops.h"
