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

		constexpr float kfPi = 3.1415926535897932f;
		constexpr float kf2Pi = 2 * kfPi;
		constexpr float kf4Pi = 4 * kfPi;
		constexpr float kf180OverPi = 180.0f / kfPi;   //radian to degree
		constexpr float kfPiOver180 = kfPi / 180.0f;   //degree to radian
		constexpr float kfOneOverPi = 1.0f / kfPi;
		constexpr float kfOneOver2Pi = 1.0f / (2 * kfPi);
		constexpr float kf4OverSquarePiSQ = 4.0f / ( kfPi * kfPi);
		constexpr float kfHalfPi = kfPi / 2.0f;
		constexpr float kfQuarterPi = kfPi / 4.0f;
		constexpr float kf4OverPi = 4.0 / kfPi;
		constexpr int32 kfTopZero = 0x7fffffff;
		constexpr int32 kfTopOne = 0x80000000;
		constexpr int32 kfAllOneMask = 0xffffffff;
		constexpr int32 kfAllZeroMask = 0x00000000;
		constexpr int32 kfPositiveInf = 0x7f800000;
		constexpr int32 kfNegativeInf = 0xff800000;
		constexpr int32 kfNaN = 0xffc00000;
		constexpr float kfSmallEpiside = 1.e-6f;
		constexpr float kfMiddleEpiside = 1.e-4f;
		constexpr float kfMiddleSQEpiside = 5.e-6f;

		union Float32
		{
		public:
			float fValue;
			struct
			{
				uint32 tail : 23;
				uint32 exp : 8;
				uint32 sign : 1;
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

		A3D_FORCEINLINE constexpr float FloatClamp(float F, float min, float max)
		{
			return FloatMax(FloatMin(F, max), min);
		}

		A3D_FORCEINLINE constexpr float FloatSaturate(float F)
		{
			return FloatClamp(F, 0.0f, 1.0f);
		}

		A3D_FORCEINLINE constexpr float FloatSNorm(float F)
		{
			return FloatClamp(F, -1.0f, 1.0f);
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
			return F == kfPositiveInf || F == kfNegativeInf;
		}

		A3D_FORCEINLINE constexpr float FloatSign(float F)
		{
			return F > 0.0f ? 1.0f : -1.0f;
		}

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

		//1/9 time of ceil(F)
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
			float Abs = FloatAbs(F);
			return FloatSign(F) * (FloatIntPart(Abs) + FloatStep(FloatFracPart(Abs), 0.5f));
		}

		A3D_FORCEINLINE constexpr float FloatRadianToDegree(float F)
		{
			return F * kf180OverPi;
		}

		A3D_FORCEINLINE constexpr float FloatDegreeToRadian(float F)
		{
			return F * kfPiOver180;
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
		
		//convert ambitracy range to [-Pi~+ Pi]
		A3D_FORCEINLINE float FloatClampRadian(float R)
		{
			float signPi = FloatSign(R)*kfPi;
			return FloatMod(R + signPi, kf2Pi) - signPi;
		}

		float sine(float x)
		{
			const float pi = 3.1415926536f;

			const float P = 0.225f;
			const float A = 16 * sqrt(P);
			const float B = (1 - P) / sqrt(P);

			float y = x / (2 * pi);
			//   mulps xmm0, inv2PI

			y = y - round(y + 0.5);  // y in range -0.5..0.5
									 // using SSE2 here, RN flag set
									 //   cvtps2dq xmm1, xmm0
									 //   cvtdq2ps xmm1, xmm1
									 //   subps xmm0, xmm1

			y = A * y * (0.5 - abs(y));
			//   movaps xmm1, xmm0
			//   andps xmm1, abs
			//   subps xmm1, half
			//   mulps xmm0, xmm1
			//   mulps xmm0, minusA

			return y * (B + abs(y));
			//   movaps xmm1, xmm0
			//   andps xmm1, abs
			//   addps xmm1, B
			//   mulps xmm0, xmm1
		}

		//Vector4 algorithm |-PI~PI| Accurate loss less then 0.001
		//1/19 time of sin(F) at release mode
		//based on a good discussion here http://forum.devmaster.net/t/fast-and-accurate-sine-cosine/9648
		A3D_FORCEINLINE float FloatFastSin(float F)
		{
			constexpr float P = 0.225;
			float Y = kf4OverPi * F - kf4OverSquarePiSQ*F*FloatAbs(F);
			return P *(Y*FloatAbs(Y) - Y) + Y;
		}

		A3D_FORCEINLINE float FloatFastCos(float F)
		{
			return FloatFastSin(F + kfHalfPi);
		}

		

		A3D_FORCEINLINE float FloatFastTan(float F)
		{
			return tan(F);
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

		A3D_FORCEINLINE float FloatPow(float X, float Y)
		{
			return powf(X, Y);
		}

		A3D_FORCEINLINE float FloatPow2(float F)
		{
			return powf(2.0f, F);
		}

		A3D_FORCEINLINE int32 CountHeadZero(int32 V)
		{
			if (0 == V) return 32;
			return 31 - FloatFloorLog2(V);
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

	



		// 2 iteration Newton-Raphson max error is less then 0.0001
//		A3D_FORCEINLINE float FloatFastRcp(float F)
//		{
//#if   defined(AURORA3D_SSE) 
//			float rcp = _mm_rcp_ss(_mm_load_ps1(&F)).m128_f32[0];
//			rcp =  2 * rcp - F*rcp*rcp;
//			return 2 * rcp - F*rcp*rcp;
//#endif
//		}



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

	
		//fast 1/x^2 accuracy loss less then 0.0001
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
			return vmulq_f32(vrecpsq_f32(sqrt, rcp_sqrt), rcp_sqrt).n128_f32[0];  //error less then 0.0000001
#else
			return 1.0f / sqrtf(F);
#endif
		}


	}
}