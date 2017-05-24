//#pragma once
//
//#include<cmath>
//
//#include"math_utility.h"
//#include"../common_def.h"
//#include"../io/logger.h"
//
//
//namespace Aurora3D
//{
//	struct Vector3
//	{
//	public:
//		float x = 0.0f;
//		float y = 0.0f;
//		float z = 0.0f;
//
//		static const Vector3 One;
//
//		///initalize 
//		Vector3() = default;
//		Vector3(const Vector3& o) = default;
//		Vector3(const MathUtil::float128& m128);
//		Vector3& operator=(const Vector3& o) = default;
//		void operator=(const MathUtil::float128& m128);
//		A3D_FORCEINLINE explicit Vector3(float fx, float fy, float fz);
//
//		///operations
//		A3D_FORCEINLINE float&  operator[](uint32 index);
//		A3D_FORCEINLINE const float&  operator[](uint32 index) const;
//		A3D_FORCEINLINE Vector3 operator-() const;
//		A3D_FORCEINLINE Vector3 operator+(const Vector3& o) const;
//		A3D_FORCEINLINE Vector3 operator-(const Vector3& o) const;
//		A3D_FORCEINLINE Vector3 operator*(float s) const;
//		A3D_FORCEINLINE Vector3 operator*(const Vector3& o) const;
//		A3D_FORCEINLINE Vector3 operator/(float s) const;
//		A3D_FORCEINLINE Vector3 operator/(const Vector3& o) const;
//		A3D_FORCEINLINE const Vector3& operator/=(const Vector3& o);
//		A3D_FORCEINLINE const Vector3& operator*=(float s);
//		A3D_FORCEINLINE const Vector3& operator+=(const Vector3& o);
//		A3D_FORCEINLINE const Vector3& operator-=(const Vector3& o);
//		A3D_FORCEINLINE const Vector3& operator*=(const Vector3& o);
//		A3D_FORCEINLINE const Vector3& operator/=(float s);
//
//		A3D_FORCEINLINE Vector3 CrossProduct(const Vector3& o) const;
//		A3D_FORCEINLINE Vector3 ReflectBy(const Vector3& normal) const;
//		A3D_FORCEINLINE float DotProduct(const Vector3& o) const;
//		A3D_FORCEINLINE Vector3 SafeNormalize(float tolerence = MathUtil::kMiddleEpside) const;
//		A3D_FORCEINLINE Vector3 FastNormalize() const;
//		A3D_FORCEINLINE void    Normalize();
//		A3D_FORCEINLINE Vector3 GetPerpendicularAxis(Vector3& x, Vector3& y) const;
//		A3D_FORCEINLINE float Length() const;
//		A3D_FORCEINLINE float LengthSquared() const;
//		A3D_FORCEINLINE bool operator==(const Vector3& s) const;
//		A3D_FORCEINLINE bool operator!=(const Vector3& s) const;
//		A3D_FORCEINLINE bool Equals(const Vector3& s, float tolerence = MathUtil::kMiddleEpside) const;
//		A3D_FORCEINLINE bool IsUnit(float tolerence = MathUtil::kMiddleEpside) const;
//		A3D_FORCEINLINE bool IsNaN() const;
//		A3D_FORCEINLINE bool IsInfinite() const;
//		A3D_FORCEINLINE bool IsNearlyZero(float tolerence = MathUtil::kMiddleEpside) const;
//		A3D_FORCEINLINE void TestError() const;
//
//		///store and read
//		A3D_FORCEINLINE void ToSerialize(Writer& w) const;
//		A3D_FORCEINLINE void FromSerialize(Reader& r);
//		A3D_FORCEINLINE AString ToAString() const ;
//		A3D_FORCEINLINE WString ToWString() const ;
//		A3D_FORCEINLINE void FromAString(const AString& src);
//		A3D_FORCEINLINE void FromWString(const WString& src);
//	};
//
//	Vector3 operator*(float s, const Vector3& v)
//	{
//		return v*s;
//	}
//
//	///implements inline functions
//	A3D_FORCEINLINE Vector3::Vector3(float fx, float fy, float fz) :
//		x{ fx }, y{ fy }, z{ fz }{}
//
//	A3D_FORCEINLINE Vector3::Vector3(const MathUtil::float128& m128)
//	{
//		MathUtil::VectorStore3(m128, &x);
//	}
//
//	A3D_FORCEINLINE void Vector3::operator=(const MathUtil::float128& m128)
//	{
//		MathUtil::VectorStore3(m128, &x);
//	}
//
//	A3D_FORCEINLINE float& Vector3::operator[](unsigned index)
//	{
//		A3D_ASSERT(x <= 2 && x >= 0);
//		return (&x)[index];
//	}
//
//	A3D_FORCEINLINE const float& Vector3::operator[](unsigned index) const
//	{
//		A3D_ASSERT(x <= 2 && x >= 0);
//		return (&x)[index];
//	}
//
//	A3D_FORCEINLINE Vector3 Vector3::operator-() const
//	{
//		return Vector3(-x, -y, -z);
//	}
//	A3D_FORCEINLINE Vector3 Vector3::operator+(const Vector3& o) const
//	{
//		return Vector3(x + o.x, y + o.y, z + o.z);
//	}
//
//	A3D_FORCEINLINE const Vector3& Vector3::operator+=(const Vector3& o)
//	{
//		x = x + o.x; y = y + o.y; z = z + o.z; 
//		return *this;
//	}
//	A3D_FORCEINLINE Vector3 Vector3::operator-(const Vector3& o) const
//	{
//		return Vector3(x - o.x, y - o.y, z - o.z);
//	}
//	A3D_FORCEINLINE const Vector3& Vector3::operator-=(const Vector3& o)
//	{
//		x = x - o.x; y = y - o.y; z = z - o.z;
//		return *this;
//	}
//	A3D_FORCEINLINE Vector3 Vector3::operator*(float s) const
//	{
//#if defined(AURORA3D_FPU)
//		return Vector3{x*s, y*s, z*s};
//#else
//		MathUtil::float128 vr = MathUtil::VectorMultiply(
//			MathUtil::VectorLoad3W0(&x),
//			MathUtil::VectorLoad(s));
//		Vector3 result;
//		MathUtil::VectorStore3(vr, &result.x);
//		return result;
//#endif
//	}
//	A3D_FORCEINLINE const Vector3& Vector3::operator*=(float s)
//	{
//#if defined(AURORA3D_FPU)
//		x *= s; y *= s; z *= s; 
//		return *this;
//#else
//		MathUtil::float128 vr = MathUtil::VectorMultiply(
//			MathUtil::VectorLoad3W0(&x), 
//			MathUtil::VectorLoad(s) );
//		MathUtil::VectorStore3(vr, &x);
//		return *this;
//#endif
//	}
//	A3D_FORCEINLINE Vector3 Vector3::operator*(const Vector3& o) const
//	{
//#if defined(AURORA3D_FPU)
//		return Vector3{ x*o.x, y*o.y, z*o.z};
//#else
//		MathUtil::float128 vr = MathUtil::VectorMultiply(
//			MathUtil::VectorLoad3W0(&x),
//			MathUtil::VectorLoad3W0(&o.x));
//		Vector3 result;
//		MathUtil::VectorStore3(vr, &result.x);
//		return result;
//#endif
//	}
//
//	A3D_FORCEINLINE const Vector3& Vector3::operator*=(const Vector3& o)
//	{
//#if defined(AURORA3D_FPU)
//		x *= o.x; y *= o.y; z *= o.z; 
//		return *this;
//#else
//		MathUtil::float128 vr = MathUtil::VectorMultiply(
//			MathUtil::VectorLoad3W0(&x),
//			MathUtil::VectorLoad3W0(&o.x));
//		MathUtil::VectorStore3(vr, &x);
//		return *this;
//#endif
//	}
//	A3D_FORCEINLINE Vector3 Vector3::operator/(float s) const
//	{
//#if defined(AURORA3D_FPU)
//		return Vector3{ x / s, y / s, z / s};
//#else
//		MathUtil::float128 vr = MathUtil::VectorDivide(
//			MathUtil::VectorLoad3W0(&x),
//			MathUtil::VectorLoad(s));
//		Vector3 result;
//		MathUtil::VectorStore3(vr, &result.x);
//		return result;
//#endif
//	}
//	A3D_FORCEINLINE const Vector3& Vector3::operator/=(float s)
//	{
//#if defined(AURORA3D_FPU)
//		x /=s; y/=s; z/=s;
//		return *this;
//#else
//		MathUtil::float128 vr = MathUtil::VectorDivide(
//			MathUtil::VectorLoad3W0(&x),
//			MathUtil::VectorLoad(s));
//		MathUtil::VectorStore3(vr, &x);
//		return *this;
//#endif
//	}
//	A3D_FORCEINLINE Vector3 Vector3::operator/(const Vector3& o) const
//	{
//#if defined(AURORA3D_FPU)
//		return Vector3(x / o.x, y / o.y, z / o.z);
//#else
//		MathUtil::float128 vr = MathUtil::VectorDivide(
//			MathUtil::VectorLoad3W0(&x),
//			MathUtil::VectorLoad3W0(&o.x));
//		Vector3 result;
//		MathUtil::VectorStore3(vr, &result.x);
//		return result;
//#endif
//	}
//	A3D_FORCEINLINE const Vector3& Vector3::operator/=(const Vector3& o)
//	{
//#if defined(AURORA3D_FPU)
//		x /=o.x; y/=o.y; z/=o.z;
//		return *this;
//#else
//		MathUtil::float128 vr = MathUtil::VectorDivide(
//			MathUtil::VectorLoad3W0(&x),
//			MathUtil::VectorLoad3W0(&o.x));
//		MathUtil::VectorStore3(vr, &x);
//		return *this;
//#endif
//	}
//	A3D_FORCEINLINE Vector3 Vector3::CrossProduct(const Vector3& o) const
//	{
//#if defined(AURORA3D_FPU)
//		return Vector3{
//			y*o.z - z*o.y,
//			z*o.x - x*o.z,
//			x*o.y - y*o.x
//		};
//#else
//		MathUtil::float128 vr = MathUtil::VectorCrossProduct3(
//			MathUtil::VectorLoad3W0(&x),
//			MathUtil::VectorLoad3W0(&o.x));
//		Vector3 result;
//		MathUtil::VectorStore3(vr, &result.x);
//		return result;
//#endif
//	}
//	A3D_FORCEINLINE float Vector3::DotProduct(const Vector3& o) const
//	{
//		
//#if defined(AURORA3D_FPU)
//		return x*o.x + y*o.y + z*o.z;
//#else
//		return MathUtil::VectorGetFirst(
//				MathUtil::VectorDot3(
//					MathUtil::VectorLoad3W0(&x),
//					MathUtil::VectorLoad3W0(&o.x)));
//#endif
//	}
//
//	A3D_FORCEINLINE Vector3 Vector3::ReflectBy(const Vector3& normal) const
//	{
//#if defined(AURORA3D_FPU)
//		return 2.0f * DotProduct(normal)*normal - *this;
//#else
//		MathUtil::float128 vnormal = MathUtil::VectorLoad3W0(&normal.x);
//		MathUtil::float128 vthis = MathUtil::VectorLoad3W0(&x);
//		vthis =  MathUtil::VectorMinus(
//					MathUtil::VectorMultiply(
//						MathUtil::VectorLoad(2.0f),
//							MathUtil::VectorMultiply(
//								MathUtil::VectorDot3(vthis, vnormal),
//					vnormal)),
//			   vthis);
//		Vector3 result;
//		MathUtil::VectorStore3(vthis, &result.x);
//		return result;
//#endif
//	}
//
//	A3D_FORCEINLINE Vector3 Vector3::SafeNormalize(float tolerence) const
//	{
//#if defined(AURORA3D_FPU)
//		const float squared_sum = x*x + y*y + z*z;
//		if (squared_sum > tolerence)
//		{
//			const float scale = MathUtil::FloatReciprocalSqrt(squared_sum);
//			return Vector3(x*scale, y*scale, z*scale);
//		}
//		return Vector3(0.0f, 0.0f, 0.0f);
//#else
//		const MathUtil::float128& vthis = MathUtil::VectorLoad3W0(&x);
//		const MathUtil::float128 square = MathUtil::VectorDot3(vthis, vthis);
//		if (MathUtil::VectorGetFirst(square)>tolerence)
//		{
//			Vector3 result;
//			MathUtil::VectorStore3(
//				MathUtil::VectorMultiply(vthis,
//				MathUtil::VectorReciprocalSqrt(square)), &result.x);
//			return result;
//		}
//		return Vector3(0.0f, 0.0f, 0.0f);
//#endif
//	}
//
//	A3D_FORCEINLINE Vector3 Vector3::FastNormalize() const
//	{
//#if defined(AURORA3D_FPU)
//		const float scale = MathUtil::FloatReciprocalSqrt(x*x + y*y + z*z);
//		return Vector3(x*scale, y*scale, z*scale);
//#else
//		Vector3 result;
//		MathUtil::VectorStore3(
//			MathUtil::VectorNormalize3(
//				MathUtil::VectorLoad3W0(&x)), &result.x);
//		return result;
//#endif
//	}
//
//	A3D_FORCEINLINE Vector3 Vector3::GetPerpendicularAxis(Vector3& x_axis, Vector3& y_axis) const
//	{
//		///TODO
//	}
//	A3D_FORCEINLINE float Vector3::Length()const
//	{
//#if defined(AURORA3D_FPU)
//		return MathUtil::FloatReciprocalSqrt(x*x + y*y + z*z);
//#else
//		MathUtil::float128 vthis = MathUtil::VectorLoad3W0(&x);
//		return MathUtil::VectorGetFirst(
//					MathUtil::VectorReciprocalSqrt(
//						MathUtil::VectorDot3(vthis, vthis)));
//#endif
//	}
//	A3D_FORCEINLINE float Vector3::LengthSquared() const
//	{
//#if defined(AURORA3D_FPU)
//		return x*x + y*y + z*z;
//#else
//		MathUtil::float128 vthis = MathUtil::VectorLoad3W0(&x);
//		return MathUtil::VectorGetFirst(
//			MathUtil::VectorDot3(vthis, vthis));
//#endif
//	}
//	A3D_FORCEINLINE bool Vector3::operator==(const Vector3& o) const
//	{
//		return x == o.x && y == o.y && z == o.z;
//	}
//	A3D_FORCEINLINE bool Vector3::operator!=(const Vector3& o) const
//	{
//		return x != o.x || y != o.y || z != o.z;
//	}
//	A3D_FORCEINLINE bool Vector3::Equals(const Vector3& o, float tolerence) const
//	{
//		return MathUtil::FloatAbs(x - o.x) < tolerence &&
//			MathUtil::FloatAbs(y - o.y) < tolerence &&
//			MathUtil::FloatAbs(z - o.z) < tolerence;
//	}
//
//	A3D_FORCEINLINE bool Vector3::IsUnit(float tolerence) const
//	{
//#if defined(AURORA3D_FPU)
//		return MathUtil::FloatAbs(x*x + y*y + z*z - 1.0f) < tolerence;
//#else
//		MathUtil::float128 vthis = MathUtil::VectorLoad3W0(&x);
//		return MathUtil::VectorTrue3(
//					MathUtil::VectorEquals( MathUtil::kVectorOne,
//						MathUtil::VectorDot3(vthis, vthis)));
//#endif
//	}
//
//	A3D_FORCEINLINE bool Vector3::IsNearlyZero(float tolerence) const
//	{
//#if defined(AURORA3D_FPU)
//		return MathUtil::FloatAbs(x*x + y*y + z*z) < tolerence;
//#else
//		MathUtil::float128 vthis = MathUtil::VectorLoad3W0(&x);
//		return MathUtil::VectorTrue3(
//					MathUtil::VectorEquals(MathUtil::kVectorZero,
//						MathUtil::VectorDot3(vthis, vthis)));
//#endif
//	}
//
//	A3D_FORCEINLINE void Vector3::ToSerialize(Writer& W) const
//	{
//	
//	}
//
//	A3D_FORCEINLINE void Vector3::FromSerialize(Reader& R)
//	{
//		
//	}
//
//	A3D_FORCEINLINE AString Vector3::ToAString() const
//	{
//		StringFormater<128>::Format("[%f,%f,%f]", x, y, z);
//	}
//	A3D_FORCEINLINE WString Vector3::ToWString() const
//	{
//		StringFormater<128>::Format(WSTR("[%f,%f,%f]"), x, y, z);
//	}
//	A3D_FORCEINLINE void Vector3::FromAString(const AString& src)
//	{
//
//	}
//	A3D_FORCEINLINE void Vector3::FromWString(const WString& src)
//	{
//		StringParser::Parse(src.c_str(), src.length(), *this);
//	}
//
//	template<> struct ParseCatalogy<Vector3>{ typedef ParseType::PrefixTypeCatalogy type; };
//
//}