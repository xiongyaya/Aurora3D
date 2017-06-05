#pragma once

#include<cmath>
#include<Core/type.h>

#if   defined(AURORA3D_SSE)
#	include<emmintrin.h>
#elif defined(AURORA3D_NEON)
#	include <arm_neon.h>
#endif

namespace Aurora3D
{
	namespace math
	{
		static_assert(sizeof(float) == 4, "float32.h need IEEE754 4 byte float");

		//some constexpr value
		constexpr float kfHalf = 1.0f / 2.0f;
		constexpr float kfPi = 3.1415926535897932f;
		constexpr float kfHalfPi = kfPi / 2.0f;
		constexpr float kfQuaterNegtivePi = -kfPi / 4.0f;
		constexpr float kfQuarterPi = kfPi / 4.0f;
		constexpr float kf2Pi = 2 * kfPi;
		constexpr float kf4Pi = 4 * kfPi;
		constexpr float kf180OverPi = 180.0f / kfPi;   //radian to degree
		constexpr float kfPiOver180 = kfPi / 180.0f;   //degree to radian
		constexpr float kfOneOverPi = 1.0f / kfPi;
		constexpr float kfOneOver2Pi = 1.0f / (2 * kfPi);
		constexpr float kf4OverPiSQ = 4.0f / ( kfPi * kfPi);
		constexpr float kf4OverPi = 4.0 / kfPi;
		constexpr int   kiAbsMask  = 0x7fffffff;
		constexpr int32 kiSignMask = 0x80000000;
		constexpr int32 kfAllOneMask = 0xffffffff;
		constexpr int32 kfAllZeroMask = 0x00000000;
		constexpr int32 kfPositiveInf = 0x7f800000;
		constexpr int32 kfNegativeInf = 0xff800000;
		constexpr int32 kfNaN = 0xffc00000;
		constexpr float kfSmallEpiside = 1.e-6f;
		constexpr float kfMiddleEpiside = 1.e-4f;
		constexpr float kfMiddleSQEpiside = 5.e-6f;
		constexpr float kfLn2 = 0.69314718056;
		constexpr float kfLn2_2Q = 0.48045301391;
		constexpr float kfLn2_3Q = 0.333024652;
		constexpr float kfln2_4Q = 0.230835098583;
		constexpr float kfLn2_5Q = 0.160002697757;
		constexpr float kfLn2_6Q = 0.110905418832;

		///IEEE 754 Format
		/**************************************************************************************************************************************
		*   type     sign      real exp                stored exp                   tail                      value
		*   +0        0        -127                      0                       0x00000000                  +0.0
		*   -0        1        -127                      0                       0x00000000                  -0.0
		*   +1        0         0                        127                     0x00000000                  +1.0                            
		*   -1        1         0                        127                     0x00000000                  -1.0
		*  +Inf       0         128                      255                     0x7fffffff                   --
		*  -Inf       1         128                      255                     0x7fffffff                   --
		*   NaN      0/1        128                      255                     non-zero                    NaN
		* regular Number       -126~127                 1~254                
		*/
		union Float32
		{
		public:
			float fValue;
			struct
			{
				uint32 tail : 23;   //hide 1.x and store x
				uint32 exp :  8;    //range -(2^7-1) ~(2^7) (+offset 2^7-1 => 0~2^8-1)
				uint32 sign : 1;    //0 positive, 1 negtive
			} component;
		};

		A3D_FORCEINLINE constexpr float FloatMax(float a, float b)
		{
			return a >= b ? a : b;
		}

		A3D_FORCEINLINE constexpr float FloatMin(float a, float b)
		{
			return a < b ? a : b;
		}

		//clamped in [min,max]
		A3D_FORCEINLINE constexpr float FloatClamp(float F, float min, float max)
		{
			return FloatMax(FloatMin(F, max), min);
		}

		//clamped in [0,1]
		A3D_FORCEINLINE constexpr float FloatSaturate(float F)
		{
			return FloatClamp(F, 0.0f, 1.0f);
		}

		//clamped in [-1,1]
		A3D_FORCEINLINE constexpr float FloatSNorm(float F)
		{
			return FloatClamp(F, -1.0f, 1.0f);
		}

		//remove fraction part
		A3D_FORCEINLINE constexpr float FloatIntPart(float F)
		{
			return (float)(int32)F;
		}

		A3D_FORCEINLINE constexpr float FloatFracPart(float F)
		{
			return F - (float)(int32)F;
		}

		//
		A3D_FORCEINLINE constexpr bool FloatIsNaN(float F)
		{
			return F != F;
		}

		A3D_FORCEINLINE constexpr bool FloatIsInfinite(float F)
		{
			return F == kfPositiveInf || F == kfNegativeInf;
		}

		A3D_FORCEINLINE constexpr float FloatSign(float F)
		{
			return F > 0.0f ? 1.0f : -1.0f;
		}

		// faster then fmodf
		A3D_FORCEINLINE constexpr float FloatMod(float X, float Y)
		{
			return X - FloatIntPart(X / Y)*Y;
		}

		A3D_FORCEINLINE constexpr float FloatStep(float F, float cmp)
		{
			return F > cmp ? 1.0f : 0.0f;
		}

		A3D_FORCEINLINE constexpr float FloatRStep(float F, float cmp)
		{
			return F < cmp ? 1.0f : 0.0f;
		}

		A3D_FORCEINLINE constexpr float FloatCeil(float F)
		{
			return FloatIntPart(F) + FloatStep(F, 0.f);
		}

		A3D_FORCEINLINE constexpr float FloatFloor(float F)
		{
			return FloatIntPart(F) -FloatRStep(F, 0.f);
		}

		A3D_FORCEINLINE constexpr float FloatAbs(float F)
		{
			return F > 0.0f ? F : -F;
		}

		A3D_FORCEINLINE constexpr float FloatRound(float F)
		{
			return FloatFloor(F + 0.5f);
		}

		A3D_FORCEINLINE constexpr float FloatRadianToDegree(float F)
		{
			return F * kf180OverPi;
		}

		A3D_FORCEINLINE constexpr float FloatDegreeToRadian(float F)
		{
			return F * kfPiOver180;
		}

		//convert ambitracy range to [-Pi~+ Pi]
		A3D_FORCEINLINE float FloatClampRadian(float R)
		{
			return R - FloatFloor(R*kfOneOver2Pi + 0.5f)*kf2Pi;
		}

		//Vector4 algorithm |-PI~PI| Accurate loss less then 0.001
		//test data from -PI - PI 1000000 samples
		// ==> 1/2 time of sin(F) 
		//FloatFastClampedSin times : 15.659444 ms average times : 0.000016 ms
		//std::sin            times : 34.593553 ms average times : 0.000035 ms
		//Max Error : 0.001090 average Error : 0.000505
		//Max Error Data : 2.948705 Result1 : 0.190603, Result2 : 0.191693
		A3D_FORCEINLINE float FloatFastClampedSin(float F)
		{
			constexpr float P = 0.225;
			float Y = kf4OverPi * F - kf4OverPiSQ*F*FloatAbs(F);
			return P *(Y*FloatAbs(Y) - Y) + Y;
		}

		// for SIMD Algorithm Example, ambitrary range
		//based on a good discussion here http://forum.devmaster.net/t/fast-and-accurate-sine-cosine/9648
		//test data from -3PI - 3PI 1000000 samples
		//FloatFastSin times : 26.282251 ms average times : 0.000026 ms
		//std::sin     times : 34.347825 ms average times : 0.000034 ms
		//Max Error : 0.001091 average Error : 0.000505
		//Max Error Data : 6.476406 Result1 : 0.190930, Result2 : 0.192021
		A3D_FORCEINLINE float FloatFastSin(float F)
		{
			static const float P = 0.225f;
			static const float A = 16 * sqrt(P);
			static const float B = (1 - P) / sqrt(P);
			float y = F *kfOneOver2Pi;
			y = y - FloatFloor(y + 0.5f);
			y = A * y * (0.5f - FloatAbs(y));
			return y * (B + FloatAbs(y));
		}

		A3D_FORCEINLINE float FloatFastCos(float F)
		{
			return FloatFastSin(F + kfHalfPi);
		}

		A3D_FORCEINLINE float FloatSin(float F)
		{
			return sin(F);
		}

		A3D_FORCEINLINE float FloatCos(float F)
		{
			return cos(F);
		}

		//sometime 2x faster then atan, 
		//from method metioned at http://www.ntu.edu.sg/home/aukil/papers/conf/2011_IEEE-ISIE11_Fast-arctan.pdf
		//FloatFastArctan times:26.512873 ms  1000000 times
		//std::atanf      times:43.719867 ms
		//Max Error:0.001509 average Error:0.001103  
		//Max Error Data:2.096100 Result1:1.127164, Result2:1.125655
		//Max 0.27 degree error average 0.18 degree error
		A3D_FORCEINLINE float FloatApproxArctan(float F)
		{
			float sign = FloatSign(F);
			float absF = sign*F;
			if (absF < 1.0f)
			{
				return F*(kfQuarterPi - (absF - 1)*(0.2447 + 0.0663*absF));
			}
			else 
			{
				//use the fact that  arctan(x) + arctan(1/x) = Pi/2 * sign(x)
				F = 1 / F;
				absF = F*sign;
				return sign*kfHalfPi - F*(kfQuarterPi - (absF - 1)*(0.2447 + 0.0663*absF));
			}
		}

		// for SIMD Algorithm Example
		// float version 2x faster then std::atan at Release
		// deduce from FloatApproxArctan 
		// improve to formula kfQuarterPi * F - F*(F - 1)*(0.21758 + 0.200587*F - 0.137*F*F);
		// FloatFastArctan : 25.3309  ms 1000000 times
		// std::atan       : 54.5346  ms
		// Max Error : 0.000137 average Error : 0.000063
		// Max Error Data : 2.656998 Result1 : 1.210967, Result2 : 1.210830
		A3D_FORCEINLINE float FloatFastArctan(float F)
		{
			constexpr float A = kfQuarterPi + 0.21758f;
			constexpr float B = 0.200587f - 0.21758f;
			constexpr float C = -0.137f - 0.200587f;
			constexpr float D = 0.137f;
			float sign = FloatSign(F);
			float absF = F*sign;
			float step = 0.0f;
			if (absF > 1.0f)
			{
				F = 1 / F;
				absF = sign*F;
				step = -2.0f;
			}
			return kfQuaterNegtivePi*step*sign + (step+1.0f) * F* ((A + B*absF) + F*F*(C + D*absF));
		}

		A3D_FORCEINLINE float FloatArctan(float F)
		{
			return std::atanf(F);
		}

		//For Vector4 Algorithm Example  
		//tylor-expansion 2^x = 1 + ln2*x + ln2^2/2 x^2 + ln2^3/(3*2*1)*x^3 ... iterate 5 time is enough
		// 3x faster then std::exp2f at Release
		//FloatFastExp2 times:  35.617070 ms 1000000 times
		//std::exp2f    times : 90.409712 ms 
		//Max Error :   0.000330 average Error : 0.000025
		//Max Error Data : -9.999960 Result1 : 0.000976, Result2 : 0.000977
		A3D_FORCEINLINE float FloatFastExp2(float F)
		{
			int exp = (127 + (int)F) << 23;
			const float int_exp = *reinterpret_cast<float*>(&exp);
			F = F - (int)F;
			const float F2 = F*F;
			const float F3 = F2*F;
			return int_exp*(1 + kfLn2*F + (kfLn2_2Q / 2.f)*F2 + (kfLn2_3Q / 6.f)*F3 + (kfln2_4Q / 24.f)*F2*F2 + (kfLn2_5Q / 120.f)*F2*F3);
		}

		// can be 2x faster then std::tan(F) in vs15 Release mode
		// For Vector4 Algorithm Example  
		// #### => Test Case 1 range from (0 ~ Pi/2- 0.03f(0.54 degree to Pi/2) )
		//   FloatFastTan times:28.918495 average times:0.000029
		//   std:: times : 54.519266 average times : 0.000055
		//   Max Error : 0.000158 average Error : 0.000004  Reletive Error
		//   Max Error Data : 1.540749 Result1 : 33.265118, Result2 : 33.270367
		// #### => Test Case 2 range (0~ Pi/2 -0.003f(0.054 degree to Pi/2))
		//   func1 times:  26.213905 average times: 0.000026
		//   func2 times : 53.265736 average times: 0.000053
		//   Max Error : 0.001934 average Error : 0.000012
		//   Max Error Data : 1.567790 Result1 : 332.005402, Result2 : 332.647491
		A3D_FORCEINLINE float FloatFastTan(float F)
		{
			constexpr float p1 = -0.1113614403566;
			constexpr float p2 = 0.001075154738488;
			constexpr float q1 = -0.4446947720281;
			constexpr float q2 = 0.015973392133;
			float F2 = F*F;
			return F*(1.0f + F2*(p2*F2 + p1)) / (1.0f + (q2*F2+q1)*F2);
		}

		A3D_FORCEINLINE float FloatAsin(float F)
		{
			return sinf(F);
		}

		A3D_FORCEINLINE float FloatAcos(float F)
		{
			return acos(F);
		}

		A3D_FORCEINLINE float FloatAtan(float F)
		{
			return atan(F);
		}

		A3D_FORCEINLINE float FloatExp(float F)
		{
			return std::expf(F);
		}

		A3D_FORCEINLINE float FloatExp2(float F)
		{
			return std::exp2f(F);
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

		inline float  FloatAtanPos(float X, float Y)
		{
			const float absX = FloatAbs(X);
			const float absY = FloatAbs(Y);
			const bool yAbsBigger = (absY > absX);
			float t0 = yAbsBigger ? absY : absX; // Max(absY, absX)
			float t1 = yAbsBigger ? absX : absY; // Min(absX, absY)

			if (t0 == 0.f)
				return 0.f;

			float t3 = t1 / t0;
			float t4 = t3 * t3;

			static const float c[7] = {
				+7.2128853633444123e-03f,
				-3.5059680836411644e-02f,
				+8.1675882859940430e-02f,
				-1.3374657325451267e-01f,
				+1.9856563505717162e-01f,
				-3.3324998579202170e-01f,
				+1.0f
			};

			t0 = c[0];
			t0 = t0 * t4 + c[1];
			t0 = t0 * t4 + c[2];
			t0 = t0 * t4 + c[3];
			t0 = t0 * t4 + c[4];
			t0 = t0 * t4 + c[5];
			t0 = t0 * t4 + c[6];
			t3 = t0 * t3;
			t3 = yAbsBigger ? (0.5f * kfPi) - t3 : t3;
			t3 = (X < 0.0f) ? kfPi - t3 : t3;
			t3 = (Y < 0.0f) ? -t3 : t3;
			return t3;
		}

		A3D_FORCEINLINE int32 IntFloorLog2(int32 Value)
		{
			int32 pos = 0;
			if (Value >= 1 << 16) { Value >>= 16; pos += 16; }
			if (Value >= 1 << 8) { Value >>= 8; pos += 8; }
			if (Value >= 1 << 4) { Value >>= 4; pos += 4; }
			if (Value >= 1 << 2) { Value >>= 2; pos += 2; }
			if (Value >= 1 << 1) { pos += 1; }
			return (Value == 0) ? 0 : pos;
		}

		A3D_FORCEINLINE int32 IntCeilLog2(int32 V)
		{
			int32 floor = IntFloorLog2(V);
			if (V & (~(1 << floor))) return floor + 1;
			return floor;
		}

		A3D_FORCEINLINE int32 CountHeadZero(int32 V)
		{
			if (0 == V) return 32;
			return 31 - IntFloorLog2(V);
		}

		A3D_FORCEINLINE float FloatPow(float X, float Y)
		{
			return powf(X, Y);
		}

		A3D_FORCEINLINE float FloatPow2(float F)
		{
			return powf(2.0f, F);
		}

		A3D_FORCEINLINE int32 CountTailZero(int32 V)
		{
			if (0 == V) return 32;
			int32 count = 0;
			while (0 == (V & 1)) { V >>= 1; ++count; }
			return count;
		}

		A3D_FORCEINLINE bool FloatNearlyEquals(float X, float Y, float tolerrent = kfMiddleEpiside)
		{
			return FloatAbs(X - Y) <= tolerrent;
		}

		A3D_FORCEINLINE bool FloatInBound(float F, float B)
		{
			return FloatAbs(F) <= B;
		}

		A3D_FORCEINLINE float FloatSqrt(float F)
		{
#if   defined(AURORA3D_SSE) 
			return _mm_sqrt_ss(_mm_load1_ps(&F)).m128_f32[0];
#elif 
			return vsqrtq_f32(vdupq_n_f32(F)).n128_f32[0];
#else
			return sqrtf(F);
#endif
		}

		//fast 1/x^1/2 accuracy loss less then 0.0001
		A3D_FORCEINLINE float FloatFastRcpSqrt(float F)
		{
			constexpr float one = 1.0f;
#if   defined(AURORA3D_SSE) 
			return _mm_rsqrt_ss(_mm_load_ss(&F)).m128_f32[0];
#elif defined(AURORA3D_NEON)
			__n128 sqrt = vsqrtq_f32(vdupq_n_f32(F);
			__n128 rcp_sqrt = vrecpeq_f32(sqrt);
			return vmulq_f32(vrecpsq_f32(sqrt, rcp_sqrt), rcp_sqrt).n128_f32[0];
#else
			return 1.0f / sqrtf(F);
#endif
		}

		//1 iteration Newton-Raphson, Accuracy is enough
		//error less then 0.0000001
		A3D_FORCEINLINE float FloatRcpSqrt(float F)
		{
			float p = F / 2.0f;
#if   defined(AURORA3D_SSE) 
			constexpr __m128 OneDotHalf = { 1.5f,1.5f,1.5f,1.5f };
			__m128 P = _mm_load_ss(&p);                                   //n/2
			__m128 X = _mm_rsqrt_ss(_mm_load_ss(&F));                     //X
			P = _mm_mul_ss(P, _mm_mul_ss(X, _mm_mul_ss(X, X)));           //n/2*x^3
			return _mm_sub_ps(_mm_mul_ss(OneDotHalf, X), P).m128_f32[0];  //1.5*x - n/2*x^3
#elif defined(AURORA3D_NEON)
			__n128 sqrt = vsqrtq_f32(vdupq_n_f32(F);
			__n128 rcp_sqrt = vrecpeq_f32(sqrt);
			return vmulq_f32(vrecpsq_f32(sqrt, rcp_sqrt), rcp_sqrt).n128_f32[0];  
#else
			return 1.0f / sqrtf(F);
#endif
		}


	}
}