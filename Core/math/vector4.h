#pragma once

#include<array>
#include<string>
#include<cassert>
#include<iostream>
#include<Core/math/math_impl.h>


#pragma warning(disable:4996)

namespace Aurora3D
{
	namespace math
	{
		//void _mm_prefetch (char const* p, int i)
		//void _mm_sfence (void)
		//float128 wrap type
		AURORA3D_API union alignas(16) Vector4
		{
		public:
			float    data[4];
			float128 vec;
			struct { float  x, y, z, w; };
			struct { uint32 ux, uy, uz, uw; };  //special use

			// construction
			A3D_FORCEINLINE constexpr Vector4() : vec{ kVectorZero } {}
			//A3D_FORCEINLINE ~Vector4() {  }
			A3D_FORCEINLINE constexpr Vector4(float  F) : x(F), y(F), z(F), w(F) {}
			A3D_FORCEINLINE constexpr Vector4(uint32 mask) : ux(mask), uy(mask), uz(mask), uw(mask) {}
			A3D_FORCEINLINE explicit constexpr Vector4(float inx, float iny, float inz = 0.0f, float inw = 0.0f) : x(inx), y(iny), z(inz), w(inw) {}
			A3D_FORCEINLINE explicit constexpr Vector4(uint32 inx, uint32 iny, uint32 inz = 0, uint32 inw = 0) : ux(inx), uy(iny), uz(inz), uw(inw) {}
			A3D_FORCEINLINE Vector4(const Vector4&  v) : x(v.x), y(v.y), z(v.z), w(v.w) { std::cout << " copy constructed" << std::endl; }
			A3D_FORCEINLINE Vector4(const float128& v) : vec(v) { std::cout << " float128 constructed" << std::endl; }
			A3D_FORCEINLINE const Vector4& operator=(const float128& v) { return vec = v; }
			A3D_FORCEINLINE const Vector4& operator=(const Vector4& v) { return vec = v.vec; }


			// override operator
			A3D_FORCEINLINE float&  operator[](uint32 index) { assert(x <= 3 && x >= 0); return data[index]; }
			A3D_FORCEINLINE float   operator[](uint32 index) const { assert(x <= 3 && x >= 0); return data[index]; }
			A3D_FORCEINLINE Vector4 operator-() const;
			A3D_FORCEINLINE Vector4 operator+(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator-(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator*(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator/(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator%(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator|(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator&(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator^(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator��() const { return AndNot(*this); }
			A3D_FORCEINLINE Vector4 AndNot(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator>(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator>=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator<(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator<=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator==(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator!=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 NearlyEquals(const Vector4& v, float tolerence = kMiddleEpside) const { (*this - v).AssignAbs() < kMiddleEpside; }
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
			A3D_FORCEINLINE bool False4() const;
			A3D_FORCEINLINE bool AnyFalse4() const;
			template<uint32 p0 = 0, uint32 p1 = 1, uint32 p2 = 2> A3D_FORCEINLINE constexpr bool True3() const { data[p0] == kAllOneMask && data[p1] == kAllOneMask && data[p2] == kAllOneMask; }
			template<uint32 p0 = 0, uint32 p1 = 1, uint32 p2 = 2> A3D_FORCEINLINE constexpr bool False3() const { data[p0] == 0 && data[p1] == 0 && data[p2] == 0; }
			template<uint32 p0 = 0, uint32 p1 = 1> A3D_FORCEINLINE constexpr bool True2() const { data[p0] == kAllOneMask && data[p1] == kAllOneMask; }
			template<uint32 p0 = 0, uint32 p1 = 1> A3D_FORCEINLINE constexpr bool False2() const { data[p0] == 0 && data[p1] == 0; }
			template<uint32 p = 0> A3D_FORCEINLINE constexpr bool True1() const { data[p] == kAllOneMask; }
			template<uint32 p = 0> A3D_FORCEINLINE constexpr bool False1() const { data[p] == 0; }
			A3D_FORCEINLINE bool IsUnit2(float tolerence = kSquareEpside) const { (LengthSQ2() - 1.0f).AssignAbs().x < tolerence; }
			A3D_FORCEINLINE bool IsUnit3(float tolerence = kSquareEpside) const { (LengthSQ3() - 1.0f).AssignAbs().x < tolerence; }
			A3D_FORCEINLINE bool IsUnit4(float tolerence = kSquareEpside) const { (LengthSQ4() - 1.0f).AssignAbs().x < tolerence; }
			A3D_FORCEINLINE bool IsZero2(float tolerence = kSquareEpside) const { LengthSQ2().x < tolerence; }
			A3D_FORCEINLINE bool IsZero3(float tolerence = kSquareEpside) const { LengthSQ3().x < tolerence; }
			A3D_FORCEINLINE bool IsZero4(float tolerence = kSquareEpside) const { LengthSQ4().x < tolerence; }
			A3D_FORCEINLINE bool IsInBound2(const Vector4& min, const Vector4& max) const { (*this >= min).True2<>() && (*this <= max).True2<>(); }
			A3D_FORCEINLINE bool IsInBound3(const Vector4& min, const Vector4& max) const { (*this >= min).True3<>() && (*this <= max).True3<>(); }
			A3D_FORCEINLINE bool IsInBound4(const Vector4& min, const Vector4& max) const { (*this >= min).True4() && (*this <= max).True4(); }
			A3D_FORCEINLINE bool ContainZero(float tolerence = kSquareEpside) const { return (LengthSQ4() < tolerence).AnyTrue4(); }
			A3D_FORCEINLINE bool IsNaN() const { return (*this != *this).AnyTrue4(); }
			A3D_FORCEINLINE bool IsInfinite()const;

			//operations, access
			template<uint32 p> A3D_FORCEINLINE Vector4 Repeat() const;
			template<uint32 p1, uint32 p2, uint32 p3, uint32 p4> A3D_FORCEINLINE Vector4 Reorder() const;
			template<uint32 p1, uint32 p2, uint32 p3, uint32 p4> A3D_FORCEINLINE Vector4 PickCompose(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 xxxx() const { return Repeat<0>(); }
			A3D_FORCEINLINE Vector4 yyyy() const { return Repeat<1>(); }
			A3D_FORCEINLINE Vector4 zzzz() const { return Repeat<2>(); }
			A3D_FORCEINLINE Vector4 wwww() const { return Repeat<3>(); }
			A3D_FORCEINLINE Vector4 xywz() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 xzyw() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 xzwy() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 xwyz() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 xwzy() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 yxzw() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 yxwz() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 yzxw() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 yzwx() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 ywxz() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 ywzx() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 zxyw() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 zxwy() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 zyxw() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 zywx() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 zwxy() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 zwyx() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 wxyz() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 wxzy() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 wyxz() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 wyzx() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 wzxy() const { return Reorder<0, 1, 3, 2>(); }
			A3D_FORCEINLINE Vector4 wzyx() const { return Reorder<0, 1, 3, 2>(); }

			//operation assign to Assign, chain operation like  vec.AssignAdd(v1).AssignSub(v2).AssignAbs().AssignDot(v3) ....
			A3D_FORCEINLINE  Vector4& Assign(const  Vector4& v) { vec = v.vec; return *this; }
			A3D_FORCEINLINE  Vector4& AssignDot2(const  Vector4& v);
			A3D_FORCEINLINE  Vector4& AssignDot3(const  Vector4& v);
			A3D_FORCEINLINE  Vector4& AssignDot4(const  Vector4& v);
			A3D_FORCEINLINE  Vector4& AssignSelect(const Vector4& v1, const Vector4& v2);
			A3D_FORCEINLINE  Vector4& AssignIntPart();
			A3D_FORCEINLINE  Vector4& AssignRound();
			A3D_FORCEINLINE  Vector4& AssignFloor();
			A3D_FORCEINLINE  Vector4& AssignCeil();
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
			A3D_FORCEINLINE  Vector4& AssignMod(const  Vector4& v) { return Assign(*this % v); }
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
			A3D_FORCEINLINE  Vector4& AssignSumup4() { AssignAdd(yxwz()); return AssignAdd(zwxy()); }
			A3D_FORCEINLINE  Vector4& AssignFracPart() { AssignSub(IntPart()); }
			A3D_FORCEINLINE  Vector4& AssignToDegree();
			A3D_FORCEINLINE  Vector4& AssignToRadian();
			A3D_FORCEINLINE  Vector4& AssignNormalize2() { AssignMul(LengthSQ2().AssignAccurateRcpSqrt()); }
			A3D_FORCEINLINE  Vector4& AssignNormalize3() { AssignMul(LengthSQ3().AssignAccurateRcpSqrt()); }
			A3D_FORCEINLINE  Vector4& AssignNormalize4() { AssignMul(LengthSQ4().AssignAccurateRcpSqrt()); }
			A3D_FORCEINLINE  Vector4& AssignSaturate();
			A3D_FORCEINLINE  Vector4& AssignClamp(const Vector4& min, const Vector4& max) { return AssignMax(min).AssignMin(max); }


			//        3D ray reflect
			//      incident   reflect
			//          \  |  /|
			//           \ | /
			//     _____ _\|/_________
			//     incident - 2 * dot(incident, normal)*normal 
			A3D_FORCEINLINE  Vector4& AssignReflect3(const Vector4& normal) { return AssignSub(Vector4{ vec }.AssignDot3(normal).AssignMul(kVectorTwo).AssignMul(normal)); }
			A3D_FORCEINLINE  Vector4& AssignReflect2(const Vector4& normal) { return AssignSub(Vector4{ vec }.AssignDot2(normal).AssignMul(kVectorTwo).AssignMul(normal)); }
			A3D_FORCEINLINE  Vector4& AssignLerp(const Vector4& to, float t) { Vector4 cp{ vec }; return AssignSub(to).AssignMul(t).AssignAdd(cp); }
			A3D_FORCEINLINE  Vector4& AssignStep();
			A3D_FORCEINLINE  Vector4& AssignRStep();



			A3D_FORCEINLINE  Vector4 Dot2(const  Vector4& v) const { return Vector4{ vec }.AssignDot2(v); }
			A3D_FORCEINLINE  Vector4 Dot3(const  Vector4& v) const { return Vector4{ vec }.AssignDot3(v); }
			A3D_FORCEINLINE  Vector4 Dot4(const  Vector4& v) const { return Vector4{ vec }.AssignDot4(v); }
			A3D_FORCEINLINE  Vector4 Reflect3(const Vector4& normal) const { return Vector4{ vec }.AssignReflect3(normal); }
			A3D_FORCEINLINE  Vector4 Reflect2(const Vector4& normal) const { return Vector4{ vec }.AssignReflect2(normal); }
			A3D_FORCEINLINE  Vector4 Select(const Vector4& v1, const Vector4& v2) const { return Vector4{ vec }.AssignSelect(v1, v2); }
			A3D_FORCEINLINE  Vector4 Lerp(const Vector4& to, float t) const { return Vector4{ vec }.AssignLerp(to, t); }
			A3D_FORCEINLINE  Vector4 Step() const { return Vector4{ vec }.AssignStep(); }
			A3D_FORCEINLINE  Vector4 RStep() const { return Vector4{ vec }.AssignRStep(); }
			A3D_FORCEINLINE  Vector4 IntPart() const { return Vector4{ vec }.AssignIntPart(); }
			A3D_FORCEINLINE  Vector4 Round() const { return Vector4{ vec }.AssignRound(); }
			A3D_FORCEINLINE  Vector4 Floor()const { return Vector4{ vec }.AssignFloor(); }
			A3D_FORCEINLINE  Vector4 Ceil()const { return Vector4{ vec }.AssignCeil(); }
			A3D_FORCEINLINE  Vector4 Min(const Vector4& v)const { return Vector4{ vec }.AssignMin(v); }
			A3D_FORCEINLINE  Vector4 Max(const Vector4& v)const { return Vector4{ vec }.AssignMax(v); }
			A3D_FORCEINLINE  Vector4 Saturate() const { return Vector4{ vec }.AssignSaturate(); }
			A3D_FORCEINLINE  Vector4 Clamp(const Vector4& min, const Vector4& max) const { return Vector4{ vec }.AssignClamp(min, max); }
			A3D_FORCEINLINE  Vector4 Sin()const { return Vector4{ vec }.AssignSin(); }
			A3D_FORCEINLINE  Vector4 Cos()const { return Vector4{ vec }.AssignCos(); }
			A3D_FORCEINLINE  Vector4 Abs()const { return Vector4{ vec }.AssignAbs(); }
			A3D_FORCEINLINE  Vector4 FastRcp()const { return Vector4{ vec }.AssignFastRcp(); }
			A3D_FORCEINLINE  Vector4 AccurateRcp()const { return Vector4{ vec }.AssignAccurateRcp(); }
			A3D_FORCEINLINE  Vector4 Sqrt()const { return Vector4{ vec }.AssignSqrt(); }
			A3D_FORCEINLINE  Vector4 FastRcpSqrt()const { return Vector4{ vec }.AssignFastRcpSqrt(); }
			A3D_FORCEINLINE  Vector4 AccurateRcpSqrt()const { return Vector4{ vec }.AssignAccurateRcpSqrt(); }
			A3D_FORCEINLINE  Vector4 Cross(const Vector4& v) const { return Vector4{ vec }.AssignCross(v); }
			A3D_FORCEINLINE  Vector4 LengthSQ4() const { return Vector4{ vec }.AssignLengthSQ4(); }
			A3D_FORCEINLINE  Vector4 LengthSQ3() const { return Vector4{ vec }.AssignLengthSQ3(); }
			A3D_FORCEINLINE  Vector4 LengthSQ2() const { return Vector4{ vec }.AssignLengthSQ2(); }
			A3D_FORCEINLINE  Vector4 Length4() const { return Vector4{ vec }.AssignLength4(); }
			A3D_FORCEINLINE  Vector4 Length3() const { return Vector4{ vec }.AssignLength3(); }
			A3D_FORCEINLINE  Vector4 Length2() const { return Vector4{ vec }.AssignLength2(); }
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
			A3D_FORCEINLINE  Vector4 ToDegree() const { return Vector4{ vec }.AssignToDegree(); }
			A3D_FORCEINLINE  Vector4 ToRadian() const { return Vector4{ vec }.AssignLength2(); }
			A3D_FORCEINLINE  Vector4 Normalize2() const { return Vector4{ vec }.AssignNormalize2(); }
			A3D_FORCEINLINE  Vector4 Normalize3() const { return Vector4{ vec }.AssignNormalize3(); }
			A3D_FORCEINLINE  Vector4 Normalize4() const { return Vector4{ vec }.AssignNormalize4(); }


			A3D_FORCEINLINE  Vector4& AssignSin()
			{
			
			}
			A3D_FORCEINLINE  Vector4& AssignCos()
			{
			  
			}


			A3D_FORCEINLINE void SinCos(Vector4& sin, Vector4& cos) const
			{

			}
			A3D_FORCEINLINE void GetPerpendicularAxis(Vector4& x, Vector4& y) const
			{
			
			}


			A3D_FORCEINLINE std::string ToString()
			{
				CheckError();
				std::array<char, 64> buffer;
				sprintf(buffer.data(), "[%f,%f,%f,%f]", x, y, z, w);
				return buffer.data();
			}

			///helper function
			A3D_FORCEINLINE void CheckError()
			{
				assert(!IsNaN());
				assert(!IsInfinite());
			}

			
		};

		
		/// const value
		constexpr Vector4 kVector4One{ 1.0f };
		constexpr Vector4 kVector4Zero{ 0.0f };
		constexpr Vector4 kVector4NegtiveOne{ -1.0f };
		constexpr Vector4 kVector4Half{ 0.5f };
		constexpr Vector4 kVector4Two{ 2.0f };
		constexpr Vector4 kVector4XOne{ 1.0f, 0.0f, 0.0f, 0.0f };
		constexpr Vector4 kVector4YOne{ 0.0f, 1.0f, 0.0f, 0.0f };
		constexpr Vector4 kVector4ZOne{ 0.0f, 0.0f, 1.0f, 0.0f };
		constexpr Vector4 kVector4WOne{ 0.0f, 0.0f, 0.0f, 1.0f };
		constexpr Vector4 kVector4OddNegtive{ 1.0f, -1.0f, 1.0f, -1.0f };
		constexpr Vector4 kVector4EvenNegtive{ -1.0f, 1.0f, -1.0f, 1.0f };
		constexpr Vector4 kVector4Epside{ kMiddleEpside };
		constexpr Vector4 kVector4AllOneMask{ kAllOneMask};
		constexpr Vector4 kVector4OneOver2PI = { kOneOver2PI};
		constexpr Vector4 kVector4OneOver2PISquare = { kOneOver2PISquare };
		constexpr Vector4 kVector42PI{ k2PI};
		constexpr Vector4 kVector4PI{ kPI };
		constexpr Vector4 kVector4HalfPI{ kHalfPI };
		constexpr Vector4 kVector4180OverPI{ k180OverPI};
		constexpr Vector4 kVector4PIOver180{ kPIOver180};
		constexpr Vector4 kVector4XYZMask{ kAllOneMask };
		constexpr Vector4 kVector4AbsMask{ kTopZero };
		constexpr Vector4 kVector4SignMask{ kTopOne};
		constexpr Vector4 kVector4Infinte{ kInfinite };

		A3D_FORCEINLINE  Vector4 Vector4::operator-() const { return kVector4Zero - *this; }
		A3D_FORCEINLINE  bool Vector4::IsInfinite()const { return (*this == kVector4Infinte).AnyTrue4(); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignAbs() { return AssignBitOr(kVector4AbsMask); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignToDegree() { return AssignMul(kVector4180OverPI); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignToRadian() { return AssignMul(kVector4PIOver180); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignSaturate() { return AssignMax(kVector4Zero).AssignMin(kVector4One); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignStep() { return AssignGreater(kVector4Zero).AssignSelect(kVector4One, kVector4Zero); }
		A3D_FORCEINLINE  Vector4& Vector4::AssignRStep() { return AssignGreater(kVector4Zero).AssignSelect(kVector4Zero, kVector4One); }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////  Base Operation /////////////////////////////////////////////////////////
#if defined(AURORA3D_SSE) || defined(AURORA3D_NEON)
		A3D_FORCEINLINE Vector4 Vector4::operator+(const Vector4& v) const { return VectorAdd(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator-(const Vector4& v) const { return VectorSub(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator*(const Vector4& o) const { return VectorMul(vec, o.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator/(const Vector4& o) const { assert(!o.ContainZero()); return VectorDiv(vec, o.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator%(const Vector4& v) const { return VectorMod(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator|(const Vector4& v) const { return VectorOr(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator&(const Vector4& v) const { return VectorAnd(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator^(const Vector4& v) const { return VectorXor(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::AndNot(const Vector4& v) const { return VectorAndNot(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator>(const Vector4& v) const { return VectorGreater(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator>=(const Vector4& v) const { return VectorGreaterEqual(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator<(const Vector4& v) const { return VectorLess(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator<=(const Vector4& v) const { return VectorLessEqual(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator==(const Vector4& v) const { return VectorEquals(vec, v.vec); }
		A3D_FORCEINLINE Vector4 Vector4::operator!=(const Vector4& v) const { return VectorNotEquals(vec, v.vec); }
		A3D_FORCEINLINE bool Vector4::True4() const { return VectorTrue4(vec); }
		A3D_FORCEINLINE bool Vector4::AnyTrue4() const { return VectorAnyTrue4(vec); }
		A3D_FORCEINLINE bool Vector4::False4() const { return VectorFalse4(vec); }
		A3D_FORCEINLINE bool Vector4::AnyFalse4() const { return VectorAnyFalse4(vec); }
		A3D_FORCEINLINE Vector4& Vector4::AssignSelect(const Vector4& v1, const Vector4& v2) { vec = VectorSelect(v1.vec, v2.vec, vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignDot2(const Vector4& v) { vec = VectorDot2(vec, v.vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignDot3(const Vector4& v) { vec = VectorDot3(vec, v.vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignDot4(const Vector4& v) { vec = VectorDot4(vec, v.vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignIntPart() { vec = VectorIntPart(vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignRound() { vec = VectorRound(vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignFloor() { vec = VectorFloor(vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignCeil()  { vec = VectorCeil(vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignMin(const Vector4& v) { vec = VectorMin(vec, v.vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignMax(const Vector4& v) { vec = VectorMax(vec, v.vec); return *this; };
		A3D_FORCEINLINE Vector4& Vector4::AssignFastRcp() { vec = VectorReciprocalApproximate(vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignAccurateRcp() { vec = VectorReciprocalApproximate(vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignSqrt() { vec = VectorSqrt(vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignFastRcpSqrt() { vec = VectorReciprocalSqrtApproximate(vec); return *this; }
		A3D_FORCEINLINE Vector4& Vector4::AssignAccurateRcpSqrt() { vec = VectorReciprocalSqrt(vec); return *this; }
		template<uint32 p> A3D_FORCEINLINE Vector4 Vector4::Repeat() const { return VectorReplicate<p>(vec); }
		template<uint32 p0, uint32 p1, uint32 p2, uint32 p3> A3D_FORCEINLINE Vector4 Vector4::Reorder() const { return VectorShuffle<p0, p1, p2, p3>(vec); }
		template<uint32 v00, uint32 v01, uint32 v10, uint32 v11> A3D_FORCEINLINE Vector4 Vector4::PickCompose(const Vector4& v) const { return VectorShuffle< v00, v01, v10, v11>(vec, v.vec); }

#else //FPU implements
//TODO
#endif
	
	}
}