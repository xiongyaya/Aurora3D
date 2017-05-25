#pragma once

#include"math_impl.h"

namespace Aurora3D
{
	//_MM_TRANSPOSE4_PS (__m128 row0, __m128 row1, __m128 row2, __m128 row3)
	struct Matrix4
	{
	public:
		A3D_MS_ALIGN(16) float m[4][4]{} A3D_GCC_ALIGN(16);
		A3D_MS_ALIGN(16) static const Matrix4 Identify A3D_GCC_ALIGN(16);
		
		A3D_FORCEINLINE Matrix4(){};
		A3D_FORCEINLINE void SetIdentify();
		A3D_FORCEINLINE Matrix4 operator*(const Matrix4& o) const;
		A3D_FORCEINLINE void operator*=(const Matrix4& o);
		A3D_FORCEINLINE Matrix4 operator+(const Matrix4& o) const;
		A3D_FORCEINLINE void operator+=(const Matrix4& o);
		A3D_FORCEINLINE void operator*(float o) const;
		A3D_FORCEINLINE void operator*=(float o);
		A3D_FORCEINLINE bool operator ==(const Matrix4& o) const;
		A3D_FORCEINLINE bool Equals(const Matrix4& o,float tolerence = kMiddleEpside) const;
		A3D_FORCEINLINE bool operator !=(const Matrix4& o) const;
		A3D_FORCEINLINE Vector4 TransformVector4(const Vector4& v) const;
		A3D_FORCEINLINE Vector3 TransformVector3(const Vector3& v) const;
		A3D_FORCEINLINE Vector3 TransformPosition(const Vector3& v) const;
		A3D_FORCEINLINE Vector3 InverseTransformVector3(const Vector3& v) const; 
		A3D_FORCEINLINE Vector3 InverseTransformPosition(const Vector3& v) const;
		A3D_FORCEINLINE Matrix4 Inverse() const;
		A3D_FORCEINLINE Matrix4 InverseFast() const;
		A3D_FORCEINLINE Matrix4 GetTranspose() const;
		A3D_FORCEINLINE float GetDeterminant() const;
		A3D_FORCEINLINE float GetRotateDeterminant() const;
	};



}