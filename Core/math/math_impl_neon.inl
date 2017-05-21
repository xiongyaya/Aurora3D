#pragma once

typedef float32x4_t A3D_GCC_ALIGH(16) float128;
typedef float32x2_t A3D_GCC_ALIGH(16) float64;
typedef uint32x4_t  A3D_GCC_ALIGH(16) uint128;

struct float128x4{
	float128 V[4];
	float128& operator[](int i){
		return V[i];
	}
	const float128& operator[](int i) const{
		return V[i];
	}
};

A3D_FORCEINLINE float128 VectorZero()
{
	return vdupq_n_f32(0);
}

A3D_FORCEINLINE float128 VectorLoad(float x, float y, float z, float w)
{
	float128 f;
	f.n128_f32[0] = x;
	f.n128_f32[1] = y;
	f.n128_f32[2] = z;
	f.n128_f32[3] = w;
	return f;
}

A3D_FORCEINLINE float128 VectorLoad(uint32 x, uint32 y, uint32 z, uint32 w)
{
	float128 f;
	f.n128_u32[0] = x;
	f.n128_u32[1] = y;
	f.n128_u32[2] = z;
	f.n128_u32[3] = w;
	return f;
}

A3D_FORCEINLINE float128 VectorLoad(uint32 U)
{
	return vdupq_n_u32(U);
}

A3D_FORCEINLINE float128 VectorLoad(float F)
{
	return vdupq_n_f32(F);
}

A3D_FORCEINLINE float128 VectorLoad3W0(const float *v)
{
	return VectorLoad(v[0], v[1], v[2], 0.0f);
}

A3D_FORCEINLINE float128 VectorLoad3W1(const float *v)
{
	return VectorLoad(v[0], v[1], v[2], 1.0f);
}

A3D_FORCEINLINE float128 VectorLoad4(const float *v)
{
	return vld1q_f32(v);
}

A3D_FORCEINLINE float128 VectorLoad4Aligned(const float *v)
{
	return vld1q_f32(v);
}

A3D_FORCEINLINE void VectorSet(float128& v, int i, float F)
{
	v = vsetq_lane_f32(F, v, i);
}

A3D_FORCEINLINE void VectorSet(float128& v, int i, uint32 U)
{
	v = vsetq_lane_u32(U, v, i);
}


A3D_FORCEINLINE float VectorGetFloat(const float128& v, int i)
{
	return v.n128_f32[i];
}

A3D_FORCEINLINE float VectorGetFirst(const float128& v)
{
	return v.n128_f32[0];
}

A3D_FORCEINLINE float VectorGetUint32(const float128& v, int i)
{
	return v.n128_u32[i];
}



A3D_FORCEINLINE void VectorStore3(const float128& v, float* m)
{
	m[0] = v.n128_f32[0];
	m[1] = v.n128_f32[1];
	m[2] = v.n128_f32[2];
}

A3D_FORCEINLINE void VectorStore4(const float128& v, float *m)
{
	vst1q_f32(m, v);
}

A3D_FORCEINLINE void VectorStore4(const float128& v, uint32 *m)
{
	vst1q_u32(m, v);
}

A3D_FORCEINLINE void VectorStore4Aligned(const float128& v, float *m)
{
	vst1q_f32(m, v);
}

A3D_FORCEINLINE void VectorStoreAlignedNoCache4(const float128& v, float *m)
{
	vst1q_u32(m, v);
}

template<unsigned p>
A3D_FORCEINLINE float128 VectorReplicate(const float128& v)
{
	return vdupq_lane_f32(v, p);
}

template<unsigned p0, unsigned p1, unsigned p2, unsigned p3>
A3D_FORCEINLINE float128 VectorShuffle(const float128& v)
{
#ifdef __clang__
	return __builtin_shufflevector(v, v, p0, p1, p2, p3);
#else
	float128 result;
	result.n128_f32[0] = v.n128_f32[p0];
	result.n128_f32[1] = v.n128_f32[p1];
	result.n128_f32[2] = v.n128_f32[p2];
	result.n128_f32[3] = v.n128_f32[p3];
#endif
}

template<unsigned p0, unsigned p1, unsigned p2, unsigned p3>
A3D_FORCEINLINE float128 VectorShuffle(const float128& v1, const float128& v2)
{
#ifdef __clang__
	return __builtin_shufflevector(v, v, p0, p1, p2, p3);
#else
	float128 result;
	result.n128_f32[0] = v1.n128_f32[p0];
	result.n128_f32[1] = v1.n128_f32[p1];
	result.n128_f32[2] = v2.n128_f32[p2];
	result.n128_f32[3] = v2.n128_f32[p3];
	return result;
#endif
}

//latency 3
A3D_FORCEINLINE float128 VectorAdd(const float128& v1, const float128& v2)
{
	return vaddq_f32(v1, v2);
}

A3D_FORCEINLINE float128 VectorMinus(const float128& v1, const float128& v2)
{
	return vsubq_f32(v1, v2);
}

A3D_FORCEINLINE float128 VectorMultiply(const float128& v1, const float128& v2)
{
	return vmulq_f32(v1, v2);
}

A3D_FORCEINLINE float128 VectorDivide(const float128& v1, const float128& v2)
{
	return VectorMultiply(v1, VectorReciprocal(v2));
}

A3D_FORCEINLINE float128 VectorEquals(const float128& v1, const float128& v2)
{
	return vceqq_f32(v1, v2);
}

A3D_FORCEINLINE float128 VectorNotEquals(const float128& v1, const float128& v2)
{
	return vmvnq_u32(vceqq_f32(v1, v2));
}

A3D_FORCEINLINE float128 VectorGreater(const float128& v1, const float128& v2)
{
	return vcgtq_f32(v1, v2);
}

A3D_FORCEINLINE float128 VectorLess(const float128& v1, const float128& v2)
{
	return vcleq_f32(v1, v2);
}

A3D_FORCEINLINE float128 VectorGreaterOrEqual(const float128& v1, const float128& v2)
{
	return vcgeq_f32(v1, v2);
}

A3D_FORCEINLINE float128 VectorLessOrEqual(const float128& v1, const float128& v2)
{
	return vcltq_f32(v1, v2);
}

A3D_FORCEINLINE float128 VectorOr(const float128& v1, const float128& v2)
{
	return (float128)vorrq_u32((uint128)v1, (uint128)v2);
}

A3D_FORCEINLINE float128 VectorAnd(const float128& v1, const float128& v2)
{
	return (float128)vmvnq_u32(vandq_u32((uint128)v1, (uint128)v2));
}

A3D_FORCEINLINE float128 VectorAndNot(const float128& v1, const float128& v2)
{
	return (float128)vmvnq_u32(vandq_u32((uint128)v1, (uint128)v2));
}

A3D_FORCEINLINE float128 VectorXor(const float128& v1, const float128& v2)
{
	return (float128)veorq_u32((uint128)v1, (uint128)v2);
}

A3D_FORCEINLINE float128 VectorMax(const float128& v1, const float128& v2)
{
	return vmaxq_f32(v1, v2);
}

A3D_FORCEINLINE float128 VectorMin(const float128& v1, const float128& v2)
{
	return vminq_f32(v1, v2);
}



//all is bigger than 0
A3D_FORCEINLINE bool VectorTrue(const float128& v)
{
	int8x8x2_t vTemp = vzip_u8(vget_low_u8(vTemp1), vget_high_u8(vTemp1));
	vTemp = vzip_u16(vTemp.val[0], vTemp.val[1]);
	return 0xFFFFFFFFu  == vget_lane_u32(vTemp.val[1], 1);
}

//all is zero
A3D_FORCEINLINE bool VectorFalse(const float128& v)
{
	int8x8x2_t vTemp = vzip_u8(vget_low_u8(vTemp1), vget_high_u8(vTemp1));
	vTemp = vzip_u16(vTemp.val[0], vTemp.val[1]);
	return 0 == vget_lane_u32(vTemp.val[1], 1);
}

//some is bigger than 0, and some is 0
A3D_FORCEINLINE bool VectorAnyTrue(const float128& v)
{
	int8x8x2_t vTemp = vzip_u8(vget_low_u8(vTemp1), vget_high_u8(vTemp1));
	vTemp = vzip_u16(vTemp.val[0], vTemp.val[1]);
	return 0 != vget_lane_u32(vTemp.val[1], 1);
}

//some is bigger than 0, and some is 0
A3D_FORCEINLINE bool VectorAnyFalse(const float128& v)
{
	int8x8x2_t vTemp = vzip_u8(vget_low_u8(vTemp1), vget_high_u8(vTemp1));
	vTemp = vzip_u16(vTemp.val[0], vTemp.val[1]);
	return 0xFFFFFFFFu != vget_lane_u32(vTemp.val[1], 1);
}

A3D_FORCEINLINE float128 VectorDot4(const float128& v1, const float128& v2)
{
	float128 multi = vmulq_f32(v1, v2);  //x,y,z,w  
	float64 sum = vpadd_f32(vget_low_f32(multi), vget_high_f32(multi)); //x+z, y+w
	sum = vpadd_f32(sum, sum);
	return vdupq_lane_f32(sum, 0);
}

A3D_FORCEINLINE float128 VectorSumUp(const float128& v)
{
	float64 sum = vpadd_f32(vget_low_f32(v), vget_high_f32(v));
	sum = vpadd_f32(sum, sum);
	return vdupq_lane_f32(sum, 0);
}

A3D_FORCEINLINE float128 VectorSelect(const float128& v1,
	const float128& v2, const float128& mask)
{
	return vbslq_f32(mask, v1, v2);
}

A3D_FORCEINLINE float128 VectorIntPart(const float128& v)
{
#ifdef _M_ARM64
	return vrndq_f32(v);
#else
	float128 int_part;
	int_part.n128_f32[0] = (int)v.n128_f32[0];
	int_part.n128_f32[1] = (int)v.n128_f32[1];
	int_part.n128_f32[2] = (int)v.n128_f32[2];
	int_part.n128_f32[3] = (int)v.n128_f32[3];
	return int_part;
#endif
}

//  float int_part = (int) v[i];
//  float floor = int_part - ( v[i] > 0 ? 0: 1 )   
//  float round = floor + ( v[i] - int_part > 0.5 ? 1.0:0.0f );
A3D_FORCEINLINE float128 VectorRound(const float128& v)
{
	static const float128 kZero = VectorLoad(0.0f);
	static const float128 kHalf = VectorLoad(0.5f);
	static const float128 kOne = VectorLoad(1.0f);
	float128 int_part = VectorIntPart(v);
	float128 floor = VectorSelect(VectorGreater(v, kZero), kOne, kZero);
	float128 add = VectorSelect(VectorGreater(VectorMinus(v, floor), kHalf), kOne, kZero);
	return VectorAdd(floor, add);
}

A3D_FORCEINLINE float128 VectorAbs(const float128& v)
{
	return vabsq_f32(v);
}

A3D_FORCEINLINE float128 VectorNegate(const float128& v)
{
	return vnegq_f32(v);
}

A3D_FORCEINLINE float128 VectorReciprocalApproximate(const float128& v)
{
	return vrecpeq_f32(v);
}

A3D_FORCEINLINE float128 VectorReciprocal(const float128& v)
{
	float128 recp = vrecpeq_f32(v);
	recp = vmulq_f32(vrecpsq_f32(v, recp), recp);
	return vmulq_f32(vrecpsq_f32(v, recp), recp);
}

A3D_FORCEINLINE float128 VectorReciprocalSqrtApproximate(const float128& v)
{
	return vrsqrteq_f32(v);
}

A3D_FORCEINLINE float128 VectorReciprocalSqrt(const float128& v)
{
	// 2 iterations of Newton-Raphson refinement of reciprocal
	float128 S0 = vrsqrteq_f32(v);
	float128 P0 = vmulq_f32(v, S0);
	float32x4_t R0 = vrsqrtsq_f32(P0, S0);
	S0 = vmulq_f32(S0, R0);
	P0 = vmulq_f32(v, S0);
	R0 = vrsqrtsq_f32(P0, S0);
	return vmulq_f32(S0, R0);
}

A3D_FORCEINLINE float128 VectorSqrtApproximate(const float128& v)
{
	const float128 S0 = vrsqrteq_f32(v);
	return vmulq_f32(v, S0);
}

A3D_FORCEINLINE float128 VectorSqrt(const float128& v)
{
	// 2 iteration of Newton-Raphson refinment of sqrt
	float128 S0 = vrsqrteq_f32(v);
	float128 P0 = vmulq_f32(v, S0);
	float128 R0 = vrsqrtsq_f32(P0, S0);

	S0 = vmulq_f32(R0, S0);
	P0 = vmulq_f32(v, S0);
	return vrsqrtsq_f32(P0, S0);
}

//return (v1[0], v2[0], v1[1], v2[1])
A3D_FORCEINLINE float128 VectorInterleaveXY(const float128& v1
	, const float128& v2)
{
	return vzipq_f32(v1, v2).val[0];
}

A3D_FORCEINLINE float128 VectorInterleaveZW(const float128& v1
	, const float128& v2)
{
	return vzipq_f32(v1, v2).val[1];
}


//return start + t*(end -start)
A3D_FORCEINLINE float128 VectorLerp(const float128& start, const float128& end, float t)
{
	return vmlaq_n_f32(start, vsubq_f32(end, start), t);
}




