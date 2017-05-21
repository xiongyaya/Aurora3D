#pragma once

#include<cmath>
#include<cassert>
#include"math_fwd.h"
	
namespace Aurora3D
{
	namespace MathImpl
	{
		A3D_FORCEINLINE constexpr float FloatMax(float a, float b)
		{
			return a >= b ? a : b;
		}

		A3D_FORCEINLINE constexpr float FloatMin(float a, float b)
		{
			return a < b ? a : b;
		}

		A3D_FORCEINLINE constexpr float FloatClamp(float F, float min, float max)
		{
			return F < min ? min : (F > max ? max : F);
		}

		A3D_FORCEINLINE constexpr float FloatClampUNorm(float F)
		{
			return F < 0.0f ? 0.0f : (F > 1.0f ? 1.0f : F);
		}

		A3D_FORCEINLINE constexpr float FloatSaturate(float F)
		{
			return F < 0.0f ? 0.0f : (F > 1.0f ? 1.0f : F);
		}

		A3D_FORCEINLINE constexpr float FloatClampSNorm(float F)
		{
			return F < -1.0f ? -1.0f : (F > 1.0f ? 1.0f : F);
		}

		A3D_FORCEINLINE constexpr float FloatIntPart(float F)
		{
			return (float)(int32)F;
		}

		A3D_FORCEINLINE constexpr float FloatFracPart(float F)
		{
			return F - (float)(int32)F;
		}

		A3D_FORCEINLINE constexpr bool FloatIsNaN(float F)
		{
			return F != F;
		}

		A3D_FORCEINLINE constexpr bool FloatIsInfinite(float F)
		{
			return 0x7f800000 == ((*(unsigned*)(&F)) & 0x7fffffff);
		}

		A3D_FORCEINLINE float FloatAbs(float F)
		{
			union { float f32; uint32 u32; }tmp;
			tmp.f32 = F;
			tmp.u32 &= 0x7fffffff;
			return tmp.f32;
		}
		
		A3D_FORCEINLINE float FloatRound(float F)
		{
			return floorf(F);
		}

		A3D_FORCEINLINE float FloatCeil(float F)
		{
			return ceilf(F);
		}

		A3D_FORCEINLINE float FloatFloor(float F)
		{
			return floorf(F);
		}

		A3D_FORCEINLINE float FloatExp(float F)
		{
			return expf(F);
		}

		A3D_FORCEINLINE float FloatExp2(float F)
		{
			return exp2f(F);
		}

		A3D_FORCEINLINE float FloatLogE(float F)
		{
			return logf(F);
		}

		A3D_FORCEINLINE float FloatLogX(float F, float base)
		{
			return logf(F) / logf(base);
		}

		A3D_FORCEINLINE float FloatLog2(float F)
		{
			return log2f(F);
		}

		A3D_FORCEINLINE float FloatMod(float X, float Y)
		{
			if (FloatAbs(Y) < 1.e-5f) return 0.0f;
			const float div = FloatIntPart(X / Y);
			float ipart = div*Y;
			if (FloatAbs(ipart) > FloatAbs(X))
			{
				ipart = X;
			}
			return X - ipart;
		}

		A3D_FORCEINLINE float FloatSin(float F)
		{
			return sinf(F);
		}

		A3D_FORCEINLINE float FloatCos(float F)
		{
			return cosf(F);
		}

		A3D_FORCEINLINE float FloatTan(float F)
		{
			return tanf(F);
		}

		A3D_FORCEINLINE float FloatAsin(float F)
		{
			return sinf(FloatClampSNorm(F));
		}

		A3D_FORCEINLINE float FloatAcos(float F)
		{
			return cosf(FloatClampSNorm(F));
		}

		A3D_FORCEINLINE float FloatAtan(float F)
		{
			return atanf(F);
		}

		AURORA3D_API float FloatAtanPos(float X, float Y);
		AURORA3D_API uint32 FloorLog2(uint32 V);

		A3D_FORCEINLINE uint32 CeilLog2(uint32 V)
		{
			unsigned floor = FloorLog2(V);
			if (V & (~(1 << floor))) return floor + 1;
			return floor;
		}

		A3D_FORCEINLINE float FloatPow(float X, float Y)
		{
			return powf(X, Y);
		}

		A3D_FORCEINLINE float FloatPow2(float F)
		{
			return powf(2.0f, F);
		}

		A3D_FORCEINLINE uint32 CountHeadZero(uint32 V)
		{
			if (0 == V) return 32;
			return 31 - FloorLog2(V);
		}

		A3D_FORCEINLINE uint32 CountTailZero(uint32 V)
		{
			if (0 == V) return 32;
			uint32 count = 0;
			while (0 == (V & 1)) { V >>= 1; ++count; }
			return count;
		}

		A3D_FORCEINLINE bool FloatNearlyEquals(float X, float Y, float epside)
		{
			return FloatAbs(X - Y) <= epside;
		}

		A3D_FORCEINLINE constexpr float FloatStep(float F)
		{
			return F > 0.0f ? 1.0f : 0.0f;
		}

		A3D_FORCEINLINE bool FloatInBound(float F, float B)
		{
			return FloatAbs(F)<=B;
		}

		A3D_FORCEINLINE constexpr float FloatRadianToDegree(float F)
		{
			return F * MathConstant::k180OverPI;
		}

		A3D_FORCEINLINE constexpr float FloatDegreeToRadian(float F)
		{
			return F * MathConstant::kPIOver180;
		}

#if defined(AURORA3D_SSE) || defined(AURORA3D_NEON)
	#if defined(AURORA3D_SSE)
	#	include<emmintrin.h>
	#	include"math_impl_sse.inl"
	#else
	#	include <arm_neon.h>
	#	include"math_impl_neon.inl"
	#endif

		//common constant
		static const float128 kVectorAbsMask = VectorLoad(kHighestZero);
		static const float128 kVectorSignMask = VectorLoad(kHighestOne);
		static const float128 kVectorInfinte = VectorLoad(kInfinite);
		static const float128 kVectorZero = VectorLoad(0.0f);
		static const float128 kVectorOne = VectorLoad(1.0f);
		static const float128 kVectorNegtiveOne = VectorLoad(-1.0f);
		static const float128 kVectorHalf = VectorLoad(0.5f);
		static const float128 kVectorTwo = VectorLoad(2.0f);
		static const float128 kVectorAllOneMask = VectorLoad(kAllOneMask);
		static const float128 kVectorOneOver2PI = VectorLoad(kOneOver2PI);
		static const float128 kVector2PI = VectorLoad(k2PI);
		static const float128 kVectorPI = VectorLoad(kPI);
		static const float128 kVectorHalfPI = VectorLoad(kHalfPI);
		static const float128 kVector180OverPI = VectorLoad(k180OverPI);
		static const float128 kVectorPIOver180 = VectorLoad(kPIOver180);
		static const float128 kVectorXYZMask = VectorLoad(kAllOneMask,
			kAllOneMask, kAllOneMask, kAllZeroMask);
		static const float128 kVectorXOne = VectorLoad(1.0f, 0.0f, 0.0f, 0.0f);
		static const float128 kVectorYOne = VectorLoad(0.0f, 1.0f, 0.0f, 0.0f);
		static const float128 kVectorZOne = VectorLoad(0.0f, 0.0f, 1.0f, 0.0f);
		static const float128 kVectorWOne = VectorLoad(0.0f, 0.0f, 0.0f, 1.0f);
		static const float128 kVectorOddNegtive = VectorLoad(1.0f, -1.0f, 1.0f, -1.0f);
		static const float128 kVectorEvenNegtive = VectorLoad(-1.0f, 1.0f, -1.0f, 1.0f);
		static const float128 kVectorEpside = VectorLoad(kMiddleEpside);

		//return 1 / sqrt(F)
		A3D_FORCEINLINE float FloatReciprocalSqrt(float F)
		{
			return VectorGetFirst(VectorReciprocalSqrt(VectorLoad(F)));
		}

		//return  Approx( 1 / sqrt(F) ), max error approximation less than 0.00036621
		A3D_FORCEINLINE float FloatReciprocalSqrtApproximate(float F)
		{
			return VectorGetFirst(VectorReciprocalSqrtApproximate(VectorLoad(F)));
		}

		//return  x^(1/2)
		A3D_FORCEINLINE float FloatSqrt(float F)
		{
			return VectorGetFirst(VectorSqrt(VectorLoad(F)));
		}

		//return (v[0],v[1],v[2],0.0f)
		A3D_FORCEINLINE void VectorSetW0( float128& v)
		{
			return VectorSet(v, 3, 0.0f);
		}

		//return (v[0],v[1],v[2],1.0f)
		A3D_FORCEINLINE void VectorSetW1( float128& v)
		{
			return VectorSet(v, 3, 1.0f);
		}

		//return add1 + add2 + add3
		A3D_FORCEINLINE float128 VectorAddTwice(const float128& add1, const float128& add2, const float128& add3)
		{
			return VectorAdd(VectorAdd(add1, add2), add3);
		}

		//return add1 + add2 - minus
		A3D_FORCEINLINE float128 VectorAddMinus(const float128& add1, const float128& add2, const float128& minus)
		{
			return VectorMinus(VectorAdd(add1, add2), minus);
		}

		//return (add1 + add2 )*mul
		A3D_FORCEINLINE float128 VectorAddMutiply(const float128& add1, const float128& add2, const float128& mul)
		{
			return VectorMultiply(VectorAdd(add1, add2), mul);
		}

		//return (add1+add2) / div
		A3D_FORCEINLINE float128 VectorAddDivide(const float128& add1, const float128& add2,
			const float128& div)
		{
			return VectorDivide(VectorAdd(add1, add2), div);
		}

		//return minus1 - minus2 - minus3
		A3D_FORCEINLINE float128 VectorMinusTwice(const float128& minus1, const float128& minus2, const float128& minus3)
		{
			return VectorMinus(VectorMinus(minus1, minus2), minus3);
		}

		//return (minus1-minus2)*mul
		A3D_FORCEINLINE float128 VectorMinusMutiplyOrder(const float128& minus1, const float128& minus2, const float128& mul)
		{
			return VectorMultiply(VectorMinus(minus1, minus2), mul);
		}

		//return minus - mul1*mul2
		A3D_FORCEINLINE float128 VectorMinusMutiplyPriority(const float128& minus, const float128& mul1, const float128& mul2)
		{
			return VectorMinus(minus, VectorMultiply(mul1, mul2));
		}

		//return (minus1-minus2)/div
		A3D_FORCEINLINE float128 VectorMinusDivideOrder(const float128& minus1, const float128& minus2, const float128& div)
		{
			return VectorDivide(VectorMinus(minus1, minus2), div);
		}

		//return minus-div1/div2
		A3D_FORCEINLINE float128 VectorMinusDividePriority(const float128& minus, const float128& div1, const float128& div2)
		{
			return VectorMinus(minus, VectorDivide(div1, div2));
		}

		//return ( mul1[0]*scale, mul1[1]*scale, mul1[2]*scale, mul1[3]*scale )
		A3D_FORCEINLINE float128 VectorMultiply(const float128& mul1, float scale)
		{
			return VectorMultiply(mul1, VectorLoad(scale));
		}

		//return mul1 * mul2 * mul3
		A3D_FORCEINLINE float128 VectorMultiplyTwice(const float128& mul1, const float128& mul2, const float128& mul3)
		{
			return VectorMultiply(mul1, VectorMultiply(mul2, mul3));
		}

		//return mul1 * mul2 + add
		A3D_FORCEINLINE float128 VectorMultiplyAdd(const float128& mul1, const float128& mul2, const float128& add)
		{
			return VectorAdd(VectorMultiply(mul1, mul2), add);
		}

		//return mul1 * mul2 - minus
		A3D_FORCEINLINE float128 VectorMultiplyMinus(const float128& mul1, const float128& mul2, const float128& minus)
		{
			return VectorMinus(VectorMultiply(mul1, mul2), minus);
		}

		//return mul1 * mul2 / div
		A3D_FORCEINLINE float128 VectorMultiplyDivide(const float128& mul1, const float128& mul2, const float128& div)
		{
			return VectorDivide(VectorMultiply(mul1, mul2), div);
		}

		//return div/ (mul1 * mul2)
		A3D_FORCEINLINE float128 VectorDivdeMultiply(const float128& div, const float128& mul1, const float128& mul2)
		{
			return VectorDivide(div, VectorMultiply(mul1, mul2));
		}

		//return div1 / div2 - minus
		A3D_FORCEINLINE float128 VectorDivdeMinus(const float128& div1, const float128& div2, const float128& minus)
		{
			return VectorMinus(VectorDivide(div1, div2), minus);
		}

		//return div1 / div2 + minus
		A3D_FORCEINLINE float128 VectorDivdeAdd(const float128& div1, const float128& div2, const float128& add)
		{
			return VectorMinus(VectorDivide(div1, div2), add);
		}

		//return mod1 - (int)(mod1/mod2)*mod2
		A3D_FORCEINLINE float128 VectorMod(const float128& mod1, const float128& mod2)
		{
			return VectorMinus(mod1, VectorMultiply(mod2, VectorIntPart(VectorDivide(mod1, mod2))));
		}

		// IF abs(v1 - v2) < EPSIDE, return 0xffffffff otherwise is 0
		A3D_FORCEINLINE float128 VectorNearlyEquals(const float128& v1, const float128& v2, float epside = kMiddleEpside)
		{
			return VectorLess(VectorAbs(VectorMinus(v1, v2)), VectorLoad(epside));
		}

		// F = v1.x*v2.x + v1.y*v2.y
		// return (F,F, undef, undef)
		A3D_FORCEINLINE float128 VectorDot2(const float128& v1, const float128& v2)
		{
			float128 multi = VectorMultiply(v1, v2);
			return VectorAdd(multi, VectorShuffle<1, 0, 2, 3>(multi));
		}

		// F = v1.x*v2.x + v1.y*v2.y + v1.z*v2.z
		// return (F,F,F, undef )
		A3D_FORCEINLINE float128 VectorDot3(const float128& v1, const float128& v2)
		{
			float128 multi = VectorMultiply(v1, v2);                       //x,y,z
			multi = VectorAdd(multi, VectorShuffle<1, 2, 0, 3>(multi)); //x+y, y+z, z+x
			return VectorAdd(multi, VectorShuffle<2, 0, 1, 3>(multi));
		}

		// v = point1 - point2;
		// distance = sqrt(v.x^2 + v.y^2), z,w is ingored
		// return (distance, distance, undef, undef )
		A3D_FORCEINLINE float128 VectorDistance2(const float128& point1, const float128& point2)
		{
			float128 vec = VectorMinus(point1, point2);
			return VectorSqrt(VectorDot2(vec, vec));
		}


		// v = point1 - point2
		// distance = sqrt(v.x^2 + v.y^2 + v.z^2), w is ingored
		// return (distance, distance, distance, undef)
		A3D_FORCEINLINE float128 VectorDistance3(const float128& point1, const float128& point2)
		{
			float128 vec = VectorMinus(point1, point2);
			return VectorSqrt( VectorDot3(vec, vec));
		}
		
		// distance = sqrt(v.x^2 + v.y^2), z,w is ingored
		// return (distance, distance, undef, undef )
		A3D_FORCEINLINE float128 VectorLength2(const float128& v)
		{
			return VectorSqrt(VectorDot2(v, v));
		}

		// distance = sqrt(v.x^2 + v.y^2 + v.z^2), w is ingored
		// return (distance, distance, distance, undef)
		A3D_FORCEINLINE float128 VectorLength3(const float128& v)
		{
			return VectorSqrt(VectorDot3(v, v));
		}

		// DS = v.x^2 + v.y^2, z,w is ingored
		// return (DS, DS, undef, undef )
		A3D_FORCEINLINE float128 VectorLengthSquare2(const float128& v)
		{
			return VectorDot2(v, v);
		}

		// DS = v.x^2 + v.y^2 + v.z^2, w is ingored
		// return (DS, DS, DS, undef )
		A3D_FORCEINLINE float128 VectorLengthSquare3(const float128& v)
		{
			return VectorDot3(v, v);
		}

		// F = x + y
		// return (F,F,undef,undef)
		A3D_FORCEINLINE float128 VectorSumUp2(const float128& v)
		{
			return VectorAdd(v, VectorShuffle<1, 0, 2, 3>(v));
		}

		// F = x + y + z
		// return (F,F,F, undf )
		A3D_FORCEINLINE float128 VectorSumUp3(const float128& v)
		{
			float128 rotate = VectorShuffle<1, 2, 0, 3>(v); //y,z,x
			rotate = VectorAdd(v, rotate);                //x+y,y+z,z+x
			return VectorAdd(VectorShuffle< 2, 0, 1, 3>(v), rotate);
		}

		// v[i] < 0, return -1, otherwise 1
		A3D_FORCEINLINE float128 VectorSign(const float128& v)
		{
			//+ float , sign bit = 0,
			//- float , sign bit = 1
			return VectorSelect(kVectorOne, kVectorNegtiveOne,
				VectorEquals(kVectorZero,VectorAnd(v, kVectorSignMask)));
		}

		//return normalized(x,y, undef, undef)
		A3D_FORCEINLINE float128 VectorNormalize2(const float128& v)
		{
			return VectorMultiply(v, VectorReciprocalSqrt(VectorDot2(v, v)));
		}

		// return normalized(x,y,z, undef )
		A3D_FORCEINLINE float128 VectorNormalize3(const float128& v)
		{
			return VectorMultiply(v, VectorReciprocalSqrt(VectorDot3(v, v)));
		}

		// return normalize(x,y,z,w)
		A3D_FORCEINLINE float128 VectorNormalize4(const float128& v)
		{
			return VectorMultiply(v, VectorReciprocalSqrt(VectorDot4(v, v)));
		}

		//v[i] > 0 return 1, otherwise return 0
		A3D_FORCEINLINE float128 VectorStep(const float128& v)
		{
			return VectorSelect(kVectorOne, kVectorZero, VectorGreater(v, kVectorZero));
		}

		//v[i] < 0 return 1, otherwise return 0
		A3D_FORCEINLINE float128 VectorReverseStep(const float128& v)
		{
			return VectorSelect(kVectorOne, kVectorZero, VectorLess(v, kVectorZero));
		}

		//return v[i] - (int)v[i]
		A3D_FORCEINLINE float128 VectorFracPart(const float128& v)
		{
			return VectorMinus(v, VectorIntPart(v));
		}

		//return ceil(v[i]), 
		A3D_FORCEINLINE float128 VectorCeil(const float128& v)
		{
			float128 integer = VectorIntPart(v);
			float128 add = VectorStep(v);
			return VectorAdd(integer, add);
		}

		//return floor(v[i])
		A3D_FORCEINLINE float128 VectorFloor(const float128& v)
		{
			float128 integer = VectorIntPart(v);
			float128 step = VectorReverseStep(v);
			return VectorMinus(integer, step);
		}

		// abs(v[0,1])<bound[0,1] return true 
		A3D_FORCEINLINE bool VectorInBound2(const float128& v,
			const float128& bound)
		{
			const float128 abs = VectorAbs(v);
			return VectorTrue2(VectorLess(abs, bound));
		}

		// abs(v[0,1,2])<bound[0,1,2] return true 
		A3D_FORCEINLINE bool VectorInBound(const float128&v, const float128& bound)
		{
			const float128 abs = VectorAbs(v);
			return VectorTrue3(VectorLess(abs, bound));
		}


		//abs(v[0,1,2,3])<bound[0,1,2,3] return true 
		A3D_FORCEINLINE bool VectorInBound4(const float128& v,
			const float128& bound)
		{
			const float128 abs = VectorAbs(v);
			return VectorTrue4(VectorLess(abs, bound));
		}

		// one of v[0,1] = NaN
		A3D_FORCEINLINE bool VectorIsNaN2(const float128& v)
		{
			//NaN != NaN is true
			return VectorAnyTrue4(VectorNotEquals(v, v));
		}

		// one of v[0,1,2] = NaN
		A3D_FORCEINLINE bool VectorIsNaN3(const float128& v)
		{
			//NaN != NaN is true
			return VectorAnyTrue4(VectorNotEquals(v, v));
		}

		// one of v[0,1,2,3] = NaN
		A3D_FORCEINLINE bool VectorIsNaN4(const float128& v)
		{
			//NaN != NaN is true
			return VectorAnyTrue4(VectorNotEquals(v, v));
		}

		// one of abs(v[0,1]) = INF
		A3D_FORCEINLINE bool VectorIsInfinite2(const float128& v)
		{
			return VectorAnyTrue4(VectorEquals(VectorAbs(v), kVectorInfinte));
		}

		// one of abs(v[0,1,2]) = INF
		A3D_FORCEINLINE bool VectorIsInfinite3(const float128& v)
		{
			return VectorAnyTrue4(VectorEquals(VectorAbs(v), kVectorInfinte));
		}

		// one of abs(v[0,1,2,3]) = INF
		A3D_FORCEINLINE bool VectorIsInfinite4(const float128& v)
		{
			return VectorAnyTrue4(VectorEquals(VectorAbs(v), kVectorInfinte));
		}

		// v[i]>max[i], v[i] = max[i]
		// v[i]<min[i], v[i] = min[i]
		A3D_FORCEINLINE float128 VectorClamp(const float128& v,
			const float128& min, const float128& max)
		{
			return VectorMax(VectorMin(v, max), min);
		}

		// v[i]>1.0, v[i] = 1.0
		// v[i]<0.0, v[i] = 0.0
		A3D_FORCEINLINE float128 VectorSaturate(const float128& v)
		{
			return VectorMax(VectorMin(v, kVectorOne), kVectorZero);
		}

		//  2D ray reflect
		//  incident - 2 * dot(incident, normal)*normal 
		A3D_FORCEINLINE float128 VectorReflect2(const float128 incident, const float128& normal)
		{
			return VectorMinus(incident, VectorMultiplyTwice(kVectorTwo, normal, VectorDot2(incident, normal)));
		}

		// 3D ray reflect
		//      incident   reflect
		//          \  |  /|
		//           \ | /
		//     _____ _\|/_________
		//     incident - 2 * dot(incident, normal)*normal 
		// return (x,y,z, undef) 
		A3D_FORCEINLINE float128 VectorReflect3(const float128 incident, const float128& normal)
		{
			return VectorMinus(incident, VectorMultiplyTwice(kVectorTwo, normal, VectorDot3(incident, normal)));
		}

		// W is undef 
		A3D_FORCEINLINE float128 VectorCrossProduct3(const float128& v1, const float128& v2)
		{
			float128 v1_yzxw = VectorShuffle<1, 2, 0, 3>(v1);
			float128 v2_zxyw = VectorShuffle<2, 0, 1, 3>(v2);
			float128 v1_zxyw = VectorShuffle<2, 0, 1, 3>(v1);
			float128 v2_yzxw = VectorShuffle<1, 2, 0, 3>(v2);

			//y2 * z1 , x2*z1 ,  y2*x1 - 
			//y1 * z2 , z1*x1 ,  x2*y1 
			//y2 * z1 - y1 * z2 , x2 * z1 - x1 * z2, y2*x1 - x2-y1
			return VectorMinus(VectorMultiply(v1_yzxw, v2_zxyw),
				VectorMultiply(v1_zxyw, v2_yzxw));
		}

		namespace SinCosConstant
		{
			constexpr float a = 7.58946638440411f;
			constexpr float b = 0.5256583509747431f;
			constexpr float s0 = -0.16666667f;
			constexpr float s1 = 0.0083333310f;
			constexpr float s2 = 0.00019840874f;
			constexpr float s3 = 2.7525562e-06f;
			constexpr float s4 = -2.3889859e-08f;
			constexpr float c0 = -0.5f;
			constexpr float c1 = 0.041666638f;
			constexpr float c2 = -0.0013888378f;
			constexpr float c3 = 2.4760495e-05f;
			constexpr float c4 = -2.6051615e-07f;
			static const float128 A = VectorLoad(a, a, a, a);
			static const float128 B = VectorLoad(b, b, b, b);
			static const float128 S0 = VectorLoad(s0, s0, s0, s0);
			static const float128 S1 = VectorLoad(s1, s1, s1, s1);
			static const float128 S2 = VectorLoad(s2, s2, s2, s2);
			static const float128 S3 = VectorLoad(s3, s3, s3, s3);
			static const float128 S4 = VectorLoad(s4, s4, s4, s4);
			static const float128 C0 = VectorLoad(c0, c0, c0, c0);
			static const float128 C1 = VectorLoad(c1, c1, c1, c1);
			static const float128 C2 = VectorLoad(c2, c2, c2, c2);
			static const float128 C3 = VectorLoad(c3, c3, c3, c3);
			static const float128 C4 = VectorLoad(c4, c4, c4, c4);
		}

		//Sine approximation using a squared parabola restrained to f(0) = 0, f(PI) = 0, f(PI/2) = 1.
		//After approx 2.5 million tests comparing to sin(): 
		//Average error of 0.000128
		//Max error of 0.001091
		// degree
		A3D_FORCEINLINE float128 VectorSinRadianFast(const float128& v)
		{
			//based on a good discussion here http://forum.devmaster.net/t/fast-and-accurate-sine-cosine/9648
			float128 result = VectorMultiply(v, kVectorOneOver2PI);
			result = VectorMultiply(v, kVectorOneOver2PI);
			result = VectorMinus(result, VectorRound(result));
			result = VectorMultiply(SinCosConstant::A,
				VectorMultiply(result,
				VectorMinus(kVectorHalf, VectorAbs(result))));
			return VectorMultiply(result, VectorAdd(SinCosConstant::B,
				VectorAbs(result)));
		}

		A3D_FORCEINLINE float128 VectorRadianToDegree(const float128& v)
		{
			return VectorMultiply(v, kVector180OverPI);
		}

		A3D_FORCEINLINE float128 VectorDegreeToRadian(const float128& v)
		{
			return VectorMultiply(v, kVectorPIOver180);
		}

		A3D_FORCEINLINE float128 VectorSinDegreeFast(const float128& v)
		{
			return VectorSinRadianFast(VectorDegreeToRadian(v));
		}

		A3D_FORCEINLINE float128 VectorCosRadianFast(const float128& v)
		{
			return VectorSinRadianFast(VectorAdd(v, kVectorHalfPI));
		}

		A3D_FORCEINLINE float128 VectorCosDegreeFast(const float128& v)
		{
			return VectorSinRadianFast(VectorAdd(
				VectorDegreeToRadian(v), kVectorHalfPI));
		}

		A3D_FORCEINLINE void VectorSinAndCosFast(float128& sin, float128& cos, const float128& radians)
		{
			//A = A - 2PI * round(A/2PI);
			float128 A = VectorRound(VectorMultiply(radians, kVectorOneOver2PI));
			A = VectorMinus(radians, VectorMultiply(A, kVectorOneOver2PI));
			const float128 abs_A = VectorAbs(A);

			//mapping to [-PI/2, PI/2]
			float128 sign = VectorSign(radians);
			float128 sign_pi = VectorOr(sign, kVectorPI);
			float128 refl = VectorMinus(sign_pi, abs_A);
			float128 cmp = VectorGreater(A, kVectorHalfPI);
			A = VectorSelect(refl, A, cmp);
			sign = VectorSelect(kVectorNegtiveOne, kVectorOne, cmp);
			const float128 AA = VectorMultiply(A, A);

			//sin
			sin = SinCosConstant::S4;
			sin = VectorMultiplyAdd(AA, sin, SinCosConstant::S3);
			sin = VectorMultiplyAdd(AA, sin, SinCosConstant::S2);
			sin = VectorMultiplyAdd(AA, sin, SinCosConstant::S1);
			sin = VectorMultiplyAdd(AA, sin, SinCosConstant::S0);
			sin = VectorMultiplyAdd(AA, sin, kVectorOne);
			sin = VectorMultiply(A, sin);

			cos = SinCosConstant::C4;
			cos = VectorMultiplyAdd(AA, cos, SinCosConstant::C3);
			cos = VectorMultiplyAdd(AA, cos, SinCosConstant::C2);
			cos = VectorMultiplyAdd(AA, cos, SinCosConstant::C1);
			cos = VectorMultiplyAdd(AA, cos, SinCosConstant::C0);
			cos = VectorMultiplyAdd(AA, cos, kVectorOne);
			cos = VectorMultiply(sign, cos);
		}

		

/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
		
		// must match every elements
		A3D_FORCEINLINE bool MatrixIsIdentity(const float128x4& M)
		{
			float128 result = VectorEquals(M[0], kVectorXOne);
			result = VectorAnd(VectorEquals(M[1], kVectorYOne), result);
			result = VectorAnd(VectorEquals(M[2], kVectorZOne), result);
			result = VectorAnd(VectorEquals(M[3], kVectorWOne), result);
			return VectorTrue4(result);
		}

		// once one element is NaN, matrix is NaN,
		A3D_FORCEINLINE bool MatrixIsNaN(const float128x4& M)
		{
			// NaN != Nan is true , NaN == NaN is false
			float128 result = VectorNotEquals(M[0], M[0]);
			result = VectorOr(VectorNotEquals(M[1], M[1]), result);
			result = VectorOr(VectorNotEquals(M[2], M[2]), result);
			result = VectorOr(VectorNotEquals(M[3], M[3]), result);
			return VectorAnyTrue4(result);
		}

		//one element is infinite , matrix is infinite
		A3D_FORCEINLINE bool MatrixIsInInfinite(const float128x4& M)
		{
			float128 result = VectorEquals(VectorAbs(M[0]), kVectorInfinte);
			result = VectorOr(VectorEquals(VectorAbs(M[1]), kVectorInfinte), result);
			result = VectorOr(VectorEquals(VectorAbs(M[2]), kVectorInfinte), result);
			result = VectorOr(VectorEquals(VectorAbs(M[3]), kVectorInfinte), result);
			return VectorAnyTrue4(result);
		}


		//16 times multiply and 12 times add
		A3D_FORCEINLINE void MatrixMultiplyNoCopy(const float128x4& A, const float128x4& B,
			float128x4& C)
		{
			/*
			*	A00 A01 A02 A03       B00 B01 B02 B03      C00 C01 C02 C03
			*	A10 A11 A12 A13   X   B10 B11 B12 B13   =  ...
			*	A20 A21 A22 A23       B20 B21 B22 B23
			*	A30 A31 A32 A33       B30 B31 B32 B33
			*
			*  C00 = A00*B00 + A01*B10 + A02*B20 + A03*B30
			*  C01 = A00*B01 + A01*B11 + A02*B21 + A03*B31
			*  C02 = A00*B02 + A01*B12 + A02*B22 + A03*B32
			*  C03 = A00*B03 + A)1*B12 + A02*B23 + A03*B33
			*
			*  [C00 C01 C02 C03] = A00 * B[0] + A01 * B[1] + A02 * B[2] + A03 * B[3]
			*/
			float128 temp;

			///first row
			temp = VectorMultiply(VectorReplicate<0>(A[0]), B[0]);
			temp = VectorMultiplyAdd(VectorReplicate<1>(A[0]), B[1], temp);
			temp = VectorMultiplyAdd(VectorReplicate<2>(A[0]), B[2], temp);
			C[0] = VectorMultiplyAdd(VectorReplicate<3>(A[0]), B[3], temp);

			// second row
			temp = VectorMultiply(VectorReplicate<0>(A[1]), B[0]);
			temp = VectorMultiplyAdd(VectorReplicate<1>(A[1]), B[1], temp);
			temp = VectorMultiplyAdd(VectorReplicate<2>(A[1]), B[2], temp);
			C[1] = VectorMultiplyAdd(VectorReplicate<3>(A[1]), B[3], temp);

			//third row
			temp = VectorMultiply(VectorReplicate<0>(A[2]), B[0]);
			temp = VectorMultiplyAdd(VectorReplicate<1>(A[2]), B[1], temp);
			temp = VectorMultiplyAdd(VectorReplicate<2>(A[2]), B[2], temp);
			C[2] = VectorMultiplyAdd(VectorReplicate<3>(A[2]), B[3], temp);

			//forth row
			temp = VectorMultiply(VectorReplicate<0>(A[4]), B[0]);
			temp = VectorMultiplyAdd(VectorReplicate<1>(A[4]), B[1], temp);
			temp = VectorMultiplyAdd(VectorReplicate<2>(A[4]), B[2], temp);
			C[4] = VectorMultiplyAdd(VectorReplicate<3>(A[4]), B[3], temp);
		}


		A3D_FORCEINLINE float128x4 MatrixMultiply(const float128x4& A, const float128x4& B)
		{
			float128x4 C;
			MatrixMultiplyNoCopy(A, B, C);
			return C;
		}

		//7 times multiply, 10 times shuffle, 2 times minus, 2 times add
		A3D_FORCEINLINE float128 MatrixDeterminant(const float128x4& M)
		{
			float128 mat2_result[2], accumulate[3], det;
			mat2_result[0] = VectorShuffle<1, 2, 3, 0>(M[3]);
			mat2_result[1] = VectorShuffle<2, 3, 0, 1>(M[3]);
			//9*14, 10*15, 11*16, 12*13
			mat2_result[0] = VectorMultiply(mat2_result[0], M[2]);
			//9*15, 10*16, 11*13, 12*14
			mat2_result[1] = VectorMultiply(mat2_result[1], M[2]);
			det = VectorShuffle<1, 2, 3, 0>(M[2]);
			// 10*13, 11*14, 12*15, 9*16
			det = VectorMultiply(det, M[3]);
			//9*14-10*13, 10*15-11*14, 11*16-12*15, 12*13-9*16
			mat2_result[0] = VectorMinus(mat2_result[0], det);
			det = VectorShuffle<2, 3, 0, 1>(M[2]);
			//11*13, 12*14, 9*15, 10*16 
			det = VectorMultiply(det, M[3]);
			//9*15-11*13, 10*16-12*14, 11*13-9*15, 12*14-10*16
			mat2_result[1] = VectorMinus(mat2_result[1], det);

			//6,7,8,5
			accumulate[0] = VectorShuffle<1, 2, 3, 0>(M[1]);
			//7,8,5,6
			accumulate[1] = VectorShuffle<2, 3, 0, 1>(M[1]);
			//8,5,6,7
			accumulate[2] = VectorShuffle<3, 0, 1, 2>(M[1]);

			//6*(11*16-12*15) , 7*(12*13-9*16), 8*(9*14-10*13), 5*(10*15-11*14)
			det = VectorMultiply(accumulate[0], VectorShuffle<2, 3, 0, 1>(mat2_result[0]));
			//7*(12*14-10*16) , 8*(9*15-11*13), 5*(10*16-12*14), 6*(11*13-9*15)
			det = VectorMultiplyAdd(accumulate[1], VectorShuffle<3, 0, 1, 2>(mat2_result[1]), det);
			//8*(10*15-11*14),  5*(11*16-12*15), 6*(12*13-9*16), 7*(9*14-10*13)
			det = VectorMultiplyAdd(accumulate[2], VectorShuffle<2, 3, 0, 1>(mat2_result[0]), det);
			//+,-,+,-
			return VectorMultiply(det, kVectorOddNegtive);
		}


		A3D_FORCEINLINE void MatrixTransposeNoCopy(const float128x4& original, float128x4& transpose)
		{
			/*
			*	1  2  3  4       1 5  9 13
			*	5  6  7  8   ->  2 6 10 14
			*	9 10 11 12       3 7 11 15
			*  13 14 15 16       4 8 12 16
			*/
			float128 block1 = VectorShuffle< 0, 1, 0, 1>(original[0], original[1]); //1,2,5,6
			float128 block2 = VectorShuffle< 2, 3, 2, 3>(original[0], original[1]); //3,4,7,8
			float128 block3 = VectorShuffle<0, 1, 0, 1>(original[2], original[3]); //9,10,13,14
			float128 block4 = VectorShuffle<2, 3, 2, 3>(original[2], original[3]); //11,12,15,16
			transpose[0] = VectorShuffle<0, 2, 0, 2>(block1, block3); //1,5,9,13
			transpose[1] = VectorShuffle<1, 3, 1, 3>(block1, block3); //2,6,10,14
			transpose[2] = VectorShuffle<0, 2, 0, 2>(block2, block4); //3,7,11,15
			transpose[3] = VectorShuffle<1, 3, 1, 3>(block2, block4); //4,8,12,16
		}

		A3D_FORCEINLINE float128x4 MatrixTranspose(const float128x4& original)
		{
			float128x4 transpose;
			MatrixTransposeNoCopy(original, transpose);
			return transpose;
		}

		//22 times multiply, 8 times minus, 6 times add, 44 times shuffle
		//return determinant
		A3D_FORCEINLINE float128 MatrixInverse(const float128x4& original, float128x4& inverse)
		{
			/*
			*  1 5  9 13
			*  2 6 10 14
			*  3 7 11 15
			*  4 8 12 16
			*
			*  + 1, 9,3,11
			*  - 5,13,7,15
			*  - 2,10,4,12
			*  + 6,14,8,16
			*
			*  mat2  have two part.   like 1*6 - 2*5
			*  mat3  have three part, like 1*(6*11-7*19) + 5*(10*3-2*11) + 9*(2*7-3*6)
			*/

			//transpose and get determinant
			float128x4 transpose;
			MatrixTransposeNoCopy(original, transpose);

			//[1-6,5-10, 9-14, 13 -2] and [3-8, 7-12, 11-16, 15-4 ] 
			float128 counter[2];
			//[1-10, 5-14, 3-12, 7-16]
			float128 jump;
			float128 mat2_result[4];
			counter[0] = VectorShuffle<1, 2, 3, 0>(transpose[1]);         //[6,10,14,2]
			counter[1] = VectorShuffle<1, 2, 3, 0>(transpose[3]);         //[8,12,16,4]
			jump = VectorShuffle<0, 1, 0, 1>(transpose[0], transpose[2]); //[1,5,3,7]
			mat2_result[0] = VectorMultiply(counter[0], transpose[0]);    //[1*6, 5*10, 9*14, 13*2]
			mat2_result[1] = VectorMultiply(counter[1], transpose[2]);    //[3*8, 7*12, 11*16, 15*4]
			mat2_result[2] = VectorMultiply(jump, 
				VectorShuffle<2, 3, 2, 3>(transpose[1], transpose[3]));//[1*10,9*14, 3*12, 11*16]						
			counter[0] = VectorShuffle<1, 2, 3, 0>(transpose[0]);         //[5,9,13,1]
			counter[1] = VectorShuffle<1, 2, 3, 0>(transpose[2]);         //[7,11,15,3]
			jump = VectorShuffle<0, 1, 0, 1>(transpose[1], transpose[3]); //[2,6,4,8]
			counter[0] = VectorMultiply(counter[0], transpose[1]);        //[2*5, 6*9, 10*13, 14*1]
			counter[1] = VectorMultiply(counter[1], transpose[3]);        //[4*7, 8*11,12*15, 16*3]
			jump = VectorMultiply(jump, 
				VectorShuffle<2, 3, 2, 3>(transpose[0],transpose[2]));    //[2*9, 6*13, 4*11, 8*15]

			//[1*6-2*5, 5*10-6*9, 9*14-10*13, 13*2-14*1]
			mat2_result[0] = VectorMinus(mat2_result[0], counter[0]);
			//[3*8-4*7, 7*12-8*11, 11*16-12*15, 15*4- 16*3]
			mat2_result[1] = VectorMinus(mat2_result[1], counter[1]);
			//[1*10-2*9, 5*14-6*13, 3*12-4*11, 7*16-8*15]
			mat2_result[2] = VectorMinus(mat2_result[2], jump);
			//[2*9-1*10, 6*13-5*14, 4*11-3*12, 8*15-7*16]
			mat2_result[3] = VectorMinus(kVectorZero, mat2_result[2]);

			//caculate 1,9,3,11's one and two part
			float128 accumulate[2];
			//[6*11*16, 6*15*4, 16*5*10, 16*1*6] = [6,6,16,16] * [11*16, 15*4, 5*10, 1*6]
			accumulate[0] = VectorShuffle<1, 1, 3, 3>(transpose[1], transpose[3]);
			//[14*7*12, 14*3*8, 8*9*14, 8*13*2] = [14,14, 8, 8] * [7*12, 3*8, 9*14, 13*2]
			accumulate[1] = VectorShuffle<3, 3, 1, 1>(transpose[1], transpose[3]);
			inverse[0] = VectorMultiply(accumulate[0],
				VectorShuffle<2, 3, 1, 0>(mat2_result[1], mat2_result[0]));
			inverse[0] = VectorMultiplyAdd(accumulate[1],
				VectorShuffle<1, 0, 2, 3>(mat2_result[1], mat2_result[0]), inverse[0]);

			//caculate 5,13,7,15's one and two part
			//-[10*3*16, 10*7*4, 4*13*10, 4*9*6]= [10, 10, 4, 4] * -[3*16, 7*4, 13*10, 9*6]
			accumulate[0] = VectorShuffle<2, 2, 0, 0>(transpose[1], transpose[3]);
			//-[2*15*12, 2*11*8, 12*1*14, 12*5*2]= [2, 2, 12, 12] * -[15*12, 11*8, 1*14, 5*2]
			accumulate[1] = VectorShuffle<0, 0, 2, 2>(transpose[1], transpose[3]);
			inverse[1] = VectorMultiply(accumulate[0],
				VectorShuffle<3, 0, 2, 1>(mat2_result[1], mat2_result[0]));
			inverse[1] = VectorMultiplyAdd(accumulate[1],
				VectorShuffle<2, 1, 3, 0>(mat2_result[1], mat2_result[0]), inverse[0]);

			//caculate 2, 10, 4, 12's one and two part
			//-[13*11*8, 13*4*7, 7*13*10, 7*1*14]= [13, 13, 7, 7] * -[11*8, 4*7, 13*10, 1*14]
			accumulate[0] = VectorShuffle<3, 3, 1, 1>(transpose[0], transpose[2]);
			//-[5*15*12, 5*3*16, 15*9*6, 15*5*2]= [5, 5, 15, 15] * -[15*12, 3*16, 9*6, 5*2]
			accumulate[1] = VectorShuffle<1, 1, 3, 3>(transpose[0], transpose[2]);
			inverse[2] = VectorMultiply(accumulate[0],
				VectorShuffle<1, 0, 2, 3>(mat2_result[1], mat2_result[0]));
			inverse[2] = VectorMultiplyAdd(accumulate[1],
				VectorShuffle<2, 3, 1, 0>(mat2_result[1], mat2_result[0]), inverse[0]);

			//caculate 6,14,8,16's one and two part
			//[1*11*16, 1*7*12, 11*2*13, 11*1*6]= [1,1,11, 11] * [11*16, 7*12, 2*13, 1*6]
			accumulate[0] = VectorShuffle<0, 0, 2, 2>(transpose[0], transpose[2]);
			//[9*15*4, 9*3*8, 3*9*14, 3*5*10]= [9,9, 3, 3]* [15*4, 3*8, 9*14, 5*10]
			accumulate[1] = VectorShuffle<2, 2, 0, 0>(transpose[0], transpose[2]);
			inverse[2] = VectorMultiply(accumulate[0],
				VectorShuffle<2, 1, 3, 0>(mat2_result[1], mat2_result[0]));
			inverse[2] = VectorMultiplyAdd(accumulate[1],
				VectorShuffle<3, 0, 2, 1>(mat2_result[1], mat2_result[0]), inverse[0]);

			//[1*10-2*9, 5*14-6*13, 3*12-4*11, 7*16-8*15]
			mat2_result[2] = VectorMinus(mat2_result[2], jump);
			//[2*9-1*10, 6*13-5*14, 4*11-3*12, 8*15-7*16]
			mat2_result[3] = VectorMinus(kVectorZero, mat2_result[2]);

			//1,5,9,13's third accumulate
			//[10*15*8, 14*11*4, 2*7*16, 6*3*12] = [10, 14, 2, 6]*[15*8, 11*4, 7*16, 3*12]
			float128 row0 = VectorShuffle<2, 3, 0, 1>(transpose[1]);
			row0 = VectorMultiply(row0, VectorShuffle<3, 2, 3, 2>(mat2_result[3], mat2_result[2]));

			//2,6,10,14's third part
			//[9*7*16, 13*3*12, 1*15*8, 5*11*4] = [9, 13, 1, 5]*[7*16, 3*12, 15*8, 11*4]
			float128 row1 = VectorShuffle<2, 3, 0, 1>(transpose[0]);
			row1 = VectorMultiply(row1, VectorShuffle<3, 2, 3, 2>(mat2_result[2], mat2_result[3]));

			//3,7,11,15's third part
			//[12*6*13, 16*2*9, 4*5*14, 8*1*10] = [12, 16, 4,8]*[6*13, 2*9, 5*14, 1*10]
			float128 row2 = VectorShuffle<2, 3, 0, 1>(transpose[3]);
			row2 = VectorMultiply(row2, VectorShuffle<1, 0, 1, 0>(mat2_result[2], mat2_result[3]));

			//4,8,12,16's third part
			//[11*5*14, 15*1*10, 3*13*6, 7*9*2] = [11, 15, 3, 7]*[5*14, 1*10, 13*6, 9*2]
			float128 row3 = VectorShuffle<2, 3, 0, 1>(transpose[2]);
			row3 = VectorMultiply(row3, VectorShuffle<1, 0, 1, 0>(mat2_result[3], mat2_result[2]));

			//1,9,3,11 final result
			inverse[0] = VectorAdd(VectorShuffle<0, 2, 0, 2>(row0, row2), inverse[0]);
			//5,13,7,15 final result
			inverse[1] = VectorMinus(VectorShuffle<1, 3, 1, 3>(row0, row2), inverse[1]);
			//2,10,4,12 final result
			inverse[2] = VectorMinus(VectorShuffle<0, 2, 0, 2>(row1, row3), inverse[2]);
			//6,14,8,16 final result
			inverse[3] = VectorAdd(VectorShuffle<1, 3, 1, 3>(row1, row3), inverse[3]);

			//1,5,9,13
			row0 = VectorShuffle<0, 1, 0, 1>(inverse[0], inverse[1]);
			row0 = VectorShuffle<0, 2, 1, 3>(row0);
			//2,6,10,14
			row1 = VectorShuffle<0, 1, 0, 1>(inverse[2], inverse[3]);
			row1 = VectorShuffle<0, 2, 1, 3>(row1);
			//3,7,11,15
			row2 = VectorShuffle<2, 3, 2, 3>(inverse[0], inverse[1]);
			row2 = VectorShuffle<0, 2, 1, 3>(row2);
			//4,8,12,16
			row3 = VectorShuffle<2, 3, 2, 3>(inverse[2], inverse[3]);
			row3 = VectorShuffle<0, 2, 1, 3>(row3);

			float128 determinant = VectorMultiply(transpose[0], row0);
			float128 inv_determinant = VectorReciprocal(determinant);

			inverse[0] = VectorMultiply(inv_determinant, row0);
			inverse[1] = VectorMultiply(inv_determinant, row1);
			inverse[2] = VectorMultiply(inv_determinant, row2);
			inverse[3] = VectorMultiply(inv_determinant, row3);
			return determinant;
		}

		//homogeneous transform
		A3D_FORCEINLINE float128 MatrixTransformVector(
			const float128x4& M, const float128& V)
		{
			/*
			*			1  2  3  4
			* a,b,c,d * 5  6  7  8
			*			9  10 11 12
			*			13 14 15 16
			*
			* = (1+2+3+4)a, (5+6+7+8)b, (9+10+11+12)c, (13+14+15+16)d
			*/
			float128 component[4], result;
			component[0] = VectorReplicate<0>(V);
			component[1] = VectorReplicate<1>(V);
			component[2] = VectorReplicate<2>(V);
			component[3] = VectorReplicate<3>(V);

			result = VectorMultiply(M[0], component[0]);
			result = VectorMultiplyAdd(M[1], component[1], result);
			result = VectorMultiplyAdd(M[2], component[2], result);
			result = VectorMultiplyAdd(M[3], component[3], result);
			return result;
		}
#else
#	include"math_impl_fpu.inl"
#endif //defined(AURORA3D_SSE) || defined(AURORA3D_NEON)
	} // namespace MathUtility
}//namespace Aurora3D