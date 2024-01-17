// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     function/FUNCTION.h.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once


#include <Eigen/Core>



namespace sym {


/**
* This function was autogenerated. Do not modify by hand.
*
* Args:
*     x0: Scalar
*     x1: Scalar
*     x2: Scalar
*     x3: Scalar
*     x4: Scalar
*
* Outputs:
*     result: Matrix100_100
*/
template <typename Scalar>
Eigen::Matrix<Scalar, 100, 100> ComputeADenseRotor1(const Scalar x0, const Scalar x1, const Scalar x2, const Scalar x3, const Scalar x4) {

    // Total ops: 1035

    // Input arrays

    // Intermediate terms (202)
    const Scalar _tmp0 = 2*x2;
    const Scalar _tmp1 = _tmp0 - 1;
    const Scalar _tmp2 = _tmp0 + 2;
    const Scalar _tmp3 = x2 + 1;
    const Scalar _tmp4 = -x0 - 6;
    const Scalar _tmp5 = Scalar(1.0) / (x2);
    const Scalar _tmp6 = Scalar(1.0) / (x4);
    const Scalar _tmp7 = _tmp6*x3;
    const Scalar _tmp8 = 2*x0;
    const Scalar _tmp9 = 2*x3;
    const Scalar _tmp10 = _tmp9 - 2;
    const Scalar _tmp11 = std::pow(x2, Scalar(2));
    const Scalar _tmp12 = -x4;
    const Scalar _tmp13 = x4 + 1;
    const Scalar _tmp14 = -x1;
    const Scalar _tmp15 = _tmp14 + x0;
    const Scalar _tmp16 = Scalar(1.0) / (_tmp15);
    const Scalar _tmp17 = x1 + 1;
    const Scalar _tmp18 = _tmp12 + _tmp17;
    const Scalar _tmp19 = x0 - 2;
    const Scalar _tmp20 = -x0;
    const Scalar _tmp21 = x3 - 3;
    const Scalar _tmp22 = 4*x2;
    const Scalar _tmp23 = _tmp6*x1;
    const Scalar _tmp24 = std::pow(x1, Scalar(2));
    const Scalar _tmp25 = x0 + 2;
    const Scalar _tmp26 = _tmp5*x4;
    const Scalar _tmp27 = -_tmp26;
    const Scalar _tmp28 = x4 + 2;
    const Scalar _tmp29 = _tmp28 + x2;
    const Scalar _tmp30 = x0*x2;
    const Scalar _tmp31 = x4 - 4;
    const Scalar _tmp32 = 2*x1;
    const Scalar _tmp33 = _tmp9 + 1;
    const Scalar _tmp34 = _tmp25*x1;
    const Scalar _tmp35 = _tmp32 + 2;
    const Scalar _tmp36 = -x2;
    const Scalar _tmp37 = Scalar(1.0) / (x0);
    const Scalar _tmp38 = 4*x1;
    const Scalar _tmp39 = std::pow(x3, Scalar(2));
    const Scalar _tmp40 = x1 + x2;
    const Scalar _tmp41 = -_tmp19;
    const Scalar _tmp42 = _tmp40 + 4;
    const Scalar _tmp43 = x0 + x2;
    const Scalar _tmp44 = x2 - 2;
    const Scalar _tmp45 = _tmp44*x4;
    const Scalar _tmp46 = _tmp12 + x1;
    const Scalar _tmp47 = x1 + 2;
    const Scalar _tmp48 = x2 - 1;
    const Scalar _tmp49 = x1 + 4;
    const Scalar _tmp50 = x0 - 1;
    const Scalar _tmp51 = x3 - 1;
    const Scalar _tmp52 = std::pow(x4, Scalar(2));
    const Scalar _tmp53 = -_tmp30;
    const Scalar _tmp54 = x0*x1;
    const Scalar _tmp55 = (Scalar(1)/Scalar(2))*x4 + Scalar(1)/Scalar(2);
    const Scalar _tmp56 = _tmp44*x0;
    const Scalar _tmp57 = _tmp56 + 1;
    const Scalar _tmp58 = _tmp32*x4;
    const Scalar _tmp59 = -_tmp58;
    const Scalar _tmp60 = 2*x4;
    const Scalar _tmp61 = -x3;
    const Scalar _tmp62 = x3*x4;
    const Scalar _tmp63 = -_tmp12 - _tmp62 - 1;
    const Scalar _tmp64 = _tmp0*x0;
    const Scalar _tmp65 = _tmp47 + _tmp61;
    const Scalar _tmp66 = _tmp19 + x2;
    const Scalar _tmp67 = -_tmp9;
    const Scalar _tmp68 = -_tmp0;
    const Scalar _tmp69 = x4 - 3;
    const Scalar _tmp70 = -_tmp62;
    const Scalar _tmp71 = x3 + 1;
    const Scalar _tmp72 = _tmp61 + x0;
    const Scalar _tmp73 = _tmp60 + 2;
    const Scalar _tmp74 = x2*x4;
    const Scalar _tmp75 = (Scalar(1)/Scalar(4))*x2;
    const Scalar _tmp76 = x1*x4;
    const Scalar _tmp77 = x2 + 2;
    const Scalar _tmp78 = std::pow(x0, Scalar(2));
    const Scalar _tmp79 = x0 + x3;
    const Scalar _tmp80 = Scalar(1.0) / (x1);
    const Scalar _tmp81 = x1 + x4;
    const Scalar _tmp82 = 2*_tmp5;
    const Scalar _tmp83 = _tmp15 + 1;
    const Scalar _tmp84 = -_tmp83;
    const Scalar _tmp85 = _tmp9*x4;
    const Scalar _tmp86 = _tmp61 + x1;
    const Scalar _tmp87 = _tmp60 - 2;
    const Scalar _tmp88 = x1 - 2;
    const Scalar _tmp89 = _tmp80*x4;
    const Scalar _tmp90 = _tmp32 + x0;
    const Scalar _tmp91 = _tmp78*x4;
    const Scalar _tmp92 = _tmp0*x1;
    const Scalar _tmp93 = _tmp12 + x0;
    const Scalar _tmp94 = _tmp81 - 1;
    const Scalar _tmp95 = 4*_tmp5;
    const Scalar _tmp96 = _tmp19*x0;
    const Scalar _tmp97 = x0*x3;
    const Scalar _tmp98 = _tmp60 + x2;
    const Scalar _tmp99 = x3 + 2;
    const Scalar _tmp100 = -_tmp60;
    const Scalar _tmp101 = Scalar(1.0) / (_tmp3);
    const Scalar _tmp102 = _tmp13*x4;
    const Scalar _tmp103 = x4 - 1;
    const Scalar _tmp104 = _tmp8*x3;
    const Scalar _tmp105 = _tmp104 + _tmp20;
    const Scalar _tmp106 = 4*x3;
    const Scalar _tmp107 = x2*x3;
    const Scalar _tmp108 = x4 - 2;
    const Scalar _tmp109 = _tmp108*x0;
    const Scalar _tmp110 = _tmp0 + 4;
    const Scalar _tmp111 = _tmp74 - 1;
    const Scalar _tmp112 = _tmp99 + x2;
    const Scalar _tmp113 = 3*x4;
    const Scalar _tmp114 = 2*_tmp37;
    const Scalar _tmp115 = _tmp39*x0;
    const Scalar _tmp116 = _tmp76 - 1;
    const Scalar _tmp117 = _tmp37*x4;
    const Scalar _tmp118 = _tmp8 + x4;
    const Scalar _tmp119 = -_tmp107;
    const Scalar _tmp120 = x2 + x4;
    const Scalar _tmp121 = _tmp20 + x3;
    const Scalar _tmp122 = _tmp32 + _tmp9;
    const Scalar _tmp123 = _tmp122 + 4;
    const Scalar _tmp124 = _tmp9 + x4;
    const Scalar _tmp125 = x0 + 1;
    const Scalar _tmp126 = -_tmp32;
    const Scalar _tmp127 = -_tmp8;
    const Scalar _tmp128 = _tmp88 + x4;
    const Scalar _tmp129 = _tmp125 + _tmp36;
    const Scalar _tmp130 = Scalar(1.0) / (_tmp120);
    const Scalar _tmp131 = x3 - 2;
    const Scalar _tmp132 = x0*x4;
    const Scalar _tmp133 = _tmp14 + 1;
    const Scalar _tmp134 = _tmp131*x2;
    const Scalar _tmp135 = x1*x3;
    const Scalar _tmp136 = _tmp135 + 1;
    const Scalar _tmp137 = x2 + x3;
    const Scalar _tmp138 = _tmp17*x1;
    const Scalar _tmp139 = x1*x2;
    const Scalar _tmp140 = _tmp32 + 1;
    const Scalar _tmp141 = _tmp9 - 1;
    const Scalar _tmp142 = -_tmp25 - _tmp61;
    const Scalar _tmp143 = (Scalar(1)/Scalar(2))*_tmp11;
    const Scalar _tmp144 = x1 + x3;
    const Scalar _tmp145 = x2 - 3;
    const Scalar _tmp146 = _tmp8 + x1;
    const Scalar _tmp147 = 4 - _tmp32;
    const Scalar _tmp148 = _tmp5*x0;
    const Scalar _tmp149 = _tmp36 + x0;
    const Scalar _tmp150 = _tmp0*x4;
    const Scalar _tmp151 = 4*x4;
    const Scalar _tmp152 = Scalar(1.0) / (_tmp50);
    const Scalar _tmp153 = _tmp9*x1;
    const Scalar _tmp154 = _tmp30*x3;
    const Scalar _tmp155 = Scalar(1.0) / (x3);
    const Scalar _tmp156 = _tmp36 + x1;
    const Scalar _tmp157 = x1 - 1;
    const Scalar _tmp158 = _tmp60 + 6;
    const Scalar _tmp159 = _tmp155*x1;
    const Scalar _tmp160 = _tmp159 + x4;
    const Scalar _tmp161 = -_tmp151;
    const Scalar _tmp162 = _tmp37*x1;
    const Scalar _tmp163 = _tmp14 + x3;
    const Scalar _tmp164 = _tmp92 + x2;
    const Scalar _tmp165 = _tmp24*x4;
    const Scalar _tmp166 = _tmp135 + 2;
    const Scalar _tmp167 = -3*x1;
    const Scalar _tmp168 = -_tmp20 - _tmp71;
    const Scalar _tmp169 = x3 + x4;
    const Scalar _tmp170 = _tmp13 + _tmp61;
    const Scalar _tmp171 = -_tmp170;
    const Scalar _tmp172 = _tmp97 - 1;
    const Scalar _tmp173 = _tmp26*x3;
    const Scalar _tmp174 = _tmp36 + _tmp71;
    const Scalar _tmp175 = _tmp8*x4;
    const Scalar _tmp176 = x0 + x4;
    const Scalar _tmp177 = -_tmp78;
    const Scalar _tmp178 = x0 + x1;
    const Scalar _tmp179 = -x2 - 3;
    const Scalar _tmp180 = -_tmp157;
    const Scalar _tmp181 = (Scalar(1)/Scalar(2))*x1;
    const Scalar _tmp182 = 2*_tmp24;
    const Scalar _tmp183 = x2 + 4;
    const Scalar _tmp184 = -_tmp0*_tmp132;
    const Scalar _tmp185 = _tmp144 - 1;
    const Scalar _tmp186 = _tmp8 + 2;
    const Scalar _tmp187 = -_tmp100 - _tmp9;
    const Scalar _tmp188 = _tmp37*_tmp9;
    const Scalar _tmp189 = _tmp12 + x3;
    const Scalar _tmp190 = _tmp40 + x3;
    const Scalar _tmp191 = _tmp37*x2;
    const Scalar _tmp192 = _tmp155*x0;
    const Scalar _tmp193 = _tmp0*x3;
    const Scalar _tmp194 = _tmp28 + _tmp36;
    const Scalar _tmp195 = Scalar(1.0)*x1;
    const Scalar _tmp196 = _tmp13 + x1;
    const Scalar _tmp197 = _tmp156*x3;
    const Scalar _tmp198 = _tmp8 - 2;
    const Scalar _tmp199 = _tmp5*x1;
    const Scalar _tmp200 = -_tmp99*x1;
    const Scalar _tmp201 = _tmp12 + x2;

    // Output terms (1)
    Eigen::Matrix<Scalar, 100, 100> _result;

    _result.setZero();

    _result(60, 0) = Scalar(-1.0);
    _result(66, 0) = _tmp1*x3;
    _result(61, 1) = Scalar(1.0);
    _result(67, 1) = -_tmp2;
    _result(62, 2) = _tmp3;
    _result(68, 2) = _tmp4;
    _result(3, 3) = -_tmp5*_tmp7;
    _result(4, 3) = _tmp10 + _tmp8;
    _result(5, 3) = -4*_tmp11 - x4;
    _result(9, 3) = _tmp12;
    _result(10, 3) = _tmp13;
    _result(11, 3) = _tmp16*x2;
    _result(69, 3) = _tmp18;
    _result(70, 3) = -x3*(_tmp19 + x3);
    _result(71, 3) = _tmp17 + _tmp20;
    _result(3, 4) = _tmp21;
    _result(4, 4) = _tmp22*x1 + 2;
    _result(5, 4) = _tmp12 + _tmp23 + 2;
    _result(9, 4) = _tmp24;
    _result(10, 4) = -_tmp25;
    _result(11, 4) = _tmp27 + x3;
    _result(69, 4) = -_tmp29*_tmp30;
    _result(70, 4) = -_tmp31*x1;
    _result(71, 4) = -_tmp22 + x0;
    _result(3, 5) = -_tmp26*_tmp32;
    _result(4, 5) = -_tmp20 - _tmp33;
    _result(5, 5) = 2 - _tmp34;
    _result(9, 5) = -_tmp21;
    _result(10, 5) = -_tmp35 - _tmp8;
    _result(11, 5) = _tmp36;
    _result(65, 5) = -_tmp37*_tmp38 - 2;
    _result(69, 5) = x4*(_tmp39 + 1);
    _result(70, 5) = -1;
    _result(71, 5) = -_tmp40;
    _result(66, 6) = _tmp41;
    _result(72, 6) = x4*(_tmp42 + x0);
    _result(75, 6) = _tmp17;
    _result(79, 6) = _tmp43*_tmp45;
    _result(82, 6) = -x2 + Scalar(2.0)*x4;
    _result(86, 6) = -_tmp3 - _tmp46;
    _result(89, 6) = -x3*(_tmp20 + _tmp47);
    _result(93, 6) = _tmp48*x2 + x1;
    _result(96, 6) = _tmp49;
    _result(67, 7) = _tmp50*x4 + _tmp51;
    _result(73, 7) = _tmp52*_tmp9;
    _result(76, 7) = _tmp14;
    _result(80, 7) = 4;
    _result(83, 7) = _tmp53;
    _result(87, 7) = _tmp15*x4;
    _result(90, 7) = _tmp1;
    _result(94, 7) = _tmp54;
    _result(97, 7) = -_tmp31 - x0;
    _result(68, 8) = 1;
    _result(74, 8) = 2 - _tmp52;
    _result(77, 8) = x0*(_tmp55 + x1);
    _result(81, 8) = -_tmp57 - x3;
    _result(84, 8) = -_tmp59 - x0;
    _result(88, 8) = _tmp30 + _tmp60;
    _result(91, 8) = _tmp61;
    _result(95, 8) = -x2/_tmp17;
    _result(98, 8) = -_tmp3 - x3;
    _result(3, 9) = _tmp21 + x0;
    _result(4, 9) = _tmp63;
    _result(5, 9) = x4*(_tmp64 + 2);
    _result(9, 9) = -_tmp24*_tmp37;
    _result(10, 9) = _tmp65*x0;
    _result(11, 9) = -4;
    _result(21, 9) = _tmp7;
    _result(22, 9) = -_tmp32*_tmp66;
    _result(23, 9) = x2*(_tmp9 + x0);
    _result(33, 9) = _tmp67;
    _result(34, 9) = -_tmp47 - _tmp68 - x4;
    _result(35, 9) = _tmp69;
    _result(45, 9) = (Scalar(3)/Scalar(2))*x0;
    _result(47, 9) = -_tmp70 - _tmp71;
    _result(57, 9) = _tmp72*x4;
    _result(58, 9) = _tmp32*_tmp5;
    _result(59, 9) = _tmp73;
    _result(69, 9) = -_tmp43 - _tmp74;
    _result(70, 9) = _tmp66;
    _result(71, 9) = _tmp75;
    _result(73, 9) = -_tmp12 - _tmp76;
    _result(74, 9) = -_tmp20 - _tmp77;
    _result(76, 9) = _tmp58;
    _result(77, 9) = 2*_tmp78;
    _result(80, 9) = -_tmp15 - 2;
    _result(81, 9) = -_tmp32*_tmp79 - _tmp61;
    _result(84, 9) = -2;
    _result(87, 9) = -4*_tmp52*_tmp80;
    _result(88, 9) = _tmp67 + _tmp81;
    _result(90, 9) = -_tmp71 + (Scalar(3)/Scalar(2))*x1;
    _result(94, 9) = -_tmp47;
    _result(95, 9) = -_tmp48 - _tmp61 - _tmp82;
    _result(97, 9) = _tmp35;
    _result(98, 9) = 2/_tmp19;
    _result(3, 10) = _tmp84;
    _result(4, 10) = _tmp85;
    _result(5, 10) = -_tmp86*x0;
    _result(9, 10) = _tmp12;
    _result(10, 10) = _tmp87*x2;
    _result(11, 10) = x0;
    _result(21, 10) = _tmp74*_tmp88;
    _result(22, 10) = _tmp81;
    _result(23, 10) = -_tmp89;
    _result(33, 10) = _tmp90;
    _result(34, 10) = 6*x0 - 2;
    _result(35, 10) = 2 - _tmp91;
    _result(45, 10) = -_tmp92;
    _result(46, 10) = -_tmp28*_tmp37 - x0;
    _result(47, 10) = _tmp39*_tmp93;
    _result(57, 10) = x0;
    _result(58, 10) = x4/(_tmp0 + x4);
    _result(59, 10) = _tmp94*x3 + 1;
    _result(69, 10) = _tmp95 + x1;
    _result(70, 10) = _tmp96;
    _result(71, 10) = x3*(_tmp20 + _tmp97);
    _result(74, 10) = Scalar(2.0)*_tmp25*x2;
    _result(75, 10) = _tmp19 + _tmp98;
    _result(77, 10) = 8 - _tmp8;
    _result(79, 10) = Scalar(1)/Scalar(2);
    _result(81, 10) = -_tmp99*x2 + 2;
    _result(82, 10) = _tmp38 + _tmp60;
    _result(84, 10) = -_tmp79;
    _result(86, 10) = -_tmp100 - _tmp49;
    _result(88, 10) = _tmp101*x4 + 1;
    _result(89, 10) = -_tmp102;
    _result(91, 10) = -_tmp36 - _tmp38;
    _result(93, 10) = -_tmp2 - _tmp32;
    _result(95, 10) = _tmp15 + _tmp71;
    _result(96, 10) = -_tmp36 - _tmp86*x1;
    _result(98, 10) = _tmp103*_tmp80 - x2;
    _result(3, 11) = _tmp60;
    _result(5, 11) = _tmp105*x2;
    _result(9, 11) = _tmp52;
    _result(10, 11) = 3;
    _result(11, 11) = -_tmp106 - 1;
    _result(21, 11) = -_tmp34;
    _result(22, 11) = _tmp28 + _tmp54;
    _result(23, 11) = -2;
    _result(33, 11) = _tmp107 + _tmp109;
    _result(34, 11) = -_tmp110 - _tmp67;
    _result(35, 11) = _tmp13*_tmp30;
    _result(45, 11) = _tmp111*x0 - 2;
    _result(46, 11) = _tmp29;
    _result(47, 11) = -_tmp112*x3;
    _result(57, 11) = -Scalar(2.0)*x0;
    _result(58, 11) = -_tmp77;
    _result(59, 11) = _tmp113;
    _result(69, 11) = -x1*(-_tmp114 + x3);
    _result(70, 11) = _tmp44;
    _result(71, 11) = -_tmp115;
    _result(72, 11) = _tmp116*_tmp79;
    _result(75, 11) = _tmp117/(_tmp8 + 1) + x3;
    _result(76, 11) = 2;
    _result(79, 11) = _tmp60;
    _result(80, 11) = -_tmp118*_tmp60;
    _result(82, 11) = -x3*(_tmp119 + x0);
    _result(83, 11) = _tmp107;
    _result(86, 11) = -_tmp120 - _tmp121;
    _result(87, 11) = _tmp60 - 4;
    _result(90, 11) = _tmp123;
    _result(93, 11) = _tmp63;
    _result(94, 11) = -_tmp26/(_tmp13 + x3);
    _result(96, 11) = -x4 + Scalar(-1.0);
    _result(97, 11) = _tmp120;
    _result(12, 12) = _tmp68 + _tmp99;
    _result(16, 12) = _tmp124;
    _result(17, 12) = _tmp125*x3 - x2;
    _result(22, 12) = _tmp76;
    _result(23, 12) = -_tmp43;
    _result(72, 12) = _tmp125;
    _result(75, 12) = -_tmp126 - _tmp8;
    _result(13, 13) = -_tmp127 - _tmp98;
    _result(15, 13) = _tmp115;
    _result(17, 13) = _tmp128;
    _result(21, 13) = -_tmp129;
    _result(23, 13) = -_tmp130*_tmp9 + 1;
    _result(73, 13) = _tmp131;
    _result(76, 13) = _tmp50*x0;
    _result(14, 14) = _tmp106 - _tmp32;
    _result(15, 14) = _tmp62*x1;
    _result(16, 14) = -_tmp44;
    _result(21, 14) = -_tmp117 - _tmp121;
    _result(22, 14) = _tmp8 + 3;
    _result(74, 14) = -_tmp106*_tmp13;
    _result(77, 14) = x1*(_tmp87 + x3);
    _result(9, 15) = _tmp43*(_tmp0 + _tmp61);
    _result(10, 15) = -_tmp122;
    _result(11, 15) = _tmp78 + x3;
    _result(13, 15) = -_tmp107 - _tmp112;
    _result(14, 15) = -Scalar(0.5)*_tmp37*_tmp80;
    _result(15, 15) = _tmp100;
    _result(16, 15) = _tmp100 + _tmp8;
    _result(17, 15) = -_tmp28 - _tmp40;
    _result(21, 15) = -_tmp132 - _tmp133 - _tmp61;
    _result(22, 15) = _tmp134;
    _result(23, 15) = _tmp136;
    _result(76, 15) = -_tmp137 - 4;
    _result(77, 15) = _tmp20;
    _result(9, 16) = _tmp119;
    _result(10, 16) = _tmp108*x2 - x1;
    _result(11, 16) = _tmp138 + x1;
    _result(12, 16) = -_tmp139*_tmp52;
    _result(14, 16) = _tmp11;
    _result(15, 16) = -_tmp94;
    _result(16, 16) = _tmp78*_tmp99 - 1;
    _result(17, 16) = _tmp37*x3 + 2;
    _result(21, 16) = _tmp140;
    _result(22, 16) = x1*(_tmp37 + 2);
    _result(23, 16) = _tmp60 + 1;
    _result(75, 16) = _tmp141;
    _result(77, 16) = x2*(_tmp50 + x4);
    _result(9, 17) = _tmp52;
    _result(11, 17) = -4*_tmp56;
    _result(12, 17) = -_tmp103*x4;
    _result(13, 17) = -_tmp141*x3;
    _result(15, 17) = -2;
    _result(16, 17) = -_tmp21 - x2;
    _result(17, 17) = -_tmp131*x0 + 2;
    _result(21, 17) = -_tmp78*x1;
    _result(22, 17) = -_tmp57;
    _result(23, 17) = _tmp142;
    _result(75, 17) = -_tmp44*x2;
    _result(76, 17) = -_tmp108*x1;
    _result(12, 18) = -_tmp143 - _tmp19;
    _result(18, 18) = _tmp36;
    _result(22, 18) = -Scalar(1)/Scalar(2)*_tmp7*x2;
    _result(23, 18) = _tmp144*_tmp17;
    _result(13, 19) = _tmp145;
    _result(19, 19) = _tmp77;
    _result(21, 19) = 5*x3;
    _result(23, 19) = _tmp14 + _tmp77;
    _result(14, 20) = 1 - _tmp146;
    _result(20, 20) = _tmp127;
    _result(21, 20) = -_tmp98;
    _result(22, 20) = _tmp147;
    _result(15, 21) = -_tmp120*x0;
    _result(21, 21) = _tmp86 + x4;
    _result(16, 22) = _tmp59;
    _result(22, 22) = _tmp6*x2;
    _result(17, 23) = -[&]() { const Scalar base = x4; return base * base * base; }();
    _result(23, 23) = -_tmp67 - x0;
    _result(24, 24) = -_tmp5*_tmp8;
    _result(29, 24) = _tmp124;
    _result(34, 24) = -_tmp148 - x4;
    _result(35, 24) = _tmp146;
    _result(79, 24) = Scalar(2.5)*x3;
    _result(82, 24) = -_tmp149;
    _result(25, 25) = _tmp137*_tmp150;
    _result(27, 25) = -_tmp151 - 12;
    _result(29, 25) = _tmp152*_tmp95*x3;
    _result(33, 25) = _tmp25*(x1 - 4);
    _result(80, 25) = -2;
    _result(83, 25) = _tmp42 + x4;
    _result(26, 26) = _tmp8 + 4;
    _result(28, 26) = _tmp70 + _tmp76;
    _result(33, 26) = -_tmp11*x4 + _tmp32;
    _result(34, 26) = _tmp44;
    _result(81, 26) = -_tmp107*(_tmp15 + x3);
    _result(84, 26) = -_tmp153 - 3;
    _result(9, 27) = _tmp84;
    _result(10, 27) = _tmp68;
    _result(11, 27) = -_tmp154;
    _result(25, 27) = _tmp61;
    _result(26, 27) = -_tmp155*_tmp76;
    _result(27, 27) = 3*_tmp54 + 1;
    _result(28, 27) = -_tmp44*x3 - _tmp61;
    _result(29, 27) = -2*_tmp130;
    _result(33, 27) = -_tmp156 - _tmp9;
    _result(34, 27) = _tmp12 + _tmp135 + _tmp157;
    _result(35, 27) = -_tmp100 - _tmp129;
    _result(83, 27) = -_tmp122 - _tmp60;
    _result(84, 27) = _tmp36 + 3*x0;
    _result(9, 28) = _tmp145 + _tmp8;
    _result(10, 28) = _tmp40*_tmp76;
    _result(11, 28) = _tmp108;
    _result(24, 28) = -x2*(_tmp138 + x2);
    _result(26, 28) = -_tmp71 + 2*_tmp80;
    _result(27, 28) = _tmp77 - 3*x3;
    _result(28, 28) = _tmp35;
    _result(29, 28) = _tmp158 + _tmp36;
    _result(33, 28) = -_tmp2*x0;
    _result(34, 28) = _tmp157;
    _result(35, 28) = -_tmp160 - 4;
    _result(82, 28) = -_tmp120*_tmp37;
    _result(84, 28) = _tmp161 + _tmp22 + 8;
    _result(9, 29) = x2/(_tmp126 + x0);
    _result(10, 29) = -2*_tmp52 - x2;
    _result(24, 29) = -_tmp3;
    _result(25, 29) = 4;
    _result(27, 29) = _tmp162;
    _result(28, 29) = -_tmp163 - Scalar(1)/Scalar(3)*x0;
    _result(29, 29) = _tmp12 + _tmp164;
    _result(33, 29) = _tmp165 + x3;
    _result(34, 29) = x2 - x2/_tmp166;
    _result(82, 29) = _tmp135*_tmp5 + x2;
    _result(83, 29) = _tmp113 + _tmp167 + 6;
    _result(24, 30) = _tmp168;
    _result(30, 30) = _tmp102*_tmp8;
    _result(34, 30) = x0/(_tmp169*x4 + x4);
    _result(35, 30) = -_tmp111;
    _result(25, 31) = _tmp171;
    _result(31, 31) = _tmp141*_tmp5 - 2;
    _result(33, 31) = _tmp29;
    _result(35, 31) = -_tmp160*x1;
    _result(26, 32) = -x1/_tmp172;
    _result(32, 32) = -std::pow(_tmp13, Scalar(2))*x2;
    _result(33, 32) = 2 - _tmp97;
    _result(34, 32) = _tmp70;
    _result(27, 33) = -_tmp152*x1;
    _result(33, 33) = -x4*(_tmp155 + 1);
    _result(28, 34) = x4*(_tmp25 + _tmp70);
    _result(34, 34) = _tmp15*x1 + x3;
    _result(29, 35) = 2/(_tmp155*x2 - 2);
    _result(35, 35) = -x2*(_tmp135 + x1);
    _result(36, 36) = -_tmp173;
    _result(41, 36) = 2;
    _result(46, 36) = -_tmp51*x2 + 1;
    _result(47, 36) = _tmp87 + x1;
    _result(86, 36) = -_tmp32 - _tmp74;
    _result(89, 36) = -_tmp15 - _tmp48;
    _result(37, 37) = _tmp76*_tmp77;
    _result(39, 37) = _tmp108 + _tmp9;
    _result(41, 37) = _tmp4;
    _result(45, 37) = -_tmp78 - x4;
    _result(47, 37) = 5 - _tmp60;
    _result(87, 37) = _tmp16*x1 + x0;
    _result(90, 37) = _tmp96;
    _result(38, 38) = -_tmp158 - _tmp67;
    _result(39, 38) = _tmp20;
    _result(40, 38) = x3*(_tmp20 + _tmp54 + 1);
    _result(45, 38) = _tmp41;
    _result(46, 38) = _tmp128*x3;
    _result(88, 38) = -_tmp174;
    _result(91, 38) = _tmp97;
    _result(9, 39) = _tmp35;
    _result(10, 39) = 1 - _tmp175;
    _result(11, 39) = _tmp17*_tmp24 - 1;
    _result(37, 39) = _tmp176;
    _result(38, 39) = _tmp177 + _tmp178;
    _result(39, 39) = _tmp179;
    _result(40, 39) = _tmp180;
    _result(41, 39) = x0 - 4;
    _result(45, 39) = x0;
    _result(46, 39) = _tmp88;
    _result(47, 39) = x3/(_tmp80 + 2);
    _result(90, 39) = -_tmp151 - 6*x2;
    _result(91, 39) = _tmp0*_tmp62;
    _result(9, 40) = -_tmp157*_tmp71;
    _result(10, 40) = _tmp12 + _tmp40 + _tmp61;
    _result(11, 40) = _tmp155*_tmp22;
    _result(36, 40) = -_tmp136*x4 - 2;
    _result(38, 40) = _tmp141;
    _result(39, 40) = _tmp13*_tmp39 + _tmp80;
    _result(40, 40) = _tmp39*_tmp78;
    _result(41, 40) = _tmp88;
    _result(45, 40) = -_tmp116;
    _result(46, 40) = _tmp176 + _tmp97;
    _result(47, 40) = _tmp171;
    _result(89, 40) = _tmp44;
    _result(91, 40) = _tmp20;
    _result(9, 41) = -_tmp50;
    _result(10, 41) = -_tmp33*x4 - 2;
    _result(11, 41) = _tmp150;
    _result(36, 41) = _tmp173*_tmp47;
    _result(37, 41) = x0*(_tmp32 + _tmp61);
    _result(39, 41) = -x2/_tmp51;
    _result(40, 41) = -_tmp140*x4;
    _result(41, 41) = -x3*(_tmp8 - 3);
    _result(45, 41) = -_tmp148*_tmp155*_tmp79;
    _result(46, 41) = x4*(_tmp100 + x2);
    _result(47, 41) = _tmp44;
    _result(89, 41) = -x0*(_tmp8 - 1);
    _result(90, 41) = x1 + Scalar(1.0) / (_tmp156);
    _result(36, 42) = -_tmp101 + x4;
    _result(42, 42) = _tmp11*_tmp3;
    _result(46, 42) = _tmp127;
    _result(47, 42) = _tmp181*(_tmp169 + _tmp36);
    _result(37, 43) = -Scalar(2)/Scalar(3)*_tmp5;
    _result(43, 43) = _tmp182 + _tmp61;
    _result(45, 43) = _tmp183 + _tmp76;
    _result(47, 43) = _tmp73 + x3;
    _result(38, 44) = _tmp36;
    _result(44, 44) = _tmp184;
    _result(45, 44) = _tmp60;
    _result(46, 44) = x4;
    _result(39, 45) = _tmp27;
    _result(45, 45) = -1;
    _result(40, 46) = 2 - _tmp175;
    _result(41, 47) = x3;
    _result(47, 47) = -_tmp166;
    _result(48, 48) = _tmp61;
    _result(52, 48) = _tmp28;
    _result(53, 48) = _tmp185;
    _result(58, 48) = _tmp186;
    _result(59, 48) = _tmp72*_tmp8*_tmp93;
    _result(93, 48) = -x2*(_tmp40 - 2);
    _result(96, 48) = _tmp180;
    _result(49, 49) = _tmp48;
    _result(51, 49) = -_tmp172;
    _result(53, 49) = -_tmp182 + x0;
    _result(57, 49) = -_tmp37*(_tmp13 + _tmp36);
    _result(59, 49) = _tmp31;
    _result(94, 49) = _tmp77;
    _result(97, 49) = 1 - _tmp60;
    _result(50, 50) = -_tmp165 - _tmp30;
    _result(51, 50) = _tmp70;
    _result(52, 50) = -_tmp25 + _tmp54;
    _result(57, 50) = -_tmp71;
    _result(58, 50) = _tmp187;
    _result(95, 50) = _tmp125 + _tmp188*_tmp6;
    _result(98, 50) = _tmp14;
    _result(9, 51) = -_tmp13*x0;
    _result(10, 51) = -4*x0;
    _result(11, 51) = _tmp8;
    _result(49, 51) = _tmp52;
    _result(50, 51) = -x0 + Scalar(-0.5);
    _result(51, 51) = _tmp54 + x3;
    _result(52, 51) = -x1/_tmp43;
    _result(53, 51) = -2/(-_tmp108*_tmp5 + x1);
    _result(57, 51) = 2;
    _result(58, 51) = -_tmp55;
    _result(59, 51) = -_tmp6;
    _result(97, 51) = -_tmp88;
    _result(98, 51) = _tmp25;
    _result(9, 52) = -_tmp52;
    _result(10, 52) = -_tmp9 - 4;
    _result(11, 52) = x4*(_tmp0 - 4);
    _result(48, 52) = _tmp132*_tmp79 + x1;
    _result(50, 52) = x3*(-_tmp13*x3 + x0);
    _result(51, 52) = _tmp135 - _tmp71*x3;
    _result(52, 52) = _tmp41;
    _result(53, 52) = _tmp174;
    _result(57, 52) = _tmp31*x3;
    _result(58, 52) = _tmp125*x0;
    _result(59, 52) = -_tmp54 - x2;
    _result(96, 52) = _tmp114*(_tmp12 + _tmp32);
    _result(98, 52) = _tmp60;
    _result(9, 53) = _tmp103 + x3;
    _result(10, 53) = _tmp31 + x2;
    _result(11, 53) = -_tmp69 - x0;
    _result(48, 53) = -1;
    _result(49, 53) = 6 - _tmp32;
    _result(51, 53) = -_tmp143*_tmp149;
    _result(52, 53) = -_tmp86;
    _result(53, 53) = -_tmp110*x4 - _tmp12;
    _result(57, 53) = -_tmp185*x0;
    _result(58, 53) = _tmp83;
    _result(59, 53) = _tmp13;
    _result(96, 53) = -_tmp151 - 2;
    _result(97, 53) = x2 + Scalar(1.0);
    _result(48, 54) = _tmp69;
    _result(54, 54) = -_tmp19 - x1;
    _result(58, 54) = -_tmp37;
    _result(59, 54) = _tmp60 + _tmp90;
    _result(49, 55) = _tmp140*_tmp189;
    _result(55, 55) = Scalar(0.5);
    _result(57, 55) = _tmp2;
    _result(59, 55) = _tmp78 - 1;
    _result(50, 56) = _tmp45 - x1;
    _result(56, 56) = _tmp190 - 5;
    _result(57, 56) = -_tmp146*x0;
    _result(58, 56) = _tmp107 + _tmp120 + _tmp76;
    _result(51, 57) = x4*(_tmp25 + x4);
    _result(57, 57) = -_tmp191;
    _result(52, 58) = _tmp52;
    _result(58, 58) = -_tmp186;
    _result(53, 59) = _tmp0;
    _result(59, 59) = -_tmp5*(_tmp100 + x0) + 2;
    _result(0, 60) = _tmp25;
    _result(1, 61) = _tmp39 + _tmp43;
    _result(2, 62) = -_tmp18*_tmp43;
    _result(3, 63) = _tmp60;
    _result(4, 64) = std::pow(_tmp28, Scalar(2));
    _result(5, 65) = -_tmp108*_tmp135;
    _result(0, 66) = _tmp13 + _tmp74;
    _result(6, 66) = _tmp44;
    _result(1, 67) = _tmp106;
    _result(7, 67) = _tmp85;
    _result(2, 68) = _tmp156 + 3;
    _result(8, 68) = x2;
    _result(3, 69) = -_tmp3 - _tmp47*_tmp60;
    _result(4, 69) = x3*(2*_tmp23 + 2) + x3;
    _result(5, 69) = _tmp9;
    _result(9, 69) = _tmp8 - 4;
    _result(11, 69) = -_tmp32*_tmp72 + 2;
    _result(3, 70) = _tmp82;
    _result(4, 70) = _tmp167;
    _result(5, 70) = _tmp149/_tmp47;
    _result(9, 70) = _tmp192 - _tmp78*x3;
    _result(10, 70) = x2*(_tmp100 + x1);
    _result(11, 70) = _tmp28;
    _result(3, 71) = -x4 - 3;
    _result(4, 71) = -_tmp19*x3;
    _result(5, 71) = x0*(-_tmp76 + x0) - 1;
    _result(9, 71) = 2;
    _result(10, 71) = 1;
    _result(11, 71) = _tmp188 + _tmp60;
    _result(6, 72) = -3;
    _result(10, 72) = -_tmp149 - _tmp193;
    _result(11, 72) = _tmp154;
    _result(18, 72) = _tmp194*x1 + x0;
    _result(7, 73) = _tmp37*(_tmp60 + x1);
    _result(9, 73) = -_tmp135*_tmp17*_tmp176;
    _result(11, 73) = _tmp72;
    _result(19, 73) = _tmp28;
    _result(8, 74) = _tmp153 + x2;
    _result(9, 74) = _tmp189 + _tmp88;
    _result(10, 74) = _tmp37*_tmp76 + x1;
    _result(20, 74) = -x2/_tmp52;
    _result(6, 75) = _tmp123;
    _result(10, 75) = Scalar(2.0) - _tmp195;
    _result(11, 75) = x0*(-_tmp107*_tmp80 + x4);
    _result(18, 75) = _tmp113 - x0;
    _result(22, 75) = _tmp28 + _tmp68;
    _result(23, 75) = -_tmp15*x0;
    _result(75, 75) = _tmp13*_tmp135;
    _result(78, 75) = Scalar(4.0);
    _result(7, 76) = _tmp0 + _tmp133;
    _result(9, 76) = -2*_tmp6 - 2;
    _result(11, 76) = 4 - _tmp9;
    _result(19, 76) = -_tmp157*_tmp62;
    _result(21, 76) = _tmp88;
    _result(23, 76) = _tmp187;
    _result(76, 76) = -_tmp2 - _tmp20 - x1;
    _result(78, 76) = _tmp192 + _tmp61;
    _result(8, 77) = _tmp51;
    _result(9, 77) = x3*(_tmp89 + 2);
    _result(10, 77) = 1;
    _result(20, 77) = x1*(_tmp32 + _tmp82);
    _result(21, 77) = -_tmp144*_tmp8;
    _result(22, 77) = _tmp68;
    _result(77, 77) = _tmp195 + Scalar(1.0)*x0;
    _result(78, 77) = -_tmp61 - x2;
    _result(6, 78) = -_tmp81*x1 + x0;
    _result(7, 78) = -_tmp183;
    _result(8, 78) = _tmp164;
    _result(9, 78) = _tmp20;
    _result(10, 78) = -_tmp5*x3;
    _result(11, 78) = x2*(_tmp0 + _tmp8);
    _result(18, 78) = _tmp125;
    _result(19, 78) = x1*(_tmp61 + _tmp77);
    _result(20, 78) = _tmp168;
    _result(21, 78) = -_tmp114 - _tmp35;
    _result(22, 78) = _tmp139*_tmp79;
    _result(23, 78) = _tmp36;
    _result(6, 79) = 2*_tmp11*_tmp169;
    _result(10, 79) = 2;
    _result(11, 79) = -_tmp2 - _tmp61 - x4;
    _result(30, 79) = _tmp125 - _tmp51*x4;
    _result(7, 80) = _tmp177;
    _result(9, 80) = _tmp33;
    _result(11, 80) = _tmp184;
    _result(31, 80) = 2/_tmp125;
    _result(8, 81) = x1;
    _result(9, 81) = _tmp108 + x1*(_tmp30 + x4);
    _result(10, 81) = -_tmp14 - _tmp8;
    _result(32, 81) = -_tmp11 + x1;
    _result(6, 82) = _tmp74;
    _result(10, 82) = _tmp194 + x3;
    _result(11, 82) = -_tmp12 - _tmp64;
    _result(30, 82) = -_tmp58*_tmp77;
    _result(34, 82) = _tmp128;
    _result(35, 82) = -x1*(-_tmp139 + x0);
    _result(82, 82) = Scalar(8.0)*x3 + Scalar(-8.0);
    _result(7, 83) = -x2/_tmp144;
    _result(9, 83) = Scalar(-2.0);
    _result(11, 83) = 1 - _tmp75;
    _result(31, 83) = 1 - 3*x2;
    _result(33, 83) = x0*(_tmp72 + x1);
    _result(35, 83) = _tmp86;
    _result(83, 83) = -_tmp134;
    _result(85, 83) = -_tmp47 - _tmp48*x4;
    _result(8, 84) = -_tmp65;
    _result(9, 84) = _tmp142;
    _result(10, 84) = -2/_tmp11;
    _result(32, 84) = _tmp104 - 2;
    _result(33, 84) = _tmp17 + _tmp9;
    _result(34, 84) = _tmp46 + Scalar(2.0);
    _result(84, 84) = _tmp86;
    _result(85, 84) = _tmp145*x0;
    _result(6, 85) = _tmp77*_tmp9;
    _result(7, 85) = _tmp138 + _tmp36;
    _result(8, 85) = _tmp47 + x3;
    _result(9, 85) = _tmp8*x1 + x3;
    _result(10, 85) = -_tmp0*_tmp80;
    _result(30, 85) = -((Scalar(1)/Scalar(2))*_tmp107 + 1)/_tmp108;
    _result(31, 85) = -_tmp72;
    _result(32, 85) = -_tmp3*_tmp6;
    _result(33, 85) = _tmp67 + _tmp74 + x1;
    _result(34, 85) = -_tmp52*x1;
    _result(35, 85) = -_tmp120 - _tmp20;
    _result(6, 86) = -x4*(_tmp121 + 4);
    _result(10, 86) = -4;
    _result(11, 86) = _tmp32 + _tmp60;
    _result(42, 86) = _tmp40*x0;
    _result(7, 87) = -_tmp141 - _tmp97;
    _result(9, 87) = -_tmp24*(_tmp40 + 2);
    _result(11, 87) = _tmp196;
    _result(43, 87) = 4 - _tmp40;
    _result(8, 88) = _tmp161;
    _result(9, 88) = -2;
    _result(10, 88) = _tmp126;
    _result(44, 88) = _tmp62*_tmp78;
    _result(6, 89) = -_tmp43*(_tmp12 + _tmp47);
    _result(10, 89) = -_tmp24;
    _result(11, 89) = _tmp0 + 8*x3;
    _result(42, 89) = _tmp67;
    _result(46, 89) = _tmp49 + _tmp54;
    _result(47, 89) = 4;
    _result(89, 89) = Scalar(2.0)*x3;
    _result(92, 89) = _tmp108 + x3;
    _result(7, 90) = _tmp120 + _tmp32;
    _result(9, 90) = _tmp120 + _tmp9;
    _result(11, 90) = -_tmp163 - _tmp28;
    _result(43, 90) = _tmp25;
    _result(45, 90) = -_tmp35 - x4;
    _result(47, 90) = _tmp68 + _tmp79 + 4;
    _result(90, 90) = _tmp64 + x1;
    _result(92, 90) = -_tmp197;
    _result(8, 91) = _tmp10;
    _result(9, 91) = _tmp144 + _tmp20;
    _result(10, 91) = -6;
    _result(44, 91) = _tmp198;
    _result(45, 91) = x0*(_tmp132 - 1) + x0;
    _result(46, 91) = (Scalar(1)/Scalar(4))*_tmp199 + 2;
    _result(91, 91) = _tmp103*_tmp30 + 2;
    _result(92, 91) = 2/_tmp176;
    _result(6, 92) = _tmp191 + _tmp9;
    _result(7, 92) = -_tmp193;
    _result(8, 92) = _tmp200;
    _result(9, 92) = _tmp0;
    _result(10, 92) = _tmp132;
    _result(11, 92) = _tmp17;
    _result(42, 92) = -_tmp91;
    _result(43, 92) = -_tmp79 - x1;
    _result(44, 92) = -_tmp201;
    _result(45, 92) = _tmp54 + 3;
    _result(46, 92) = _tmp162 - _tmp17;
    _result(47, 92) = -4*_tmp6;
    _result(6, 93) = -_tmp199;
    _result(10, 93) = -_tmp24*_tmp62*x2;
    _result(11, 93) = _tmp196;
    _result(54, 93) = _tmp19 + x4;
    _result(7, 94) = _tmp24 + _tmp99;
    _result(9, 94) = x3/(-_tmp5*_tmp9 + _tmp60);
    _result(11, 94) = _tmp201;
    _result(55, 94) = -_tmp144*_tmp155 - _tmp88;
    _result(8, 95) = -8*x4;
    _result(9, 95) = -_tmp135 - _tmp36;
    _result(10, 95) = -x4/_tmp131;
    _result(56, 95) = _tmp50 + _tmp81;
    _result(6, 96) = _tmp147;
    _result(10, 96) = _tmp139;
    _result(11, 96) = _tmp178;
    _result(54, 96) = -_tmp12 - Scalar(1)/Scalar(2)*_tmp139;
    _result(58, 96) = -6*x3;
    _result(59, 96) = -_tmp44 - x3;
    _result(96, 96) = _tmp53;
    _result(99, 96) = _tmp176*_tmp37;
    _result(7, 97) = -x1*(_tmp159 + 2);
    _result(9, 97) = _tmp43;
    _result(11, 97) = -_tmp93 - x1;
    _result(55, 97) = -_tmp105 - _tmp61 - 1;
    _result(57, 97) = -_tmp0 - _tmp9;
    _result(59, 97) = _tmp52/(_tmp109 + x2);
    _result(97, 97) = _tmp200;
    _result(99, 97) = -x0*(_tmp22 + x4);
    _result(8, 98) = _tmp43 - 1;
    _result(9, 98) = _tmp197;
    _result(10, 98) = -2;
    _result(56, 98) = _tmp190*_tmp80;
    _result(57, 98) = -x3*(_tmp3 + _tmp61) + 1;
    _result(58, 98) = Scalar(5)/Scalar(2) - _tmp181;
    _result(98, 98) = _tmp179;
    _result(99, 98) = _tmp68 + _tmp8;
    _result(6, 99) = -_tmp170*x4;
    _result(7, 99) = _tmp198 + _tmp62;
    _result(8, 99) = _tmp8;
    _result(9, 99) = -x2*(_tmp61 + _tmp97);
    _result(10, 99) = -_tmp74 - 3;
    _result(11, 99) = -2 + _tmp6/_tmp137;
    _result(54, 99) = -_tmp155;
    _result(55, 99) = _tmp107 + _tmp8;
    _result(56, 99) = -x0*(_tmp150 + x4);
    _result(57, 99) = 1 - _tmp64/_tmp48;
    _result(58, 99) = _tmp118;
    _result(59, 99) = _tmp79;

    return _result;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym
