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
		constexpr float kfNegtivePi = -kfPi / 2.0f;
		constexpr float kfQuarterPi = kfPi / 4.0f;
		constexpr float kfNegtiveQuaterPi = -kfPi / 4.0f;
		constexpr float kf2Pi = 2 * kfPi;
		constexpr float kf4Pi = 4 * kfPi;
		constexpr float kf180OverPi = 180.0f / kfPi;   //radian to degree
		constexpr float kfPiOver180 = kfPi / 180.0f;   //degree to radian
		constexpr float kfOneOverPi = 1.0f / kfPi;
		constexpr float kfOneOverPiSQ = 1.0f / (kfPi*kfPi);
		constexpr float kfOneOver2Pi = 1.0f / (2 * kfPi);
		constexpr float kf4OverPi = 4.0 / kfPi;
		constexpr float kf4OverPiSQ = 4.0f / (kfPi * kfPi);
		constexpr int32 kiAbsMask = 0x7fffffff;
		constexpr int32 kiSignMask = 0x80000000;
		constexpr int32 kfAllOneMask = 0xffffffff;
		constexpr int32 kfAllZeroMask = 0x00000000;
		constexpr int32 kfPositiveInf = 0x7f800000;
		constexpr int32 kfNegativeInf = 0xff800000;
		constexpr int32 kfNaN = 0xffc00000;
		constexpr float kfSmallEpiside = 1.e-6f;
		constexpr float kfMiddleEpiside = 1.e-4f;
		constexpr float kfMiddleSQEpiside = 5.e-6f;
		constexpr float kfLn2 = 0.69314718056;          //ln2
		constexpr float kfLn2_2Q = 0.48045301391;       //ln2^2
		constexpr float kfLn2_3Q = 0.333024652;         //ln2^3
		constexpr float kfln2_4Q = 0.230835098583;      //ln2^4
		constexpr float kfLn2_5Q = 0.160002697757;      //ln2^5
		constexpr float kfLn2_6Q = 0.110905418832;      //ln2^6

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
				uint32 exp : 8;    //range -(2^7-1) ~(2^7) (+offset 2^7-1 => 0~2^8-1)
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
			return FloatIntPart(F) - FloatRStep(F, 0.f);
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

		// For SIMD Algorithm Example
		// from method metioned by William and Cody
		// r5 modified to Get 0 at Pi (clamped)
		//
		// ---------Test Case 1 -------Range(-100 ,100) ------- Test at VS15 Release 1000000 Samples -----------
		// FloatSin    : 12.701865 ms average times : 0.000013 ms
		// std::sinf   : 22.278055 ms average times : 0.000022 ms
		// Max Error   : 0.000026 average Error : 0.000004
		// Max Error F : 90.863388, FloatSin : 0.240447, std::sinf : 0.240420
		//
		// TODO: Test On Mac/Phone/Linux/Android
		A3D_FORCEINLINE float FloatSin(float F)
		{
#ifdef AURORA3D_FLOAT_HIGH_PRECISION
			return std::sinf(F);
#else
			constexpr float r1 = -0.1666666660883;
			constexpr float r2 = 0.008333330720556;
			constexpr float r3 = -0.0001984083282313;
			constexpr float r4 = 0.000002752397106775;
			constexpr float r5 = -0.0000000232425;
			float signOffset = F >= 0.0 ? 0.5f : -0.5f;
			F = F - ((int32)(F*kfOneOver2Pi + signOffset))*kf2Pi;        //clamped to [-Pi, Pi]
			float F2 = F*F;
			return (((((r5*F2 + r4)*F2 + r3)*F2 + r2)*F2 + r1)*F2 + 1.0f)*F;
#endif
		}

		A3D_FORCEINLINE float FloatCos(float F)
		{
			return FloatSin(F + kfHalfPi);
		}

		// For SIMD Algorithm Example
		// from method metioned at http://www.ntu.edu.sg/home/aukil/papers/conf/2011_IEEE-ISIE11_Fast-arctan.pdf
		// original fomula :                    F*(F − 1)*(0.2447 + 0.0663*F)
		// improved By additional Polynomial To F*(F - 1)*(0.21758 + 0.200587*F - 0.137*F*F) 
		// 
		// ----------Test Case 1 -------Range(-10000 ,10000) 1000000 Samples -------- Test at VS15 Release---------
		//FloatArctan times : 10.939223 ms average times : 0.000011 ms
		//std::atanf  times : 20.358904 ms average times : 0.000020 ms
		//Max Error         : 0.000137 average Error : 0.000002
		//Max Error F       : -2.680664 ,FloatArctan : -1.213880, std::atanf : -1.213743
		//
		// TODO: Test On Mac/Phone/Linux/Android
		A3D_FORCEINLINE float FloatArctan(float F)
		{
#ifdef AURORA3D_FLOAT_HIGH_PRECISION
			return std::atanf(F);
#else
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
			return kfNegtiveQuaterPi*step*sign + (step + 1.0f) * F* ((A + B*absF) + F*F*(C + D*absF));
#endif
		}

		// For Vector4 Algorithm Example  
		// From tylor-expansion 2^x = 1 + ln2*x + ln2^2/2 x^2 + ln2^3/(3*2*1)*x^3 ... iterate 6 time is enough
		//
		// ----------Test Case 1 --------Range(0.0f,33.0f) 1000000 Samples -------- Test at VS15 Release  -------
		// nearly 7x faster then std::exp2f  (can't believe my eyes)
		// FloatExp2   : 11.962299 ms average times : 0.000012 ms
		// std::expf   : 79.797091 ms average times : 0.000080 ms
		// Max Error   : 0.000008 average Error : 0.000001 (Reletive Error Because 2^F always greater equal then 1.0f )
		// Max Error F : 6.999399 FloatExp2 : 127.945625, std::expf : 127.946709
		//
		// ----------Test Case 2 --------Range(-33.0f,0.0f) 1000000 Samples -------- Test at VS15 Release  -------
		// FloatExp2 times : 11.736838 ms average times : 0.000012 ms
		// std::expf times : 79.340074 ms average times : 0.000079 ms
		// Max Error       : 0.000028 average Error : 0.000003 (Absolute Error because 2^F always less then 1.0f )
		// Max Error F     : -7.999992 Result1 : 0.003906, Result2 : 0.003906
		A3D_FORCEINLINE float FloatExp2(float F)
		{
#ifdef AURORA3D_FLOAT_HIGH_PRECISION
			return std::exp2f(F);
#else
			constexpr float t1 = kfLn2;
			constexpr float t2 = kfLn2_2Q / 2.0f;
			constexpr float t3 = kfLn2_3Q / 6.f;
			constexpr float t4 = kfln2_4Q / 24.f;
			constexpr float t5 = kfLn2_5Q / 120.f;
			constexpr float t6 = kfLn2_6Q / 720.f;

			int exp = (127 + (int)F) << 23;
			const float int_exp = *reinterpret_cast<float*>(&exp);
			F = F - (int)F;
			return int_exp*(1 + F*(t1 + F*(t2 + F*(t3 + F*(t4 + F*(t5 + t6*F))))));
#endif
		}

		A3D_FORCEINLINE float FloatExp(float F)
		{
			
			return 1 + F*(1.0f / 2.0f + F*(1.0f / 6.0f + F*(1.0f / 24.0f + F*(1.0f / 120.0f + F*1.0f / 720.0f)))) / den;
		}



		// For Vector4 Algorithm Example  
		// from method metioned by William and Cody
		//
		// ----------Test Case 1 --------Range(-Pi/2+0.0001 , Pi/2-0.0001 (+-)0.018 Degree ) 1000000 Samples -------- Test at VS15 Release  -------
		//FloatTan    : 13.658875 ms average times : 0.000014 ms
		//std::tanf   : 27.357839 ms average times : 0.000027 ms
		//Max Error   : 0.00086909 average Error : 0.00000021
		//Max Error F : -1.57068062, FloatTan : -8649.92382813, std::tanf : -8642.406250
		//
		// ----------Test Case 2 --------Range(-Pi/2+0.001 , Pi/2-0.001 (+-)0.18 Degree ) 1000000 Samples -------- Test at VS15 Release  -------
		//func1 times : 13.912238 ms average times : 0.000014 ms
		//func2 times : 28.605415 ms average times : 0.000029 ms
		//Max Error : 0.00009596 average Error : 0.00000015
		//Max Error F : -1.56970215, FloatTan : -914.01513672, std::tanf : -913.927429
		//
		A3D_FORCEINLINE float FloatTan(float F)
		{
#ifdef AURORA3D_FLOAT_HIGH_PRECISION
			return std::tanf(F);
#else
			constexpr float p1 = -0.1282834704095743847;
			constexpr float p2 = 0.002805918241169988906;
			constexpr float p3 = -0.000007483634966612065149;
			constexpr float q1 = -0.461616803742904884;
			constexpr float q2 = 0.02334485282206872802;
			constexpr float q3 = -0.0002084480442203870948;

			float signOffset = F >= 0.0 ? 0.5f : -0.5f;
			F = F - ((int32)(F*kfOneOverPi + signOffset))*kfPi;        //clamped to [-Pi/2, Pi/2]
			float F2 = F*F;
			return F*(1.0f + F2*((p3*F2+p2)*F2 + p1)) / (1.0f + ((q3*F2+q2)*F2 + q1)*F2);
#endif
		}

		A3D_FORCEINLINE float FloatAsin(float F)
		{
			float absF = FloatAbs(F);
			if (absF > 1.0f) return kfNaN;  //not a number
			
			const float F2 = F*F;

			return F*(1 + F2*(1 / 6 + F2*(5 / 112 + +35 / 1152 * F2)));
		}

		A3D_FORCEINLINE float FloatAcos(float F)
		{
			return acos(F);
		}

		A3D_FORCEINLINE float FloatAtan(float F)
		{
			return atan(F);
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


		//1 iteration Newton-Raphson, Accuracy is enough
		//
		//FloatRcpSqrt    : 8.700963 ms average times : 0.000009 ms
		//1.0f/ std::sqrt : 11.520356 ms average times : 0.000012 ms
		//Max Error       : 0.00000028 average Error : 0.00000004
		//Max Error F     : 38.87512207, FloatRcpSqrt : 0.16038510, 1.0f/ std::sqrt : 0.160385
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
