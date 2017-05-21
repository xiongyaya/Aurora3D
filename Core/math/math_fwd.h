#pragma once

#include"../type.h"

namespace Aurora3D
{
	class Vector3;
	class Vector4;
	class Matrix4;
	class Capsule;
	class Plane;
	class Sphere;
	class Vector2;
	class Euler;
	class Quaternion;

	namespace MathConstant
	{
		constexpr float kPI = 3.1415926535897932f;
		constexpr float k2PI = 2 * kPI;
		constexpr float k4PI = 4 * kPI;
		constexpr float k180OverPI = 180.0f / kPI;   //radian to degree
		constexpr float kPIOver180 = kPI / 180.0f;   //degree to radian
		constexpr float kOneOverPI = 1.0f / kPI;
		constexpr float kOneOver2PI = 1.0f / (2 * kPI);
		constexpr float kHalfPI = kPI / 2.0f;
		constexpr float kQuarterPI = kPI / 4.0f;
		constexpr uint32 kTopZero = 0x7fffffff;
		constexpr uint32 kTopOne = 0x80000000;
		constexpr uint32 kAllOneMask = 0xffffffff;
		constexpr uint32 kAllZeroMask = 0x00000000;
		constexpr uint32 kInfinite = 0x7f800000;
		constexpr uint32 kNegtiveInfinite = 0xff800000;
		constexpr uint32 kNaN = 0xffc00000;
		constexpr float kSmallEpside = 1.e-6f;
		constexpr float kMiddleEpside = 1.e-4f;
	}
	

}
