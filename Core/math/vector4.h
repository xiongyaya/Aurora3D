#pragma once

#include<string>
#include<cassert>
#include<Core/math/math_impl.h>

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
			struct { float x, y, z, w; };

			///construct
			A3D_FORCEINLINE Vector4();
			A3D_FORCEINLINE explicit constexpr Vector4(float inx, float iny = 0.0f, float inz = 0.0f, float inw = 1.0f);

			///override operator
			A3D_FORCEINLINE float&   operator[](unsigned index);
			A3D_FORCEINLINE float    operator[](unsigned index) const;
			A3D_FORCEINLINE float128 operator-() const;
			A3D_FORCEINLINE float128 operator+(const Vector4& o) const;
			A3D_FORCEINLINE float128 operator-(const Vector4& o) const;
			A3D_FORCEINLINE float128 operator*(const Vector4& o) const;
			A3D_FORCEINLINE float128 operator/(const Vector4& o) const;
			A3D_FORCEINLINE float128 operator/(float s) const;
			A3D_FORCEINLINE float128 operator%(const Vector4& o) const;
			A3D_FORCEINLINE float128 operator%(float s) const;

			A3D_FORCEINLINE const Vector4& operator+=(const Vector4& o);
			A3D_FORCEINLINE const Vector4& operator-=(const Vector4& o);
			A3D_FORCEINLINE const Vector4& operator*=(const Vector4& o);
			A3D_FORCEINLINE const Vector4& operator*=(float s);
			A3D_FORCEINLINE const Vector4& operator/=(const Vector4& o);
			A3D_FORCEINLINE const Vector4& operator/=(float s);
			A3D_FORCEINLINE const Vector4& operator%=(float s);
			A3D_FORCEINLINE const Vector4& operator%=(const Vector4& o);

			A3D_FORCEINLINE float Length() const;
			A3D_FORCEINLINE float LengthSquared()const;
			A3D_FORCEINLINE float Dot(const Vector4& o) const;
			A3D_FORCEINLINE float128 Cross(const Vector4& o) const;
			A3D_FORCEINLINE float128 Reflect(const Vector4& normal) const;
			A3D_FORCEINLINE float128 Normalize() const;
			A3D_FORCEINLINE void SelfNormalize();
			A3D_FORCEINLINE void GetPerpendicularAxis(Vector4& x, Vector4& y) const;
			A3D_FORCEINLINE bool operator==(const Vector4& s) const;
			A3D_FORCEINLINE bool operator!=(const Vector4& s) const;
			A3D_FORCEINLINE bool Equals(const Vector4& s, float tolerence = kMiddleEpside) const;
			A3D_FORCEINLINE bool IsUnit(float tolerence = kMiddleEpside) const;
			A3D_FORCEINLINE bool IsZero3() const;
			A3D_FORCEINLINE bool IsZero4() const;
			A3D_FORCEINLINE bool ContainZero() const;
			A3D_FORCEINLINE bool IsNaN() const;
			A3D_FORCEINLINE bool IsInfinite()const;

			///helper function
			A3D_FORCEINLINE void TestError();
		};
		
		A3D_FORCEINLINE Vector4::Vector4(): vec{ kVectorOne }{}
		A3D_FORCEINLINE Vector4::Vector4(float inx, float iny, float inz, float inw): x(inx), y(iny),z(inz),w(inw) {}

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

		A3D_FORCEINLINE void Vector4::TestError()
		{
			assert(IsNaN());
			assert(IsInfinite());
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator+=(const Vector4& v)
		{
			vec = *this + v;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator-=(const Vector4& v)
		{
			vec = *this + v;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator*=(float s)
		{
			vec = *this *s;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator*=(const Vector4& v)
		{
			vec = *this*v;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator/=(float s)
		{
			vec = *this / s;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator/=(const Vector4& v)
		{
			vec = *this / v;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator%=(float s)
		{
			vec = *this / s;
			return *this;
		}

		A3D_FORCEINLINE const Vector4& Vector4::operator%=(const Vector4& v)
		{
			vec = *this % v;
			return *this;
		}

		//lest one of x,y,z,w is not equal
		A3D_FORCEINLINE bool Vector4::operator!=(const Vector4& v) const
		{
			return *this != v;
		}


#if defined(AURORA3D_SSE) || defined(AURORA3D_NEON)
		A3D_FORCEINLINE float128 Vector4::operator-() const
		{
			return VectorNegate(vec);
		}

		A3D_FORCEINLINE float128 Vector4::operator+(const Vector4& o) const
		{
			return VectorAdd(vec, o.vec);
		}

		A3D_FORCEINLINE float128 Vector4::operator-(const Vector4& o) const
		{
			return VectorMinus(vec, o.vec);
		}

		A3D_FORCEINLINE float128 operator*(const Vector4& v, float s) 
		{
			return VectorMultiply(v.vec,s);
		}

		A3D_FORCEINLINE float128 operator*(float s, const Vector4& v)
		{
			return VectorMultiply(v.vec, s);
		}

		A3D_FORCEINLINE float128 Vector4::operator*(const Vector4& o) const
		{
			return VectorMultiply(vec, o.vec);
		}

		A3D_FORCEINLINE float128 Vector4::operator/(float s) const
		{
			assert( FloatAbs(s) > kMiddleEpside );
			return VectorDivide(vec, VectorLoad(s));
		}


		A3D_FORCEINLINE float128 Vector4::operator/(const Vector4& o) const
		{
			assert(!o.ContainZero());
			return VectorDivide(vec, o.vec);
		}

		A3D_FORCEINLINE float128 Vector4::operator%(const Vector4& o) const
		{
			return VectorMod(vec, o.vec);
		}

		A3D_FORCEINLINE float128 Vector4::operator%(float s) const
		{
			return VectorMod(vec, VectorLoad(s));
		}

		
		A3D_FORCEINLINE float128 Vector4::Cross(const Vector4& o) const
		{
			return VectorCrossProduct3(vec, o.vec);
		}

		A3D_FORCEINLINE float Vector4::Dot(const Vector4& o) const
		{
			return VectorGetFirst(VectorDot3(vec, o.vec));
		}

		A3D_FORCEINLINE float128 Vector4::Reflect(const Vector4& normal) const
		{
			return VectorReflect3(vec, normal.vec);
		}

		A3D_FORCEINLINE float128 Vector4::Normalize() const
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

		A3D_FORCEINLINE float Vector4::Length() const
		{
			return  VectorGetFirst(VectorLength3(vec));
		}

		A3D_FORCEINLINE float Vector4::LengthSquared()const
		{
			return VectorGetFirst( VectorDot3(vec, vec));
		}

		//all need equal
		A3D_FORCEINLINE bool Vector4::operator==(const Vector4& o) const
		{
			return VectorTrue4( VectorEquals(vec, o.vec) );
		}

		//nearly = other vector4
		A3D_FORCEINLINE bool Vector4::Equals(const Vector4& o, float tolerence) const
		{
			return VectorTrue4( VectorNearlyEquals(vec, o.vec, tolerence));
		}

		// x^2 + y^2 + z^2 nearly = 1.0f
		A3D_FORCEINLINE bool Vector4::IsUnit(float tolerence) const
		{
			return VectorTrue3( VectorNearlyEquals( VectorDot3(vec,vec), kVectorOne, tolerence));
		}

		// x = 0.0f, y=0.0f, z=0.0f
		A3D_FORCEINLINE bool Vector4::IsZero3() const
		{
			return VectorTrue3( VectorEquals(vec, kVectorZero));
		}

		// x = 0.0f, y=0.0f, z=0.0f, w=0.0f
		A3D_FORCEINLINE bool Vector4::IsZero4() const
		{
			return VectorTrue4( VectorEquals(vec, kVectorZero));
		}

		// lest one of x,y,z,w is zero
		A3D_FORCEINLINE bool Vector4::ContainZero() const
		{
			return VectorAnyTrue4( VectorEquals(vec, kVectorZero));
		}

		A3D_FORCEINLINE bool Vector4::IsNaN() const
		{
			return VectorIsNaN4(vec);
		}
		A3D_FORCEINLINE bool Vector4::IsInfinite()const
		{
			return VectorIsInfinite4(vec);
		}
#elif //FPU implements
//TODO

#endif
		
	}
}