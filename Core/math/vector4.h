#pragma once

#include<string>
#include<cassert>
#include"../serialize/reader.h"
#include"../serialize/writer.h"
#include"math_impl.h"

namespace Aurora3D
{
	/*
	 *  4D homogeneous vector
	 */
	AURORA3D_API A3D_MS_ALIGN(16) struct Vector4
	{
	public:
		float x = 0.0f;
		float y = 0.0f;
		float z = 0.0f;
		float w = 1.0f;	
		A3D_MS_ALIGN(16) static const Vector4 One A3D_GCC_ALIGN(16);
		
		///construct
		A3D_FORCEINLINE Vector4() = default;
		A3D_FORCEINLINE Vector4(const MathImpl::float128& m128, float fw);
		A3D_FORCEINLINE explicit Vector4(const MathImpl::float128& m128);
		A3D_FORCEINLINE explicit Vector4(float fx, float fy = 0.0f, float fz = 0.0f, float fw = 1.0f);
		A3D_FORCEINLINE void Set(float x , float y = 0.0f, float z = 0.0f, float w = 0.0f);
		A3D_FORCEINLINE void Set(const MathImpl::float128& m128, float fw = 1.0f);
		
		///conversion
		A3D_FORCEINLINE const MathImpl::float128& ToFloat128() const;
		A3D_FORCEINLINE MathImpl::float128& ToFloat128();
		A3D_FORCEINLINE const float* GetBuffer()const;

		///override operator
		A3D_FORCEINLINE float& operator[](unsigned index);
		A3D_FORCEINLINE Vector4 operator-() const;
		A3D_FORCEINLINE Vector4 operator+(const Vector4& o) const;
		A3D_FORCEINLINE Vector4 operator-(const Vector4& o) const;
		A3D_FORCEINLINE Vector4 operator*(float s) const;
		A3D_FORCEINLINE Vector4 operator*(const Vector4& o) const;
		A3D_FORCEINLINE Vector4 operator/(float s) const;
		A3D_FORCEINLINE Vector4 operator/(const Vector4& o) const;
		A3D_FORCEINLINE const Vector4& operator+=(const Vector4& o);
		A3D_FORCEINLINE const Vector4& operator-=(const Vector4& o);
		A3D_FORCEINLINE const Vector4& operator*=(const Vector4& o);
		A3D_FORCEINLINE const Vector4& operator*=(float s);
		A3D_FORCEINLINE const Vector4& operator/=(const Vector4& o);
		A3D_FORCEINLINE const Vector4& operator/=(float s);

		A3D_FORCEINLINE float Length()const;
		A3D_FORCEINLINE float LengthSquared()const;
		A3D_FORCEINLINE float DotProduct(const Vector4& o) const;
		A3D_FORCEINLINE Vector4 CrossProduct(const Vector4& o) const;
		A3D_FORCEINLINE Vector4 ReflectBy(const Vector4& normal) const;
		A3D_FORCEINLINE Vector4 GetNormalize() const;
		A3D_FORCEINLINE void Normalize();
		A3D_FORCEINLINE void GetPerpendicularAxis(Vector4& x, Vector4& y) const;
		A3D_FORCEINLINE bool operator==(const Vector4& s) const;
		A3D_FORCEINLINE bool operator!=(const Vector4& s) const;
		A3D_FORCEINLINE bool Equals(const Vector4& s, float tolerence = MathConstant::kMiddleEpside) const;
		A3D_FORCEINLINE bool IsUnit(float tolerence = MathConstant::kMiddleEpside) const;
		A3D_FORCEINLINE bool IsZero3() const;
		A3D_FORCEINLINE bool IsZero4() const;
		A3D_FORCEINLINE bool ContainZero() const;
		A3D_FORCEINLINE bool IsNaN() const;
		A3D_FORCEINLINE bool IsInfinite()const;

		///helper function
		A3D_FORCEINLINE void TestError();
		A3D_FORCEINLINE void ToSerialize(Writer& w);
		A3D_FORCEINLINE void FromSerialize(Reader& r);

		//format to one string type, like string,wstring ...etc.
		template<typename T> A3D_FORCEINLINE ToString() const;

		//read from one string type(string,wstring ..etc), style must be [x,y,z,w]
		//otherwise will stop parse and leave vector4 default value
		template<typename T>
		A3D_FORCEINLINE const Ch* FromString(const Ch* str);
	}A3D_GCC_ALIGN(16);

	A3D_FORCEINLINE Vector4 operator*(float s, const Vector4& v)
	{
		return v*s;
	}

	A3D_FORCEINLINE const float* Vector4::GetBuffer() const
	{
		return (const float*)&x;
	}

	A3D_FORCEINLINE Vector4::Vector4(float fx, float fy, float fz, float fw) :
		x{ fx }, y{ fy }, z{ fz }, w{ fw }{}

	A3D_FORCEINLINE Vector4::Vector4(const MathImpl::float128& m128, float fw)
	{
		MathImpl::VectorStore4Aligned(m128, &x);
		w = fw;
	}

	A3D_FORCEINLINE Vector4::Vector4(const MathImpl::float128& m128)
	{
		MathImpl::VectorStore4Aligned(m128, &x);
	}

	A3D_FORCEINLINE const MathImpl::float128& Vector4::ToFloat128() const
	{
		return *(const MathImpl::float128*)&x;
	}

	A3D_FORCEINLINE MathImpl::float128& Vector4::ToFloat128()
	{
		return *(MathImpl::float128*)&x;
	}

	A3D_FORCEINLINE void Vector4::Set(float fx, float fy, float fz, float fw)
	{
		x = fx; y = fy; z = fz; w = fw;
	}

	A3D_FORCEINLINE void Vector4::Set(const MathImpl::float128& m128, float fw)
	{
		MathImpl::VectorStore4Aligned(m128, &x);
		w = fw;
	}

	A3D_FORCEINLINE float& Vector4::operator[](unsigned index)
	{
		A3D_ASSERT(x <= 3 && x >= 0);
		return (&x)[index];
	}

	A3D_FORCEINLINE Vector4 Vector4::operator-() const
	{
		return Vector4{ MathImpl::VectorNegate(ToFloat128()) };
	}

	A3D_FORCEINLINE Vector4 Vector4::operator+(const Vector4& o) const
	{
		return Vector4{ MathImpl::VectorAdd(ToFloat128(), o.ToFloat128()) };
	}

	A3D_FORCEINLINE Vector4 Vector4::operator-(const Vector4& o) const
	{
		return Vector4{ MathImpl::VectorMinus(ToFloat128(), o.ToFloat128()) };
	}

	A3D_FORCEINLINE Vector4 Vector4::operator*(float s) const
	{
		return Vector4{ MathImpl::VectorMultiply(ToFloat128(),
							MathImpl::VectorLoad(s)) };
	}

	A3D_FORCEINLINE Vector4 Vector4::operator*(const Vector4& o) const
	{
		return Vector4(MathImpl::VectorMultiply(ToFloat128(), o.ToFloat128()));
	}

	
	A3D_FORCEINLINE Vector4 Vector4::operator/(float s) const
	{
		A3D_ASSERT(s != 0.0f);
		return Vector4{ MathImpl::VectorDivide(ToFloat128(), MathImpl::VectorLoad(s)) };
	}

	
	A3D_FORCEINLINE Vector4 Vector4::operator/(const Vector4& o) const
	{
		A3D_ASSERT(!o.ContainZero());
		return Vector4{ MathImpl::VectorDivide(ToFloat128(), o.ToFloat128())};
	}

	A3D_FORCEINLINE const Vector4& Vector4::operator+=(const Vector4& o)
	{
		x = x + o.x; y = y + o.y; z = z + o.z; w = w + o.w;
		return *this;
	}

	A3D_FORCEINLINE const Vector4& Vector4::operator-=(const Vector4& o)
	{
		x = x - o.x; y = y - o.y; z = z - o.z; w = w - o.w;
		return *this;
	}

	A3D_FORCEINLINE const Vector4& Vector4::operator*=(float s)
	{
		Set(MathImpl::VectorMultiply(ToFloat128(),
				MathImpl::VectorLoad(s)));
		return *this;
	}

	A3D_FORCEINLINE const Vector4& Vector4::operator*=(const Vector4& o)
	{
		Set(MathImpl::VectorMultiply(ToFloat128(), o.ToFloat128()));
		return *this;
	}

	A3D_FORCEINLINE const Vector4& Vector4::operator/=(float s)
	{
		A3D_ASSERT(0.0f != s);
		this->Set(MathImpl::VectorDivide(ToFloat128(),
					MathImpl::VectorLoad(s)));
		return *this;
	}

	A3D_FORCEINLINE const Vector4& Vector4::operator/=(const Vector4& o)
	{
		A3D_ASSERT(!o.ContainZero());
		this->Set(MathImpl::VectorDivide(ToFloat128(), o.ToFloat128()));
		return *this;
	}

	A3D_FORCEINLINE Vector4 Vector4::CrossProduct(const Vector4& o) const
	{
		return Vector4{ MathImpl::VectorCrossProduct3(ToFloat128(), o.ToFloat128()), 0.0f };
	}

	A3D_FORCEINLINE float Vector4::DotProduct(const Vector4& o) const
	{
		return MathImpl::VectorGetFirst(
					MathImpl::VectorDot3(ToFloat128(), o.ToFloat128())
		);
	}

	A3D_FORCEINLINE Vector4 Vector4::ReflectBy(const Vector4& normal) const
	{
		MathImpl::float128 refl = MathImpl::VectorReflect3(this->ToFloat128(), normal.ToFloat128());
		return Vector4{ refl, w };
	}

	A3D_FORCEINLINE Vector4 Vector4::GetNormalize() const
	{
		//div 0
		if (this->IsZero3()) return Vector4{};
		return Vector4{ MathImpl::VectorNormalize3(this->ToFloat128()), w };
	}

	A3D_FORCEINLINE void Vector4::Normalize()
	{
		//div 0
		if (this->IsZero3())
		{
			this->Set(0.0f);
			return;
		}
		Set(MathImpl::VectorNormalize3(ToFloat128()), w);
	}

	A3D_FORCEINLINE void Vector4::GetPerpendicularAxis(Vector4& x_axis, Vector4& y_axis) const
	{
		///TODO
	}

	A3D_FORCEINLINE float Vector4::Length() const
	{
		return MathImpl::VectorGetFirst(
					MathImpl::VectorLength3(this->ToFloat128()));
	}

	A3D_FORCEINLINE float Vector4::LengthSquared()const
	{
		return MathImpl::VectorGetFirst(
					MathImpl::VectorLengthSquare3(this->ToFloat128()));
	}

	//all need equal
	A3D_FORCEINLINE bool Vector4::operator==(const Vector4& o) const
	{
		return MathImpl::VectorTrue4(
					MathImpl::VectorEquals(this->ToFloat128(), o.ToFloat128()));
	}

	//lest one of x,y,z,w is not equal
	A3D_FORCEINLINE bool Vector4::operator!=(const Vector4& o) const
	{
		return MathImpl::VectorAnyTrue4(
					MathImpl::VectorNotEquals(ToFloat128(), o.ToFloat128()));
	}

	//nearly = other vector4
	A3D_FORCEINLINE bool Vector4::Equals(const Vector4& o, float tolerence) const
	{
		return MathImpl::VectorTrue4(
					MathImpl::VectorNearlyEquals(this->ToFloat128(), o.ToFloat128(), tolerence));
	}

	// x^2 + y^2 + z^2 nearly = 1.0f
	A3D_FORCEINLINE bool Vector4::IsUnit(float tolerence) const
	{
		return MathImpl::VectorTrue3(
				MathImpl::VectorNearlyEquals(
					MathImpl::VectorLengthSquare3(ToFloat128()), MathImpl::kVectorOne, tolerence));
	}

	// x = 0.0f, y=0.0f, z=0.0f
	A3D_FORCEINLINE bool Vector4::IsZero3() const
	{
		return MathImpl::VectorTrue3(
					MathImpl::VectorEquals(ToFloat128(), MathImpl::kVectorZero));
	}

	// x = 0.0f, y=0.0f, z=0.0f, w=0.0f
	A3D_FORCEINLINE bool Vector4::IsZero4() const
	{
		return MathImpl::VectorTrue4(
			MathImpl::VectorEquals(ToFloat128(), MathImpl::kVectorZero));
	}

	// lest one of x,y,z,w is zero
	A3D_FORCEINLINE bool Vector4::ContainZero() const
	{
		return MathImpl::VectorAnyTrue4(
			MathImpl::VectorEquals(ToFloat128(), MathImpl::kVectorZero));
	}

	A3D_FORCEINLINE bool Vector4::IsNaN() const
	{
		return MathImpl::VectorIsNaN4(ToFloat128());
	}
	A3D_FORCEINLINE bool Vector4::IsInfinite()const
	{
		return MathImpl::VectorIsInfinite4(ToFloat128());
	}

	A3D_FORCEINLINE void Vector4::ToSerialize(Writer& W)
	{
		W << x << y << z << w;
	}
	A3D_FORCEINLINE void Vector4::FromSerialize(Reader& R)
	{
		R >> x >> y >> z >> w;
	}

	A3D_FORCEINLINE void Vector4::TestError()
	{
		A3D_ASSERT(IsNaN());
		A3D_ASSERT(IsInfinite());
	}

	//T is string or wstring
	template<typename T> A3D_FORCEINLINE 
		std::enable_if_t< IsFormaterSupport<T>::value, T>
		Vector4::ToString() const
	{
		TestError();
		return StringFormater<128>::Format(LITERIAL(T,"[%f,%f,%f,%f]"), x, y, z, w);
	}

	template<typename Ch>
	A3D_FORCEINLINE Ch* Vector4::FromString(const Ch* str)
	{
		//StringConverter::
	}

	template<> struct ParseCatalogy<Vector4>{ typedef ParseType::PrefixTypeCatalogy type; };
	template<> struct IsSerializable<Vector4> { enum { value = true };  };
}