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
		//float128 wrap type
		AURORA3D_API union alignas(16) Vector4
		{
		public:
			float    data[4];
			float128 vec;
			struct { float  x, y, z, w; };
			struct { uint32 ux, uy, uz, uw; };  //special use
			
			// construction
			A3D_FORCEINLINE constexpr Vector4();
			A3D_FORCEINLINE explicit constexpr Vector4(float inx, float iny = 0.0f, float inz = 0.0f, float inw = 1.0f);
			A3D_FORCEINLINE explicit constexpr Vector4(uint32 inx, uint32 iny = 0, uint32 inz = 0, uint32 inw = 0);
			A3D_FORCEINLINE Vector4(const float128&);
			A3D_FORCEINLINE Vector4(const Vector4&);

			// override operator
			A3D_FORCEINLINE float&  operator[](unsigned index);
			A3D_FORCEINLINE float   operator[](unsigned index) const;
			A3D_FORCEINLINE Vector4 operator-() const;
			A3D_FORCEINLINE Vector4 operator+(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator-(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator*(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator/(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator/(float s) const;
			A3D_FORCEINLINE Vector4 operator%(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator%(float s) const;
			A3D_FORCEINLINE Vector4 operator|(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator|(uint32 mask) const;
			A3D_FORCEINLINE Vector4 operator&(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator&(uint32 mask) const;
			A3D_FORCEINLINE Vector4 operator^(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator^(uint32 mask) const;
			A3D_FORCEINLINE Vector4 operator£¡() const;
			A3D_FORCEINLINE Vector4 AndNot(const Vector4& v);
			A3D_FORCEINLINE Vector4 operator>(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator>=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator<(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator<=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator==(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator!=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 Equals(const Vector4& s, float tolerence = kMiddleEpside) const;
			A3D_FORCEINLINE const Vector4& operator+=(const Vector4& o);
			A3D_FORCEINLINE const Vector4& operator-=(const Vector4& o);
			A3D_FORCEINLINE const Vector4& operator*=(const Vector4& o);
			A3D_FORCEINLINE const Vector4& operator*=(float s);
			A3D_FORCEINLINE const Vector4& operator/=(const Vector4& o);
			A3D_FORCEINLINE const Vector4& operator/=(float s);
			A3D_FORCEINLINE const Vector4& operator%=(float s);
			A3D_FORCEINLINE const Vector4& operator%=(const Vector4& o);
			A3D_FORCEINLINE Vector4 operator|=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator&=(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 operator^=(const Vector4& v) const;

			// judgement
			A3D_FORCEINLINE bool True4();
			A3D_FORCEINLINE bool AnyTrue4();
			A3D_FORCEINLINE bool False4();
			A3D_FORCEINLINE bool AnyFalse4();
			template<uint32 p0, uint32 p1, uint32 p2> A3D_FORCEINLINE bool True3();
			template<uint32 p0, uint32 p1, uint32 p2> A3D_FORCEINLINE bool AnyTrue3();
			template<uint32 p0, uint32 p1, uint32 p2> A3D_FORCEINLINE bool AnyFalse3();
			template<uint32 p0, uint32 p1, uint32 p2> A3D_FORCEINLINE bool False3();
			template<uint32 p0, uint32 p1> A3D_FORCEINLINE bool True2();
			template<uint32 p0, uint32 p1> A3D_FORCEINLINE bool AnyTrue2();
			template<uint32 p0, uint32 p1> A3D_FORCEINLINE bool False2();
			template<uint32 p0, uint32 p1> A3D_FORCEINLINE bool AnyFalse2();
			template<uint32 p> A3D_FORCEINLINE bool True1();
			template<uint32 p> A3D_FORCEINLINE bool False1();
			A3D_FORCEINLINE bool IsUnit(float tolerence = kMiddleEpside) const;
			A3D_FORCEINLINE bool IsZero3(float tolerence = kMiddleEpside) const;
			A3D_FORCEINLINE bool IsZero4(float tolerence = kMiddleEpside) const;
			A3D_FORCEINLINE bool ContainZero(float tolerence = kMiddleEpside) const;
			A3D_FORCEINLINE bool IsNaN() const;
			A3D_FORCEINLINE bool IsInfinite()const;
			A3D_FORCEINLINE bool IsInBound4(const Vector4& min, const Vector4& max) const;
			A3D_FORCEINLINE bool IsInBound3(const Vector4& min, const Vector4& max) const;

			//operations
			A3D_FORCEINLINE Vector4 SumupComponent2() const;
			A3D_FORCEINLINE Vector4 SumupComponent3() const;
			A3D_FORCEINLINE Vector4 SumupComponent4() const;
			A3D_FORCEINLINE Vector4 IntPart() const;
			A3D_FORCEINLINE Vector4 FracPart() const;
			A3D_FORCEINLINE Vector4 Round() const;
			A3D_FORCEINLINE Vector4 Floor() const;
			A3D_FORCEINLINE Vector4 Ceil() const;
			A3D_FORCEINLINE Vector4 ToDegree() const;
			A3D_FORCEINLINE Vector4 ToRadian() const;
			A3D_FORCEINLINE Vector4 Sin() const;
			A3D_FORCEINLINE Vector4 Cos() const;
			A3D_FORCEINLINE void SinCos(Vector4& sin, Vector4& cos) const;
			A3D_FORCEINLINE Vector4 Abs();
			A3D_FORCEINLINE Vector4 FastReciprocal();
			A3D_FORCEINLINE Vector4 AccurateReciprocal();
			A3D_FORCEINLINE Vector4 Sqrt();
			A3D_FORCEINLINE Vector4 FastRcpSqrt();
			A3D_FORCEINLINE Vector4 AccurateRcpSqrt();
			A3D_FORCEINLINE Vector4 Dot(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 Cross(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 Distance(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 DistanceSquared(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 Length() const;
			A3D_FORCEINLINE Vector4 LengthSquared()const;
			A3D_FORCEINLINE Vector4 Normalize() const;
			A3D_FORCEINLINE Vector4 Step() const;
			A3D_FORCEINLINE Vector4 ReverseStep() const;
			A3D_FORCEINLINE Vector4 Saturate() const;
			A3D_FORCEINLINE Vector4 Lerp(const Vector4& to, float t) const;
			A3D_FORCEINLINE Vector4 Clamp(const Vector4& min, const Vector4& max) const;
			A3D_FORCEINLINE Vector4 Min(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 Max(const Vector4& v) const;
			A3D_FORCEINLINE Vector4 Reflect(const Vector4& normal) const;

			A3D_FORCEINLINE void SelfNormalize();
			A3D_FORCEINLINE void GetPerpendicularAxis(Vector4& x, Vector4& y) const;
		
			A3D_FORCEINLINE std::string ToString()
			{
				CheckError();
				std::array<char, 64> buffer;
				sprintf(buffer.data(), "[%f,%f,%f,%f]", x, y, z, w);
				return buffer.data();
			}

			///helper function
			A3D_FORCEINLINE void CheckError();
		};

		A3D_FORCEINLINE Vector4 operator*(const Vector4& v, float s);
		A3D_FORCEINLINE Vector4 operator*(float s, const Vector4& v);

		
		A3D_FORCEINLINE constexpr Vector4::Vector4(): vec{ kVectorOne }{}
		A3D_FORCEINLINE constexpr Vector4::Vector4(float inx, float iny, float inz, float inw): x(inx), y(iny),z(inz),w(inw) {}
		A3D_FORCEINLINE constexpr Vector4::Vector4(uint32 inx, uint32 iny, uint32 inz, uint32 inw) : ux(inx), uy(iny), uz(inz), uw(inw) {}


		A3D_FORCEINLINE  Vector4::Vector4(const float128& v) : vec(v)
		{
			cout << " float128 constructed" << endl;
		}
		A3D_FORCEINLINE  Vector4::Vector4(const Vector4& v):vec(v.vec)
		{
			cout << " copy constructed" << endl;
		};

		A3D_FORCEINLINE float& Vector4::operator[](unsigned index)
		{
			assert(x <= 3 && x >= 0);
			return (&x)[index];
		}

		A3D_FORCEINLINE float Vector4::operator[](unsigned index) const
		{
			assert(x <= 3 && x >= 0);
			return data[index];
		}

		A3D_FORCEINLINE void Vector4::CheckError()
		{
			assert(!IsNaN());
			assert(!IsInfinite());
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator+=(const Vector4& v)
		{
			*this = *this + v;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator-=(const Vector4& v)
		{
			*this = *this + v;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator*=(float s)
		{
			*this = *this * s;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator*=(const Vector4& v)
		{
			*this = *this*v;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator/=(float s)
		{
			*this = *this / s;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator/=(const Vector4& v)
		{
			*this = *this / v;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator%=(float s)
		{
			*this = *this / s;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator%=(const Vector4& v)
		{
			*this = *this % v;
			return *this;
		}

#if defined(AURORA3D_SSE) || defined(AURORA3D_NEON)

		A3D_FORCEINLINE Vector4 Vector4::operator-() const
		{
			return VectorNegate(vec);
		}

		A3D_FORCEINLINE Vector4 Vector4::operator+(const Vector4& o) const
		{
			return VectorAdd(vec, o.vec);
		}

		
		A3D_FORCEINLINE Vector4 Vector4::operator-(const Vector4& o) const
		{
			return VectorMinus(vec, o.vec);
		}

		A3D_FORCEINLINE Vector4 operator*(const Vector4& v, float s)
		{
			return VectorMultiply(v.vec,s);
		}

		A3D_FORCEINLINE Vector4 operator*(float s, const Vector4& v)
		{
			return VectorMultiply(v.vec, s);
		}

		A3D_FORCEINLINE Vector4 Vector4::operator*(const Vector4& o) const
		{
			return VectorMultiply(vec, o.vec);
		}

		A3D_FORCEINLINE Vector4 Vector4::operator/(float s) const
		{
			assert( FloatAbs(s) > kMiddleEpside );
			return VectorDivide(vec, VectorLoad(s));
		}


		A3D_FORCEINLINE Vector4 Vector4::operator/(const Vector4& o) const
		{
			assert(!o.ContainZero());
			return VectorDivide(vec, o.vec);
		}

		A3D_FORCEINLINE Vector4 Vector4::operator%(const Vector4& o) const
		{
			return VectorMod(vec, o.vec);
		}

		A3D_FORCEINLINE Vector4 Vector4::operator%(float s) const
		{
			return VectorMod(vec, VectorLoad(s));
		}

		
		A3D_FORCEINLINE Vector4 Vector4::Cross(const Vector4& o) const
		{
			return VectorCrossProduct3(vec, o.vec);
		}

		A3D_FORCEINLINE Vector4 Vector4::Dot(const Vector4& o) const
		{
			return VectorDot3(vec, o.vec);
		}

		A3D_FORCEINLINE Vector4 Vector4::Reflect(const Vector4& normal) const
		{
			return VectorReflect3(vec, normal.vec);
		}

		A3D_FORCEINLINE Vector4 Vector4::Normalize() const
		{
			assert(!IsZero3());
			if (IsZero3()) return kVectorZero;
			return VectorNormalize3(vec);
		}

		A3D_FORCEINLINE void Vector4::SelfNormalize()
		{
			//div 0
			if (this->IsZero3()) return;
			vec = VectorNormalize3(vec);
		}

		A3D_FORCEINLINE void Vector4::GetPerpendicularAxis(Vector4& x_axis, Vector4& y_axis) const
		{
			///TODO
		}

		A3D_FORCEINLINE Vector4 Vector4::Length() const
		{
			return  VectorLength3(vec);
		}

		A3D_FORCEINLINE Vector4 Vector4::LengthSquared()const
		{
			return VectorDot3(vec, vec);
		}

	
		// x^2 + y^2 + z^2 nearly = 1.0f
		A3D_FORCEINLINE bool Vector4::IsUnit(float tolerence) const
		{
			return VectorTrue3( VectorNearlyEquals( VectorDot3(vec,vec), kVectorOne, tolerence));
		}

		//// x = 0.0f, y=0.0f, z=0.0f
		//A3D_FORCEINLINE bool Vector4::IsZero3() const
		//{
		//	return VectorTrue3( VectorEquals(vec, kVectorZero));
		//}

		//// x = 0.0f, y=0.0f, z=0.0f, w=0.0f
		//A3D_FORCEINLINE bool Vector4::IsZero4() const
		//{
		//	return VectorTrue4( VectorEquals(vec, kVectorZero));
		//}

		//// lest one of x,y,z,w is zero
		//A3D_FORCEINLINE bool Vector4::ContainZero() const
		//{
		//	return VectorAnyTrue4( VectorEquals(vec, kVectorZero));
		//}

		A3D_FORCEINLINE bool Vector4::IsNaN() const
		{
			return VectorIsNaN4(vec);
		}
		A3D_FORCEINLINE bool Vector4::IsInfinite()const
		{
			return VectorIsInfinite4(vec);
		}
#else //FPU implements
//TODO

#endif
		
	}
}