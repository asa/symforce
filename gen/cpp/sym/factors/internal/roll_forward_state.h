// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose3.h>
#include <sym/rot3.h>

namespace sym {

/**
 * Roll forward the given state by the given preintegrated measurements
 *
 * This returns the pose_j and vel_j that give 0 residual
 *
 * Args:
 *     pose_i: Pose at time step i (world_T_body)
 *     vel_i: Velocity at time step i (world frame)
 *     DR: Preintegrated estimate for pose_i.R.inverse() * pose_j.R
 *     Dv: Preintegrated estimate for vel_j - vel_i in the body frame at timestep i
 *     Dp: Preintegrated estimate for position change (before velocity and gravity
 *     gravity: Acceleration due to gravity (in the same frame as pose_x and vel_x), i.e., the
 *         vector which when added to the accelerometer measurements gives the true acceleration
 *         (up to bias and noise) of the IMU.
 *     dt: The time between timestep i and j: t_j - t_i
 *
 * Returns:
 *     T.Tuple[sf.Pose3, sf.V3]: pose_j, vel_j
 */
template <typename Scalar>
void RollForwardState(const sym::Pose3<Scalar>& pose_i, const Eigen::Matrix<Scalar, 3, 1>& vel_i,
                      const sym::Rot3<Scalar>& DR, const Eigen::Matrix<Scalar, 3, 1>& Dv,
                      const Eigen::Matrix<Scalar, 3, 1>& Dp,
                      const Eigen::Matrix<Scalar, 3, 1>& gravity, const Scalar dt,
                      sym::Pose3<Scalar>* const res0 = nullptr,
                      Eigen::Matrix<Scalar, 3, 1>* const res1 = nullptr) {
  // Total ops: 112

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _pose_i = pose_i.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _DR = DR.Data();

  // Intermediate terms (21)
  const Scalar _tmp0 = -2 * std::pow(_pose_i[1], Scalar(2));
  const Scalar _tmp1 = -2 * std::pow(_pose_i[2], Scalar(2));
  const Scalar _tmp2 = _tmp0 + _tmp1 + 1;
  const Scalar _tmp3 = 2 * _pose_i[2] * _pose_i[3];
  const Scalar _tmp4 = 2 * _pose_i[0];
  const Scalar _tmp5 = _pose_i[1] * _tmp4;
  const Scalar _tmp6 = -_tmp3 + _tmp5;
  const Scalar _tmp7 = 2 * _pose_i[1];
  const Scalar _tmp8 = _pose_i[3] * _tmp7;
  const Scalar _tmp9 = _pose_i[2] * _tmp4;
  const Scalar _tmp10 = _tmp8 + _tmp9;
  const Scalar _tmp11 = (Scalar(1) / Scalar(2)) * std::pow(dt, Scalar(2));
  const Scalar _tmp12 = _pose_i[3] * _tmp4;
  const Scalar _tmp13 = _pose_i[2] * _tmp7;
  const Scalar _tmp14 = -_tmp12 + _tmp13;
  const Scalar _tmp15 = 1 - 2 * std::pow(_pose_i[0], Scalar(2));
  const Scalar _tmp16 = _tmp1 + _tmp15;
  const Scalar _tmp17 = _tmp3 + _tmp5;
  const Scalar _tmp18 = _tmp12 + _tmp13;
  const Scalar _tmp19 = _tmp0 + _tmp15;
  const Scalar _tmp20 = -_tmp8 + _tmp9;

  // Output terms (2)
  if (res0 != nullptr) {
    Eigen::Matrix<Scalar, 7, 1> _res0;

    _res0[0] =
        _DR[0] * _pose_i[3] - _DR[1] * _pose_i[2] + _DR[2] * _pose_i[1] + _DR[3] * _pose_i[0];
    _res0[1] =
        _DR[0] * _pose_i[2] + _DR[1] * _pose_i[3] - _DR[2] * _pose_i[0] + _DR[3] * _pose_i[1];
    _res0[2] =
        -_DR[0] * _pose_i[1] + _DR[1] * _pose_i[0] + _DR[2] * _pose_i[3] + _DR[3] * _pose_i[2];
    _res0[3] =
        -_DR[0] * _pose_i[0] - _DR[1] * _pose_i[1] - _DR[2] * _pose_i[2] + _DR[3] * _pose_i[3];
    _res0[4] = Dp(0, 0) * _tmp2 + Dp(1, 0) * _tmp6 + Dp(2, 0) * _tmp10 + _pose_i[4] +
               _tmp11 * gravity(0, 0) + dt * vel_i(0, 0);
    _res0[5] = Dp(0, 0) * _tmp17 + Dp(1, 0) * _tmp16 + Dp(2, 0) * _tmp14 + _pose_i[5] +
               _tmp11 * gravity(1, 0) + dt * vel_i(1, 0);
    _res0[6] = Dp(0, 0) * _tmp20 + Dp(1, 0) * _tmp18 + Dp(2, 0) * _tmp19 + _pose_i[6] +
               _tmp11 * gravity(2, 0) + dt * vel_i(2, 0);

    *res0 = sym::Pose3<Scalar>(_res0);
  }

  if (res1 != nullptr) {
    Eigen::Matrix<Scalar, 3, 1>& _res1 = (*res1);

    _res1(0, 0) =
        Dv(0, 0) * _tmp2 + Dv(1, 0) * _tmp6 + Dv(2, 0) * _tmp10 + dt * gravity(0, 0) + vel_i(0, 0);
    _res1(1, 0) = Dv(0, 0) * _tmp17 + Dv(1, 0) * _tmp16 + Dv(2, 0) * _tmp14 + dt * gravity(1, 0) +
                  vel_i(1, 0);
    _res1(2, 0) = Dv(0, 0) * _tmp20 + Dv(1, 0) * _tmp18 + Dv(2, 0) * _tmp19 + dt * gravity(2, 0) +
                  vel_i(2, 0);
  }
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym