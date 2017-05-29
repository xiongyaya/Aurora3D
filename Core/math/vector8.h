#pragma once

#include<Core/type.h>
#if defined(AURORA3D_SSE)
#include<immintrin.h>  //for __m256 and function
#include<Core/math/vector4.h>

namespace Aurora3D
{
	namespace math
	{
		union alignas(32) Vector8
		{
		public:
			__m256   vec8;
			struct { Vector4 v0, v1; };
			Vector8(float F) :v0{ F }, v1{ F } {}
			Vector8(uint32 U) :v0{ U }, v1{ U } {}
			Vector8(const Vector4& inv0, const Vector4& inv1) :v0(inv0), v1(inv1) {}
			Vector8(const Vector8& v):vec8(v.vec8) {}
			Vector8(const __m256& v) :vec8(v) {}
			__m256 operator+(const Vector8& v) { return _mm256_add_ps(vec8, v.vec8); }
			__m256 operator-(const Vector8& v) { return _mm256_sub_ps(vec8, v.vec8); }
			__m256 operator*(const Vector8& v) { return _mm256_mul_ps(vec8, v.vec8); }
			__m256 operator/(const Vector8& v) { return _mm256_div_ps(vec8, v.vec8); }
			__m256 operator%(const Vector8& v) { return _mm256_sub_ps(vec8, v.vec8); }
			__m256 operator&(const Vector8& v) { return _mm256_and_ps(vec8, v.vec8); }
			__m256 operator|(const Vector8& v) { return _mm256_or_ps(vec8, v.vec8); }
			__m256 operator^(const Vector8& v) { return _mm256_xor_ps(vec8, v.vec8); }
			__m256 operator!() { return _mm256_andnot_ps(vec8, vec8); }
			__m256 AndNot(const Vector8& v) { return _mm256_andnot_ps(vec8, v.vec8); }
			__m256 operator>(const Vector8& v) { return _mm256_cmp_ps(vec8, v.vec8, 0); }

		};
	}
}

#endif