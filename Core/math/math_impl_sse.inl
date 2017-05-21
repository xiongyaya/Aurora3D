#pragma once


// float128   HIGH 3 2 1 0 LOW
// float[4]      w z y x  
typedef __m128  float128;
typedef __m128i uint128;

union misc128
{
	float128  f128;
	uint128	  u128;
};

struct float128x4{
	float128 V[4];
	float128& operator[](int i){
		return V[i];
	}
	const float128& operator[](int i) const{
		return V[i];
	}
};

#define SHUFFLE_MASK(p0, p1, p2, p3) ( (p0) | ((p1) << 2) | ((p2) <<4) | ((p3) <<6) )

A3D_FORCEINLINE float128 VectorZero()
{
	return _mm_setzero_ps();
}

//load replicate uint32
A3D_FORCEINLINE float128 VectorLoad(uint32 u)
{
	return _mm_castsi128_ps(_mm_setr_epi32(u, u, u, u));
}

//load replicate float
A3D_FORCEINLINE float128 VectorLoad(float F)
{
	return _mm_load_ps1(&F);
}

//load 2,3,4 float
A3D_FORCEINLINE float128 VectorLoad(float x, float y ,float z = 0.0f, float w = 0.0f)
{
	return _mm_setr_ps(x, y, z, w);
}

//load 2,3,4 uint32
A3D_FORCEINLINE float128 VectorLoad(uint32 x, uint32 y, uint32 z=0u, uint32 w=0u)
{
	return _mm_castsi128_ps(_mm_setr_epi32(x, y, z, w));
}

	
//load two components with z = 0.0f, w= 0.0f
A3D_FORCEINLINE float128 VectorLoad2Y0(const float *v)
{
	return _mm_setr_ps(v[0], v[1], 0.0f, 0.0f);
}

//load two components with z = 1.0f, w = 0.0f
A3D_FORCEINLINE float128 VectorLoad2Z1(const float *v)
{
	return _mm_setr_ps(v[0], v[1], 1.0f, 0.0f);
}

//load three components with w = 0.0f
A3D_FORCEINLINE float128 VectorLoad3W0(const float *v)
{
	return _mm_setr_ps(v[0], v[1], v[2], 0.0f);
}

//load three component with w = 1.0f
A3D_FORCEINLINE float128 VectorLoad3W1(const float *v)
{
	return _mm_setr_ps(v[0], v[1], v[2], 1.0f);
}

A3D_FORCEINLINE float128 VectorLoad4(const float *v)
{
	return _mm_setr_ps(v[0], v[1], v[2], v[3]);
}

A3D_FORCEINLINE float128 VectorLoad4Aligned(const float *v)
{
	return _mm_load_ps(v);
}

A3D_FORCEINLINE void VectorSet(float128& v, int i, float F)
{
	assert(i >= 0 && i <= 3);
	v.m128_f32[i] = F;
}

A3D_FORCEINLINE void VectorSet(float128& v, int i, uint32 F)
{
	assert(i >= 0 && i <= 3);
	v.m128_u32[i] = F;
}

A3D_FORCEINLINE float VectorGetFloat(const float128& v, int i)
{
	assert(i >= 0 && i <= 3);
	return v.m128_f32[i];
}

A3D_FORCEINLINE uint32 VectorGetUint32(const float128& v, int i)
{
	assert(i >= 0 && i <= 3);
	return v.m128_u32[i];
}

A3D_FORCEINLINE float VectorGetFirst(const float128& v)
{
	return v.m128_f32[0];
}

A3D_FORCEINLINE void VectorStore2(const float128& v, float* m)
{
	m[0] = v.m128_f32[0];
	m[1] = v.m128_f32[1];
}

A3D_FORCEINLINE void VectorStore3(const float128& v, float* m)
{
	m[0] = v.m128_f32[0];
	m[1] = v.m128_f32[1];
	m[2] = v.m128_f32[2];
}

A3D_FORCEINLINE void VectorStore4(const float128& v, float *m)
{
	_mm_storeu_ps(m, v);
}

A3D_FORCEINLINE void VectorStore4(const float128& v, uint32 *m)
{
	m[0] = v.m128_u32[0];
	m[1] = v.m128_u32[1];
	m[2] = v.m128_u32[2];
	m[3] = v.m128_u32[3];
}

A3D_FORCEINLINE void VectorStore4Aligned(const float128& v, float *m)
{
	_mm_store_ps(m, v);
}

A3D_FORCEINLINE void VectorStore4AlignedNoCache(
	float128& v, float *m)
{
	_mm_stream_ps(m, v);
}

//latency 1
template<unsigned p>
A3D_FORCEINLINE float128 VectorReplicate(const float128& v)
{
	return _mm_shuffle_ps(v, v, SHUFFLE_MASK(p, p, p, p));
}

//latency 1 return ( v[p0], v[p1], v[p2], v[p3] )
template<unsigned p0, unsigned p1, unsigned p2, unsigned p3>
A3D_FORCEINLINE float128 VectorShuffle(const float128& v)
{
	return _mm_shuffle_ps(v, v, SHUFFLE_MASK(p0, p1, p2, p3));
}

//latency 1, return ( v1[p0], v1[p1], v2[p2], v2[p3] )
template<unsigned p0, unsigned p1, unsigned p2, unsigned p3>
A3D_FORCEINLINE float128 VectorShuffle(const float128& v1, const float128& v2)
{
	return _mm_shuffle_ps(v1, v2, SHUFFLE_MASK(p0, p1, p2, p3));
}

//latency 3
//return add1 + add2 
A3D_FORCEINLINE float128 VectorAdd(const float128& add1, const float128& add2)
{
	return _mm_add_ps(add1, add2);
}

//latency 3
//return minus1 - minus2
A3D_FORCEINLINE float128 VectorMinus(const float128& minus1, const float128& minus2)
{
	return _mm_sub_ps(minus1, minus2);
}

//Latency 4-5
//return mul1 * mul2
A3D_FORCEINLINE float128 VectorMultiply(const float128& mul1, const float128& mul2)
{
	return _mm_mul_ps(mul1, mul2);
}

//Latency 13~14
// return div1 / div2
A3D_FORCEINLINE float128 VectorDivide(const float128& div1, const float128& div2)
{
	return _mm_div_ps(div1, div2);
}

// if v1[i] == v2[i] return 0xffffffff
//          !=       return 0x00000000
// latency 3
A3D_FORCEINLINE float128 VectorEquals(const float128& v1, const float128& v2)
{
	return _mm_cmpeq_ps(v1, v2);
}

// if v1[i] != v2[i] return 0xffffffff 
//          ==       return 0x00000000
// latency 3
A3D_FORCEINLINE float128 VectorNotEquals(const float128& v1, const float128& v2)
{
	return _mm_cmpneq_ps(v1, v2);
}

// if v1[i] >  v2[i] return 0xffffffff 
//          <=       return 0x00000000
// latency 3
A3D_FORCEINLINE float128 VectorGreater(const float128& v1, const float128& v2)
{
	return _mm_cmpgt_ps(v1, v2);
}

// if v1[i] <  v2[i] return 0xffffffff 
//          >=       return 0x00000000
// latency 3
A3D_FORCEINLINE float128 VectorLess(const float128& v1, const float128& v2)
{
	return _mm_cmplt_ps(v1, v2);
}

// if v1[i] >= v2[i] return 0xffffffff 
//          <        return 0x00000000
// latency 3
A3D_FORCEINLINE float128 VectorGreaterOrEqual(const float128& v1, const float128& v2)
{
	return _mm_cmpge_ps(v1, v2);
}

// if v1[i] <= v2[i] return 0xffffffff 
//          >        return 0x00000000
// latency 3
A3D_FORCEINLINE float128 VectorLessOrEqual(const float128& v1, const float128& v2)
{
	return _mm_cmple_ps(v1, v2);

}

//return v1 | v2
//Latency 1
A3D_FORCEINLINE float128 VectorOr(const float128& v1, const float128& v2)
{
	return _mm_or_ps(v1, v2);
}

//Latency 1
//return v1 & v2
A3D_FORCEINLINE float128 VectorAnd(const float128& v1, const float128& v2)
{
	return _mm_and_ps(v1, v2);
}

//Latency 1
//return !(v1 & v2)
A3D_FORCEINLINE float128 VectorAndNot(const float128& v1, const float128& v2)
{
	return _mm_andnot_ps(v1, v2);
}

//Latency 1
//return v1 ^ v2
A3D_FORCEINLINE float128 VectorXor(const float128& v1, const float128& v2)
{
	return _mm_xor_ps(v1, v2);
}

//Latency 3
//return max( v1, v2)
A3D_FORCEINLINE float128 VectorMax(const float128& v1, const float128& v2)
{
	return _mm_max_ps(v1, v2);
}

//Latency 3
//return min(v1, v2)
A3D_FORCEINLINE float128 VectorMin(const float128& v1, const float128& v2)
{
	return _mm_min_ps(v1, v2);
}

// v[0,1] = 0xffffffff
A3D_FORCEINLINE bool VectorTrue2(const float128& v)
{
	return 0x03 == (_mm_movemask_ps(v) & 0x03);
}

//v[0,1,2] = 0xffffffff
A3D_FORCEINLINE bool VectorTrue3(const float128& v)
{
	return 0x07 == (_mm_movemask_ps(v) & 0x07);
}

// v[0,1,2,3] == 0xffffffff
A3D_FORCEINLINE bool VectorTrue4(const float128& v)
{
	return 0x0f == _mm_movemask_ps(v);
}

// v[0,1] == 0xffffffff
A3D_FORCEINLINE bool VectorFalse2(const float128& v)
{
	return 0 == (_mm_movemask_ps(v) & 0x03);
}

// v[0,1,2] == 0xffffffff
A3D_FORCEINLINE bool VectorFalse3(const float128& v)
{
	return 0 == (_mm_movemask_ps(v) & 0x07);
}

// v[0,1,2,3] = 0
A3D_FORCEINLINE bool VectorFalse4(const float128& v)
{
	return 0 == _mm_movemask_ps(v);
}

// least one of v[i] = 0xffffffff
A3D_FORCEINLINE bool VectorAnyTrue2(const float128& v)
{
	return 0 != (_mm_movemask_ps(v) & 0x03);
}

// least one of v[i] = 0xffffffff
A3D_FORCEINLINE bool VectorAnyTrue3(const float128& v)
{
	return 0 != (_mm_movemask_ps(v) & 0x07);
}

// least one of v[i] = 0xffffffff
A3D_FORCEINLINE bool VectorAnyTrue4(const float128& v)
{
	return 0 != _mm_movemask_ps(v);
}

// least one of v[i] = 0
A3D_FORCEINLINE bool VectorAnyFalse2(const float128& v)
{
	return 0x03 != (_mm_movemask_ps(v) & 0x03);
}

// least one of v[i] = 0
A3D_FORCEINLINE bool VectorAnyFalse3(const float128& v)
{
	return 0x07 != (_mm_movemask_ps(v) & 0x07);
}

// least one of v[i] = 0
A3D_FORCEINLINE bool VectorAnyFalse4(const float128& v)
{
	return 0x0f != _mm_movemask_ps(v);
}

// F = v1.x*v2.x + v1.y*v2.y + v1.z*v2.z + v1.w*v2.w
// return (F,F,F,F )
A3D_FORCEINLINE float128 VectorDot4(const float128& v1, const float128& v2)
{
	float128 multi, rotate;
	multi = _mm_mul_ps(v1, v2);  // x,y,z,w
	rotate = VectorShuffle<2, 3, 0, 1>(multi);  //z,w,x,y
	multi = _mm_add_ps(multi, rotate); //x+z, y+w, x+z, y+w
	rotate = VectorShuffle<1, 0, 3, 2>(multi); //y+w, x+z, y+w, x+z
	return _mm_add_ps(multi, rotate); //x+y+z+w, x+y+z+w, ...
}

// F = x+ y + z + w
// return (F,F,F,F)
A3D_FORCEINLINE float128 VectorSumUp4(const float128& v)
{
	float128 rotate = VectorShuffle<2, 3, 0, 1>(v);  //z,w,x,y
	rotate = _mm_add_ps(rotate, v);                  //x+z, y+w, x+z, y+w
	return _mm_add_ps(VectorShuffle<1, 0, 3, 2>(rotate), rotate);
}

//for i:0~128 ,if mask[i] == 1? v1[i] : v2[i]
A3D_FORCEINLINE float128 VectorSelect(const float128& v1,
	const float128& v2, const float128& mask)
{
	// v1^v2^v2 = v1, so only select mask bit to do 2 times xor
	//     0^v2 = v2, let not select bit be 0
	return _mm_xor_ps(v2, _mm_and_ps(mask, _mm_xor_ps(v1, v2)));
}

//return int( v[i] )
A3D_FORCEINLINE float128 VectorIntPart(const float128& v)
{
	return _mm_cvtepi32_ps(_mm_cvttps_epi32(v));
}

//Latency 6
//return round( v[i] )
A3D_FORCEINLINE float128 VectorRound(const float128& v)
{
	return _mm_cvtepi32_ps(_mm_cvtps_epi32(v));
}

namespace SSEConstant
{
	static const float128 AbsMask = VectorLoad(0x7fffffffu);
	static const float128 One = VectorLoad(1.0f);
	static const float128 Zero = VectorLoad(0.0f);
}

// return -v
A3D_FORCEINLINE float128 VectorNegate(const float128& v)
{
	return VectorMinus(SSEConstant::Zero, v);
}
	
// Latency 1
// return abs( v[i] )
A3D_FORCEINLINE float128 VectorAbs(const float128& v)
{
	return _mm_and_ps(v, SSEConstant::AbsMask);
}

//Latency 3~5
// return Approx( 1 / v[i]), max error approximation less than 0.00036621
A3D_FORCEINLINE float128 VectorReciprocalApproximate(const float128& v1)
{
	return _mm_rcp_ps(v1);
}

//Latency 13 ~ 14
// return 1 / v[i]
A3D_FORCEINLINE float128 VectorReciprocal(const float128& v)
{
	return _mm_div_ps(SSEConstant::One, v);
}
	
//Latency 12~25
//return v[i] ^ 1/2
A3D_FORCEINLINE float128 VectorSqrt(const float128& v)
{
	return _mm_sqrt_ps(v);
}

//Latency 12~25
//return v[i] ^ 1/2
A3D_FORCEINLINE float128 VectorSqrtApprixmate(const float128& v)
{
	return _mm_sqrt_ps(v);
}

//Latency 3~5
// return Approx(1/sqrt(v[i])), max error approximation less than 0.00036621
A3D_FORCEINLINE float128 VectorReciprocalSqrtApproximate(const float128& v)
{
	return _mm_rsqrt_ps(v);
}

//26~39  latency
// return 1 / sqrt(v[i])
A3D_FORCEINLINE float128 VectorReciprocalSqrt(const float128& v)
{
	return _mm_div_ps(SSEConstant::One, _mm_sqrt_ps(v));
}

//1 Latency
//return (v1[0], v2[0], v1[1], v2[1])
A3D_FORCEINLINE float128 VectorInterleaveXY(const float128& v1
	,const float128& v2)
{
	return _mm_unpacklo_ps(v1, v2);
}

//1 Latency
//return (v1[2], v2[2], v1[3], v2[3])
A3D_FORCEINLINE float128 VectorInterleaveZW(const float128& v1
	, const float128& v2)
{
	return _mm_unpackhi_ps(v1, v2);
}
	
//return start + t*(end -start)
A3D_FORCEINLINE float128 VectorLerp(const float128& start, const float128& end, float t)
{
	return _mm_add_ps(start, _mm_mul_ps(_mm_sub_ps(end, start), _mm_set_ps1(t)));
}