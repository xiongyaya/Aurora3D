#pragma once

#include<array>
#include<string>
#include<cassert>
#include<iostream>
#include<initializer_list>
#include<Core/math/math_impl.h>
#include<Core/auxililty/ingore_unused.h>

#pragma warning(disable:4996)

namespace Aurora3D
{
	namespace math
	{
		//void _mm_prefetch (char const* p, int i)
		//void _mm_sfence (void)
		//float128 wrap type

		struct InitPoint2D {};
		struct InitLine2D {};
		struct InitPoint3D {};
		struct InitLine3D {};

		AURORA3D_API union alignas(16) Vector4
		{
		public:
			float    data[4];
			uint32   udata[4];
			float128 vec;
			uint128  uvec;
			static constexpr InitPoint2D   Point2D{};
			static constexpr InitLine2D    Line2D{};
			static constexpr InitPoint3D   Point3D{};
			static constexpr InitLine3D    Line3D{};

			/**
			 *  construction
			 */
			// (0.0f, 0.0f, 0.0f, 0.0f)
			A3D_FORCEINLINE constexpr Vector4() : vec{ math_impl::kVectorZero } {}

			// (inx, iny, inz, inw), general construction
			A3D_FORCEINLINE Vector4(float inx, float iny, float inz = 0.0f, float inw = 0.0f);

			// (inx, iny, inz, inw), element is uint
			A3D_FORCEINLINE Vector4(uint32 inx, uint32 iny, uint32 inz = 0, uint32 inw = 0);

			// (inx, iny, inz, 1.0f)
			A3D_FORCEINLINE Vector4(InitPoint3D, float inx, float iny, float inz) :Vector4(inx, iny, inz, 1.0f) {}

			// (inx, iny, inz, 0.0f), avoid to be a divend, or will cause a div zero error
			A3D_FORCEINLINE Vector4(InitLine3D, float inx, float iny, float inz):Vector4(inx,iny,inz,0.0f){}

			// (inx, inty, 1.0f, 1.0f) do 2d vector caculation,set w 0 to avoid div zero
			A3D_FORCEINLINE Vector4(InitPoint2D, float inx, float iny) : Vector4(inx, iny, 1.0f, 1.0f) {}

			// (inx, inty, 0.0f, 1.0f) do 2d vector caculation, avoid to be a divend
			A3D_FORCEINLINE Vector4(InitLine2D, float inx, float iny) : Vector4(inx, iny, 0.0f, 1.0f) {}

			// (F, F, F, F), make float implcitly convert to a Vector4
			A3D_FORCEINLINE Vector4(float  F) : Vector4(F, F, F, F) {};

			// (mask, mask, mask, mask), element is uint, make uint32 implcitly convert to a Vector4
			A3D_FORCEINLINE Vector4(uint32 U) :Vector4(U, U, U, U) {};

			// copy constructor
			A3D_FORCEINLINE Vector4(const Vector4&  v) : vec(v.vec) { }

			// construct from simd float128
			A3D_FORCEINLINE Vector4(const float128& v) : vec(v) { }

			// construct from simd int128/uint128
			A3D_FORCEINLINE Vector4(const uint128& v) : uvec(v) { }

			// assign from simd float128 bit
			A3D_FORCEINLINE const Vector4& operator=(const float128& v) { return vec = v; }

			// assign from simd float128 bit
			A3D_FORCEINLINE const Vector4& operator=(const uint128& v) { return uvec = v; }

			// assign from other Vector4
			A3D_FORCEINLINE const Vector4& operator=(const Vector4& v) { return vec = v.vec; }

			/**
			 *   basic operation
			 */
			// normal Vector4 variant get nth float data, nth <=3
			A3D_FORCEINLINE float&  operator[](uint32 inIndex) { assert(inIndex <= 3); return data[inIndex]; }

			// const Vector4 variant get nth float data, nth <=3
			A3D_FORCEINLINE float   operator[](uint32 inIndex) const { assert(inIndex <= 3); return data[inIndex]; }

			// (-x, -y, -z, -w)
			A3D_FORCEINLINE Vector4 operator-() const;

			// (x1+x2, y1+y2, z1+z2, w1+w2)
			A3D_FORCEINLINE Vector4 operator+(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator-(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator*(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator/(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator%(const Vector4& v) const { return Vector4{ vec }.AssignMod(v); }

			A3D_FORCEINLINE Vector4 operator|(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator&(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator^(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator~() const;
			// (!v1) & v
			A3D_FORCEINLINE Vector4 NotAnd(const Vector4& v) const;

			A3D_FORCEINLINE Vector4 operator>(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator>=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator<(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator<=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator==(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator!=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 NearlyEquals(const Vector4& v, float tolerence = kMiddleEpside) const { (*this - v).AssignAbs() < tolerence; }
			A3D_FORCEINLINE const Vector4& operator+=(const Vector4& v) { return *this = *this + v; }
			A3D_FORCEINLINE const Vector4& operator-=(const Vector4& v) { return *this = *this - v; }
			A3D_FORCEINLINE const Vector4& operator*=(const Vector4& v) { return *this = *this * v; }
			A3D_FORCEINLINE const Vector4& operator/=(const Vector4& v) { return *this = *this / v; }
			A3D_FORCEINLINE const Vector4& operator%=(const Vector4& v) { return *this = *this % v; }
			A3D_FORCEINLINE const Vector4& operator|=(const Vector4& v) { return *this = *this | v; }
			A3D_FORCEINLINE const Vector4& operator&=(const Vector4& v) { return *this = *this & v; }
			A3D_FORCEINLINE const Vector4& operator^=(const Vector4& v) { return *this = *this ^ v; }


			// judgement
			A3D_FORCEINLINE bool True4() const;
			A3D_FORCEINLINE bool AnyTrue4() const;
			A3D_FORCEINLINE bool AnyTrue3() const;
			A3D_FORCEINLINE bool AnyTrue2() const;
			A3D_FORCEINLINE bool False4() const;
			A3D_FORCEINLINE bool AnyFalse4() const;
			A3D_FORCEINLINE bool AnyFalse3() const;
			A3D_FORCEINLINE bool AnyFalse2() const;

			template<uint32 p0 = 0, uint32 p1 = 1, uint32 p2 = 2> 
			A3D_FORCEINLINE bool True3() const 
			{
				static_assert(p0 < 4 && p1<4 && p2<4,"index must be 0,1,2,3, out of range");
				return  udata[p0] == kAllOneMask && udata[p1] == kAllOneMask && udata[p2] == kAllOneMask;
			}
			
			template<uint32 p0 = 0, uint32 p1 = 1, uint32 p2 = 2> 
			A3D_FORCEINLINE bool False3() const 
			{
				static_assert(p0 < 4 && p1<4 && p2<4, "index must be 0,1,2,3, out of range");
				return udata[p0] == 0 && udata[p1] == 0 && udata[p2] == 0;
			}
			
			template<uint32 p0 = 0, uint32 p1 = 1> 
			A3D_FORCEINLINE bool True2() const
			{
				static_assert(p0 < 4 && p1<4, "index must be 0,1,2,3, out of range");
				return udata[p0] == kAllOneMask && udata[p1] == kAllOneMask;
			}

			template<uint32 p0 = 0, uint32 p1 = 1> A3D_FORCEINLINE bool False2() const { return udata[p0] == 0 && udata[p1] == 0; }
			template<uint32 p = 0> A3D_FORCEINLINE bool True1() const { return  udata[p] == kAllOneMask; }
			template<uint32 p = 0> A3D_FORCEINLINE bool False1() const { return udata[p] == 0; }

			// x^2+y^2 nearly equals 1
			A3D_FORCEINLINE bool IsUnit2(float tolerence = kMiddleEpside) const;
			// x^2+y^2+z^2 nearly equals 1
			A3D_FORCEINLINE bool IsUnit3(float tolerence = kMiddleEpside) const;
			// x^2+y^2+z^2+w^2 nearly equals 1
			A3D_FORCEINLINE bool IsUnit4(float tolerence = kMiddleEpside) const;

			//  min.xy <= this.xy <= max.xy
			A3D_FORCEINLINE bool IsInBound2(const Vector4& min, const Vector4& max) const { return (*this >= min).True2() && (*this <= max).True2(); }
			//  min.xyz <= this.xyz <= max.xyz
			A3D_FORCEINLINE bool IsInBound3(const Vector4& min, const Vector4& max) const { return (*this >= min).True3() && (*this <= max).True3(); }
			//  min.xyzw <= this.xyzw <= max.xyzw
			A3D_FORCEINLINE bool IsInBound4(const Vector4& min, const Vector4& max) const { return (*this >= min).True4() && (*this <= max).True4(); }

			//test one of x,y,z,w is nearly 0
			A3D_FORCEINLINE bool ContainZero4(float tolerence = kMiddleEpside) const { return Abs().AssignLess(tolerence).AnyTrue4(); }
			//test one of x,y,z is nearly 0
			A3D_FORCEINLINE bool ContainZero3(float tolerence = kMiddleEpside) const { return Abs().AssignLess(tolerence).AnyTrue3(); }
			//test one of x,y is nearly 0
			A3D_FORCEINLINE bool ContainZero2(float tolerence = kMiddleEpside) const { return Abs().AssignLess(tolerence).AnyTrue2(); }

			//test one of x,y,z,w is NaN
			A3D_FORCEINLINE bool IsNaN4() const { return (*this != *this).AnyTrue4(); }
			//test one of x,y,z is NaN
			A3D_FORCEINLINE bool IsNaN3() const { return (*this != *this).AnyTrue3(); }
			//test one of x,y is NaN
			A3D_FORCEINLINE bool IsNaN2() const { return (*this != *this).AnyTrue2(); }
			//test one of x,y,z,w is +INF or -INF
			A3D_FORCEINLINE bool IsInfinite4()const;
			//test one of x,y,z is +INF or -INF
			A3D_FORCEINLINE bool IsInfinite3()const;
			//test one of x,y is +INF or -INF
			A3D_FORCEINLINE bool IsInfinite2()const;

			//operations, access
			template<uint32 p = 0> A3D_FORCEINLINE Vector4 Repeat() const;
			template<uint32 p1, uint32 p2, uint32 p3, uint32 p4> A3D_FORCEINLINE Vector4 Reorder() const;
			template<uint32 p1 = 0, uint32 v01 = 1, uint32 v10 = 2, uint32 v11 = 3>  A3D_FORCEINLINE Vector4 PickCompose(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 xxxx() const { return Repeat<0>(); }
			A3D_FORCEINLINE Vector4 yyyy() const { return Repeat<1>(); }
			A3D_FORCEINLINE Vector4 zzzz() const { return Repeat<2>(); }
			A3D_FORCEINLINE Vector4 wwww() const { return Repeat<3>(); }
			A3D_FORCEINLINE Vector4 xywz() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 xzyw() const { return Reorder<0, 2, 1, 3>(); }
			A3D_FORCEINLINE Vector4 xzwy() const { return Reorder<0, 2, 3, 1>(); }
			A3D_FORCEINLINE Vector4 xwyz() const { return Reorder<0, 3, 1, 2>(); }
			A3D_FORCEINLINE Vector4 xwzy() const { return Reorder<0, 3, 2, 1>(); }
			A3D_FORCEINLINE Vector4 yxzw() const { return Reorder<1, 0, 2, 3>(); }
			A3D_FORCEINLINE Vector4 yxwz() const { return Reorder<1, 0, 3, 2>(); }
			A3D_FORCEINLINE Vector4 yzxw() const { return Reorder<1, 2, 0, 3>(); }
			A3D_FORCEINLINE Vector4 yzwx() const { return Reorder<1, 2, 3, 0>(); }
			A3D_FORCEINLINE Vector4 ywxz() const { return Reorder<1, 3, 0, 2>(); }
			A3D_FORCEINLINE Vector4 ywzx() const { return Reorder<1, 3, 2, 0>(); }
			A3D_FORCEINLINE Vector4 zxyw() const { return Reorder<2, 0, 1, 3>(); }
			A3D_FORCEINLINE Vector4 zxwy() const { return Reorder<2, 0, 3, 1>(); }
			A3D_FORCEINLINE Vector4 zyxw() const { return Reorder<2, 1, 0, 3>(); }
			A3D_FORCEINLINE Vector4 zywx() const { return Reorder<2, 1, 3, 0>(); }
			A3D_FORCEINLINE Vector4 zwxy() const { return Reorder<2, 3, 0, 1>(); }
			A3D_FORCEINLINE Vector4 zwyx() const { return Reorder<2, 3, 1, 0>(); }
			A3D_FORCEINLINE Vector4 wxyz() const { return Reorder<3, 0, 1, 2>(); }
			A3D_FORCEINLINE Vector4 wxzy() const { return Reorder<3, 0, 2, 1>(); }
			A3D_FORCEINLINE Vector4 wyxz() const { return Reorder<3, 1, 0, 2>(); }
			A3D_FORCEINLINE Vector4 wyzx() const { return Reorder<3, 1, 2, 0>(); }
			A3D_FORCEINLINE Vector4 wzxy() const { return Reorder<3, 2, 0, 1>(); }
			A3D_FORCEINLINE Vector4 wzyx() const { return Reorder<3, 2, 1, 0>(); }
			
			//operation assign to Assign, chain operation like  vec.AssignAdd(v1).AssignSub(v2).AssignAbs().AssignDot(v3) ....
			A3D_FORCEINLINE  Vector4& Assign(const  Vector4& v) { vec = v.vec; return *this; }
			A3D_FORCEINLINE  Vector4& AssignDot2(const  Vector4& v) { return AssignMul(v).AssignSumup2(); }
			A3D_FORCEINLINE  Vector4& AssignDot3(const  Vector4& v) { return AssignMul(v).AssignSumup3(); }
			A3D_FORCEINLINE  Vector4& AssignDot4(const  Vector4& v) { return AssignMul(v).AssignSumup4();  };
			//return _mm_xor_ps(v2, _mm_and_ps(mask, _mm_xor_ps(v1, v2)));

			A3D_FORCEINLINE  Vector4& AssignSelect(const Vector4& v1, const Vector4& v2);
			A3D_FORCEINLINE  Vector4& AssignIntPart();
			A3D_FORCEINLINE  Vector4& AssignRound();
			A3D_FORCEINLINE  Vector4& AssignFloor() { Vector4 copy{ vec };  return AssignIntPart().AssignSub(copy.AssignRStep()); }
			A3D_FORCEINLINE  Vector4& AssignCeil()  { Vector4 copy{ vec };  return AssignIntPart().AssignAdd(copy.AssignStep()); }
			A3D_FORCEINLINE  Vector4& AssignMin(const Vector4& v);
			A3D_FORCEINLINE  Vector4& AssignMax(const Vector4& v);
			A3D_FORCEINLINE  Vector4& AssignFastRcp();
			A3D_FORCEINLINE  Vector4& AssignAccurateRcp();
			A3D_FORCEINLINE  Vector4& AssignSqrt();
			A3D_FORCEINLINE  Vector4& AssignFastRcpSqrt();
			A3D_FORCEINLINE  Vector4& AssignAccurateRcpSqrt();
			A3D_FORCEINLINE  Vector4& AssignAbs();
			A3D_FORCEINLINE  Vector4& AssignGreater(const  Vector4& v) { return Assign(*this > v); }
			A3D_FORCEINLINE  Vector4& AssignGreaterEqual(const  Vector4& v) { return Assign(*this >= v); }
			A3D_FORCEINLINE  Vector4& AssignLess(const  Vector4& v) { return Assign(*this < v); }
			A3D_FORCEINLINE  Vector4& AssignLessEqual(const  Vector4& v) { return Assign(*this <= v); }
			A3D_FORCEINLINE  Vector4& AssignAbsoluteEqual(const  Vector4& v) { return Assign(*this == v); }
			A3D_FORCEINLINE  Vector4& AssignNearlyEqual(const  Vector4& v) { return Assign(NearlyEquals(v)); }
			A3D_FORCEINLINE  Vector4& AssignAdd(const  Vector4& v) { return Assign(*this + v); }
			A3D_FORCEINLINE  Vector4& AssignSub(const  Vector4& v) { return Assign(*this - v); }
			A3D_FORCEINLINE  Vector4& AssignMul(const  Vector4& v) { return Assign(*this * v); }
			A3D_FORCEINLINE  Vector4& AssignDiv(const  Vector4& v) { return Assign(*this / v); }

			// x % y =  x - y * (int)(x/y)
			A3D_FORCEINLINE  Vector4& AssignMod(const  Vector4& v) {
				Vector4 copy{ vec };
				return AssignSub(copy.AssignDiv(v).AssignIntPart().AssignMul(v));
			}

			A3D_FORCEINLINE  Vector4& AssignBitAnd(const Vector4& v) { return Assign(*this & v); }
			A3D_FORCEINLINE  Vector4& AssignBitOr(const  Vector4& v) { return Assign(*this | v); }
			A3D_FORCEINLINE  Vector4& AssignBitXor(const Vector4& v) { return Assign(*this ^ v); }
			A3D_FORCEINLINE  Vector4& AssignCross(const Vector4& v) { return Assign(yzxw() * v.zxyw() - zxyw() * v.yzxw()); }
			A3D_FORCEINLINE  Vector4& AssignLengthSQ4() { return AssignDot4(*this); }
			A3D_FORCEINLINE  Vector4& AssignLengthSQ3() { return AssignDot3(*this); }
			A3D_FORCEINLINE  Vector4& AssignLengthSQ2() { return AssignDot2(*this); }
			A3D_FORCEINLINE  Vector4& AssignLength4() { return AssignDot4(*this).AssignSqrt(); }
			A3D_FORCEINLINE  Vector4& AssignLength3() { return AssignDot3(*this).AssignSqrt(); }
			A3D_FORCEINLINE  Vector4& AssignLength2() { return AssignDot2(*this).AssignSqrt(); }
			A3D_FORCEINLINE  Vector4& AssignDistanceSQ4(const Vector4& v) { return AssignSub(v).AssignLengthSQ4(); }
			A3D_FORCEINLINE  Vector4& AssignDistanceSQ3(const Vector4& v) { return AssignSub(v).AssignLengthSQ4(); }
			A3D_FORCEINLINE  Vector4& AssignDistanceSQ2(const Vector4& v) { return AssignSub(v).AssignLengthSQ4(); }
			A3D_FORCEINLINE  Vector4& AssignDistance4(const Vector4& v) { return AssignDistanceSQ4(v).AssignSqrt(); }
			A3D_FORCEINLINE  Vector4& AssignDistance3(const Vector4& v) { return AssignDistanceSQ3(v).AssignSqrt(); }
			A3D_FORCEINLINE  Vector4& AssignDistance2(const Vector4& v) { return AssignDistanceSQ2(v).AssignSqrt(); }
			A3D_FORCEINLINE  Vector4& AssignSumup2() { return AssignAdd(yxwz()); }
			A3D_FORCEINLINE  Vector4& AssignSumup3() { return AssignAdd(yzxw() + zxyw()); }
			A3D_FORCEINLINE  Vector4& AssignSumup4() {  AssignAdd(yxwz()); return AssignAdd(zwxy()); }
			A3D_FORCEINLINE  Vector4& AssignFracPart() { return AssignSub(IntPart()); }
			A3D_FORCEINLINE  Vector4& AssignToDegree();
			A3D_FORCEINLINE  Vector4& AssignToRadian();
			A3D_FORCEINLINE  Vector4& AssignNormalize2() { return AssignMul(LengthSQ2().AssignAccurateRcpSqrt()); }
			A3D_FORCEINLINE  Vector4& AssignNormalize3() { return AssignMul(LengthSQ3().AssignAccurateRcpSqrt()); }
			A3D_FORCEINLINE  Vector4& AssignNormalize4() { return AssignMul(LengthSQ4().AssignAccurateRcpSqrt()); }
			A3D_FORCEINLINE  Vector4& AssignSaturate();
			A3D_FORCEINLINE  Vector4& AssignClamp(const Vector4& min, const Vector4& max) { return AssignMax(min).AssignMin(max); }
			//        3D ray reflect
			//      incident   reflect
			//          \  |  /|
			//           \ | /
			//     _____ _\|/_________
			//     incident - 2 * dot(incident, normal)*normal 
			A3D_FORCEINLINE  Vector4& AssignReflect3(const Vector4& normal);
			A3D_FORCEINLINE  Vector4& AssignReflect2(const Vector4& normal);
			A3D_FORCEINLINE  Vector4& AssignLerp(const Vector4& to, float t) { Vector4 cp{ vec }; return AssignSub(to).AssignMul(t).AssignAdd(cp); }
			A3D_FORCEINLINE  Vector4& AssignStep();
			A3D_FORCEINLINE  Vector4& AssignRStep();

			A3D_FORCEINLINE  Vector4 Dot2(const  Vector4& v) const { return Vector4{ vec }.AssignDot2(v); }
			A3D_FORCEINLINE  Vector4 Dot3(const  Vector4& v) const { return Vector4{ vec }.AssignDot3(v); }
			A3D_FORCEINLINE  Vector4 Dot4(const  Vector4& v) const { return Vector4{ vec }.AssignDot4(v); }
			A3D_FORCEINLINE  Vector4 Reflect3(const Vector4& normal) const { return Vector4{ vec }.AssignReflect3(normal); }
			A3D_FORCEINLINE  Vector4 Reflect2(const Vector4& normal) const { return Vector4{ vec }.AssignReflect2(normal); }
			A3D_FORCEINLINE  Vector4 Select(const Vector4& v1, const Vector4& v2) const;
			A3D_FORCEINLINE  Vector4 Lerp(const Vector4& to, float t) const { return Vector4{ vec }.AssignLerp(to, t); }
			A3D_FORCEINLINE  Vector4 Step() const { return Vector4{ vec }.AssignStep(); }
			A3D_FORCEINLINE  Vector4 RStep() const { return Vector4{ vec }.AssignRStep(); }
			A3D_FORCEINLINE  Vector4 IntPart() const;
			A3D_FORCEINLINE  Vector4 Round() const;
			A3D_FORCEINLINE  Vector4 Floor()const { return Vector4{ vec }.AssignFloor(); }
			A3D_FORCEINLINE  Vector4 Ceil()const { return Vector4{ vec }.AssignCeil(); }
			A3D_FORCEINLINE  Vector4 Min(const Vector4& v)const;
			A3D_FORCEINLINE  Vector4 Max(const Vector4& v)const;
			A3D_FORCEINLINE  Vector4 Saturate() const { return Vector4{ vec }.AssignSaturate(); }
			A3D_FORCEINLINE  Vector4 Clamp(const Vector4& min, const Vector4& max) const { return Vector4{ vec }.AssignClamp(min, max); }
			A3D_FORCEINLINE  Vector4 Sin()const { return Vector4{ vec }.AssignSin(); }
			A3D_FORCEINLINE  Vector4 Cos()const { return Vector4{ vec }.AssignCos(); }
			A3D_FORCEINLINE  Vector4 Abs()const;
			A3D_FORCEINLINE  Vector4 FastRcp()const;
			A3D_FORCEINLINE  Vector4 AccurateRcp()const;
			A3D_FORCEINLINE  Vector4 Sqrt()const;
			A3D_FORCEINLINE  Vector4 FastRcpSqrt()const;
			A3D_FORCEINLINE  Vector4 AccurateRcpSqrt()const;
			A3D_FORCEINLINE  Vector4 Cross(const Vector4& v) const { return Vector4{ vec }.AssignCross(v); }
			A3D_FORCEINLINE  Vector4 LengthSQ4() const;
			A3D_FORCEINLINE  Vector4 LengthSQ3() const;
			A3D_FORCEINLINE  Vector4 LengthSQ2() const;
			A3D_FORCEINLINE  Vector4 Length4() const { return LengthSQ4().AssignLength4(); }
			A3D_FORCEINLINE  Vector4 Length3() const { return LengthSQ3().AssignLength3(); }
			A3D_FORCEINLINE  Vector4 Length2() const { return LengthSQ2().AssignLength2(); }
			A3D_FORCEINLINE  Vector4 DistanceSQ4(const Vector4& v) const { return Vector4{ vec }.AssignDistanceSQ4(v); }
			A3D_FORCEINLINE  Vector4 DistanceSQ3(const Vector4& v) const { return Vector4{ vec }.AssignDistanceSQ3(v); }
			A3D_FORCEINLINE  Vector4 DistanceSQ2(const Vector4& v) const { return Vector4{ vec }.AssignDistanceSQ2(v); }
			A3D_FORCEINLINE  Vector4 Distance4(const Vector4& v) const { return Vector4{ vec }.AssignDistance4(v); }
			A3D_FORCEINLINE  Vector4 Distance3(const Vector4& v) const { return Vector4{ vec }.AssignDistance3(v); }
			A3D_FORCEINLINE  Vector4 Distance2(const Vector4& v) const { return Vector4{ vec }.AssignDistance2(v); }
			A3D_FORCEINLINE  Vector4 Sumup2() const { return Vector4{ vec }.AssignSumup2(); }
			A3D_FORCEINLINE  Vector4 Sumup3() const { return Vector4{ vec }.AssignSumup3(); }
			A3D_FORCEINLINE  Vector4 Sumup4() const { return Vector4{ vec }.AssignSumup4(); }
			A3D_FORCEINLINE  Vector4 FracPart() const { return Vector4{ vec }.AssignFracPart(); }
			A3D_FORCEINLINE  Vector4 ToDegree() const;
			A3D_FORCEINLINE  Vector4 ToRadian() const;
			A3D_FORCEINLINE  Vector4 Normalize2() const { return Vector4{ vec }.AssignNormalize2(); }
			A3D_FORCEINLINE  Vector4 Normalize3() const { return Vector4{ vec }.AssignNormalize3(); }
			A3D_FORCEINLINE  Vector4 Normalize4() const { return Vector4{ vec }.AssignNormalize4(); }


			A3D_FORCEINLINE  Vector4& AssignSin()
			{
			
			}
			A3D_FORCEINLINE  Vector4& AssignCos()
			{
			  
			}

			A3D_FORCEINLINE void SinCos(Vector4& inSin, Vector4& inCos) const
			{
				IngoreUnused(inSin, inCos);
			}
			A3D_FORCEINLINE void GetPerpendicularAxis(const Vector4& inx, Vector4& iny) const
			{
				IngoreUnused(inx, iny);
			}

			A3D_FORCEINLINE std::string ToString()
			{
				//CheckError();
				std::array<char, 64> buffer;
				sprintf(buffer.data(), "[%.7f,%.7f,%.7f,%.7f]", data[0], data[1], data[2], data[3]);
				buffer[63] = '\0';
				return std::string{ buffer.data() };
			}

			A3D_FORCEINLINE std::string ToStringAsUint()
			{
				std::array<char, 64> buffer;
				sprintf(buffer.data(), "[%x,%x,%x,%x]", udata[0], udata[1], udata[2], udata[3]);
				return std::string{ buffer.data() };
			}

			///helper function
			A3D_FORCEINLINE void CheckError()
			{
				assert(!IsNaN4());
				assert(!IsInfinite4());
			}
		};

		/// const value
		static const Vector4 kVector4One{ 1.0f };
		static const Vector4 kVector4Zero{ 0.0f };
		static const Vector4 kVector4NegtiveOne{ -1.0f };
		static const Vector4 kVector4Half{ 0.5f };
		static const Vector4 kVector4Two{ 2.0f };
		static const Vector4 kVector4XOne{ 1.0f, 0.0f, 0.0f, 0.0f };
		static const Vector4 kVector4YOne{ 0.0f, 1.0f, 0.0f, 0.0f };
		static const Vector4 kVector4ZOne{ 0.0f, 0.0f, 1.0f, 0.0f };
		static const Vector4 kVector4WOne{ 0.0f, 0.0f, 0.0f, 1.0f };
		static const Vector4 kVector4OddNegtive{ 1.0f, -1.0f, 1.0f, -1.0f };
		static const Vector4 kVector4EvenNegtive{ -1.0f, 1.0f, -1.0f, 1.0f };
		static const Vector4 kVector4Epside{ kMiddleEpside };
		static const Vector4 kVector4AllOneMask{ kAllOneMask};
		static const Vector4 kVector4XYZAllOneMask{ kAllOneMask,kAllOneMask,kAllOneMask,0u };
		static const Vector4 kVector4XYAllOneMask{ kAllOneMask,kAllOneMask,0u,0u };
		static const Vector4 kVector4XAllOneMask{ kAllOneMask,0u,0u,0u };
		static const Vector4 kVector4YAllOneMask{ 0u,kAllOneMask,0u,0u };
		static const Vector4 kVector4ZAllOneMask{ 0u,0u,kAllOneMask,0u };
		static const Vector4 kVector4WAllOneMask{ 0u,0u,0u,kAllOneMask };
		static const Vector4 kVector4OneOver2PI = { kOneOver2PI};
		static const Vector4 kVector4OneOver2PISquare = { kOneOver2PISquare };
		static const Vector4 kVector42PI{ k2PI};
		static const Vector4 kVector4PI{ kPI };
		static const Vector4 kVector4HalfPI{ kHalfPI };
		static const Vector4 kVector4180OverPI{ k180OverPI};
		static const Vector4 kVector4PIOver180{ kPIOver180};
		static const Vector4 kVector4AbsMask{ kTopZero };
		static const Vector4 kVector4SignMask{ kTopOne};
		static const Vector4 kVector4Infinte{ kInfinite };
		static const Vector4 kVector4NegInfinte{ kNegtiveInfinite };
		

		A3D_FORCEINLINE  Vector4 Vector4::operator-() const { return kVector4Zero - *this; }

		A3D_FORCEINLINE bool Vector4::IsUnit2(float tolerence) const { return LengthSQ2().AssignSub(kVector4One).AssignAbs().data[0] < tolerence; }
		A3D_FORCEINLINE bool Vector4::IsUnit3(float tolerence) const { return LengthSQ3().AssignSub(kVector4One).AssignAbs().data[0] < tolerence; }
		A3D_FORCEINLINE bool Vector4::IsUnit4(float tolerence) const { return LengthSQ4().AssignSub(kVector4One).AssignAbs().data[0] < tolerence; }

		A3D_FORCEINLINE  bool Vector4::IsInfinite4()const { return (*this == kVector4Infinte).AnyTrue4() || (*this == kVector4NegInfinte).AnyTrue4(); }
		A3D_FORCEINLINE  bool Vector4::IsInfinite3()const { return (*this == kVector4Infinte).AnyTrue3() || (*this == kVector4NegInfinte).AnyTrue3(); }
		A3D_FORCEINLINE  bool Vector4::IsInfinite2()const { return (*this == kVector4Infinte).AnyTrue2() || (*this == kVector4NegInfinte).AnyTrue2(); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignAbs() { return AssignBitAnd(kVector4AbsMask); }
		A3D_FORCEINLINE  Vector4 Vector4::Abs() const { return *this & kVector4AbsMask; }

		A3D_FORCEINLINE  Vector4& Vector4::AssignToDegree() { return AssignMul(kVector4180OverPI); }
		A3D_FORCEINLINE  Vector4  Vector4::ToDegree() const { return *this * kVector4180OverPI; }
		A3D_FORCEINLINE  Vector4& Vector4::AssignToRadian() { return AssignMul(kVector4PIOver180); }
		A3D_FORCEINLINE  Vector4  Vector4::ToRadian() const { return *this * kVector4PIOver180; }

		A3D_FORCEINLINE  Vector4& Vector4::AssignReflect3(const Vector4& normal) { return AssignSub(Vector4{ vec }.AssignDot3(normal).AssignMul(kVector4Two).AssignMul(normal)); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignReflect2(const Vector4& normal) { return AssignSub(Vector4{ vec }.AssignDot2(normal).AssignMul(kVector4Two).AssignMul(normal)); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignSaturate() { return AssignMax(kVector4Zero).AssignMin(kVector4One); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignStep() { return AssignGreater(kVector4Zero).AssignSelect(kVector4One, kVector4Zero); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignRStep() { return AssignGreater(kVector4Zero).AssignSelect(kVector4Zero, kVector4One); }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////  Base Operation /////////////////////////////////////////////////////////
#if defined(AURORA3D_SSE) || defined(AURORA3D_NEON)

		A3D_FORCEINLINE Vector4::Vector4(float inx, float iny, float inz, float inw) : vec(VectorLoad(inx, iny, inz, inw)) {}
		A3D_FORCEINLINE Vector4::Vector4(uint32 inux, uint32 inuy, uint32 inuz, uint32 inuw) : vec(VectorLoad(inux, inuy, inuz, inuw)) {}

		A3D_FORCEINLINE Vector4 Vector4::operator+(const Vector4& v) const { return VectorAdd(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator-(const Vector4& v) const { return VectorSub(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator*(const Vector4& o) const { return VectorMul(vec, o.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator/(const Vector4& o) const { return VectorDiv(vec, o.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator|(const Vector4& v) const { return VectorOr(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator&(const Vector4& v) const { return VectorAnd(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator^(const Vector4& v) const { return VectorXor(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::NotAnd(const Vector4& v) const { return VectorNotAnd(vec, v.vec); }

		//
		A3D_FORCEINLINE Vector4 Vector4::operator~() const { return VectorNot(vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator>(const Vector4& v) const {    return VectorGreater(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator>=(const Vector4& v) const {   return VectorGreaterEqual(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator<(const Vector4& v) const {    return VectorLess(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator<=(const Vector4& v) const {   return VectorLessEqual(vec, v.vec); }

		//bit equal
		A3D_FORCEINLINE Vector4 Vector4::operator==(const Vector4& v) const {   return VectorEquals(uvec, v.uvec); }
		A3D_FORCEINLINE Vector4 Vector4::operator!=(const Vector4& v) const {   return VectorNotEquals(vec, v.vec); }
		A3D_FORCEINLINE bool Vector4::True4() const { return VectorTrue4(vec); }
		A3D_FORCEINLINE bool Vector4::AnyTrue4() const { return VectorAnyTrue4(vec); }
		A3D_FORCEINLINE bool Vector4::AnyTrue3() const { return VectorAnyTrue3(vec); }
		A3D_FORCEINLINE bool Vector4::AnyTrue2() const { return VectorAnyTrue2(vec); }
		A3D_FORCEINLINE bool Vector4::False4() const { return VectorFalse4(vec); }
		A3D_FORCEINLINE bool Vector4::AnyFalse4() const { return VectorAnyFalse4(vec); }
		A3D_FORCEINLINE bool Vector4::AnyFalse3() const { return VectorAnyFalse3(vec); }
		A3D_FORCEINLINE bool Vector4::AnyFalse2() const { return VectorAnyFalse2(vec); }
		A3D_FORCEINLINE Vector4& Vector4::AssignSelect(const Vector4& v1, const Vector4& v2) { vec = VectorSelect(v1.vec, v2.vec, vec); return *this; }
		A3D_FORCEINLINE Vector4 Vector4::Select(const Vector4& v1, const Vector4& v2) const { return VectorSelect(v1.vec, v2.vec, vec);}

		A3D_FORCEINLINE Vector4 Vector4::LengthSQ2() const { return VectorDot2(vec, vec); }
		A3D_FORCEINLINE Vector4 Vector4::LengthSQ3() const { return VectorDot3(vec, vec); }
		A3D_FORCEINLINE Vector4 Vector4::LengthSQ4() const { return VectorDot4(vec, vec); }


		A3D_FORCEINLINE Vector4& Vector4::AssignIntPart() { vec = VectorIntPart(vec); return *this; }
		A3D_FORCEINLINE Vector4  Vector4::IntPart() const { return VectorIntPart(vec);}

		A3D_FORCEINLINE Vector4& Vector4::AssignRound() { vec = VectorRound(vec); return *this; }
		A3D_FORCEINLINE Vector4  Vector4::Round() const { return VectorRound(vec);}

		A3D_FORCEINLINE Vector4& Vector4::AssignMin(const Vector4& v) { vec = VectorMin(vec, v.vec); return *this; }
		A3D_FORCEINLINE Vector4 Vector4::Min(const Vector4& v) const { return VectorMin(vec,v.vec); }

		A3D_FORCEINLINE Vector4& Vector4::AssignMax(const Vector4& v) { vec = VectorMax(vec, v.vec); return *this; };
		A3D_FORCEINLINE Vector4 Vector4::Max(const Vector4& v) const { return VectorMax(vec, v.vec); }

		A3D_FORCEINLINE Vector4& Vector4::AssignFastRcp() { vec = VectorReciprocalApproximate(vec); return *this; }
		A3D_FORCEINLINE Vector4 Vector4::FastRcp() const { return VectorReciprocalApproximate(vec); }

		A3D_FORCEINLINE Vector4& Vector4::AssignAccurateRcp() { vec = VectorReciprocalApproximate(vec); return *this; }
		A3D_FORCEINLINE Vector4 Vector4::AccurateRcp() const { return VectorReciprocalApproximate(vec); }

		A3D_FORCEINLINE Vector4& Vector4::AssignSqrt() { vec = VectorSqrt(vec); return *this; }
		A3D_FORCEINLINE Vector4 Vector4::Sqrt() const { return VectorSqrt(vec); }

		A3D_FORCEINLINE Vector4& Vector4::AssignFastRcpSqrt() { vec = VectorReciprocalSqrtApproximate(vec); return *this; }
		A3D_FORCEINLINE Vector4 Vector4::FastRcpSqrt() const { return VectorReciprocalSqrtApproximate(vec); }

		A3D_FORCEINLINE Vector4& Vector4::AssignAccurateRcpSqrt() { vec = VectorReciprocalSqrt(vec); return *this; }
		A3D_FORCEINLINE Vector4 Vector4::AccurateRcpSqrt() const { return VectorReciprocalSqrt(vec); }

		template<uint32 p> 
		A3D_FORCEINLINE Vector4 Vector4::Repeat() const 
		{
			static_assert(p<4, "index must be 0,1,2,3, out of range");
			return VectorReplicate<p>(vec); 
		}
		template<uint32 p0 , uint32 p1, uint32 p2 , uint32 p3> 
		A3D_FORCEINLINE Vector4 Vector4::Reorder() const
		{
			static_assert(p0 < 4 && p1 < 4 && p2 < 4 && p3 < 4, "index must be 0,1,2,3, out of range");
			return VectorShuffle<p0, p1, p2, p3>(vec); 
		}

		template<uint32 v00, uint32 v01, uint32 v10, uint32 v11> 
		A3D_FORCEINLINE Vector4 Vector4::PickCompose(const Vector4& v) const 
		{ 
			static_assert(v00 < 4 && v01 < 4 && v10 < 4 && v11 < 4, "index must be 0,1,2,3, out of range");
			return VectorShuffle< v00, v01, v10, v11>(vec, v.vec);
		}

#else //FPU implements
//TODO
#endif
	
	}
}