#pragma once

#include<Core/type.h>

namespace Aurora3D
{
	namespace math
	{
		union Vector3;
		union Vector4;
		class Matrix4;
		class Capsule;
		class Plane;
		class Sphere;
		class Vector2;
		class Euler;
		class Quaternion;

		constexpr float kfPi = 3.1415926535897932f;
		constexpr float kf2Pi = 2 * kfPi;
		constexpr float kf4Pi = 4 * kfPi;
		constexpr float kf180OverPi = 180.0f / kfPi;   //radian to degree
		constexpr float kfPiOver180 = kfPi / 180.0f;   //degree to radian
		constexpr float kfOneOverPi = 1.0f / kfPi;
		constexpr float kfOneOver2Pi = 1.0f / (2 * kfPi);
		constexpr float kfOneOver2PiSquare = 1.0f / (4 * kfPi * kfPi);
		constexpr float kfHalfPi = kfPi / 2.0f;
		constexpr float kfQuarterPi = kfPi / 4.0f;
		constexpr uint32 kfTopZero = 0x7fffffff;
		constexpr uint32 kfTopOne = 0x80000000;
		constexpr uint32 kfAllOneMask = 0xffffffff;
		constexpr uint32 kfAllZeroMask = 0x00000000;
		constexpr uint32 kfPositiveInf = 0x7f800000;
		constexpr uint32 kfNegativeInf = 0xff800000;
		constexpr uint32 kfNaN = 0xffc00000;
		constexpr float kfSmallEpiside =  1.e-6f;
		constexpr float kfMiddleEpiside = 1.e-4f;
		constexpr float kfMiddleSQEpiside = 5.e-6f;
	}
}

