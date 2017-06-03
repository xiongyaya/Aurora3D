#pragma once

#include<Core/math/float32.h>
#include<functional>
#include<random>
#include<memory>
#include<chrono>

using namespace Aurora3D::math;

typedef float(*PFunc)(float);
typedef float(*PFunc2)(float,float);

void TestError(PFunc func1, PFunc func2, bool releativeError, float start, float end, int times)
{
	float range = end - start;
	float slice = range / (float)times;
	std::unique_ptr<float[]> input_data(new float[times]);
	std::unique_ptr<float[]> input_data2(new float[times]);
	std::unique_ptr<float[]> first_data(new float[times]);
	std::unique_ptr<float[]> second_data(new float[times]);

	for (int i = 0; i < times; ++i)
	{
		input_data[i] = start + i*slice;
	}
	std::chrono::high_resolution_clock clock;
	/*std::default_random_engine generator(time(nullptr));
	std::uniform_real_distribution<float> dis(start, end);
	auto Random = std::bind(dis, generator);*/
	
	
	auto point1 = clock.now();

	for (int i = 0; i < times; ++i)
	{
		first_data[i] = func1(input_data[i]);
	}

	auto point2 = clock.now();
	for (int i = 0; i < times; ++i)
	{
		second_data[i] = func2(input_data[i]);
	}
	auto point3 = clock.now();

	double MaxError = 0;
	double AvaError = 0.0f;
	double totalError = 0.0f;
	int MaxI = 0;
	int count = 0;
	for (int i = 0; i < times; ++i)
	{
		if (second_data[i] < 0.0005f) continue;                          //data too small
		count++;

		double error;
		if (releativeError)
			error = (second_data[i] - first_data[i]) / second_data[i];   //releative error
		else
			error = (second_data[i] - first_data[i]);                    //absolute error

		if (abs(error) > abs(MaxError)) {
			MaxError = abs(error);
			MaxI = i;
		}
		totalError += abs(error);
	}
	AvaError = totalError / count;
	double time1 = (point2 - point1).count() / 1000000.0; //ms
	double time2 = (point3 - point2).count() / 1000000.0; //ms
	printf("func1 times:%lf average times:%lf \n", time1, time1 / (double)times);
	printf("func2 times:%lf average times:%lf \n", time2, time2 / (double)times);
	float data = start + MaxI*slice;
	printf("Max Error:%lf average Error:%lf\n", MaxError, AvaError);
	printf("Max Error Data:%lf Result1:%lf, Result2:%lf\n\n", data, func1(data), func2(data));
	
}



void TestError(PFunc2 func1, PFunc2 func2, bool releativeError, float start1, float end1,  float start2, float end2, int times)
{
	float range1 = end1 - start1;
	float slice1 = range1 / (float)times;
	float range2 = end2 - start2;
	float slice2 = range2 / (float)times;
	std::unique_ptr<float[]> input_data1(new float[times]);
	std::unique_ptr<float[]> input_data2(new float[times]);
	std::unique_ptr<float[]> first_data(new float[times]);
	std::unique_ptr<float[]> second_data(new float[times]);

	for (int i = 0; i < times; ++i)
	{
		input_data1[i] = start1 + i*slice1;
		input_data2[i] = start2 + i*slice2;
	}
	std::chrono::high_resolution_clock clock;

	auto point1 = clock.now();
	for (int i = 0; i < times; ++i)
	{
		first_data[i] = func1(input_data1[i], input_data2[i]);
	}

	auto point2 = clock.now();
	for (int i = 0; i < times; ++i)
	{
		second_data[i] = func2(input_data1[i], input_data2[i]);
	}
	auto point3 = clock.now();

	double MaxError = 0.0f;
	double AvaError = 0.0f;
	double totalError = 0.0f;
	int MaxI = 0;
	int count = 0;
	for (int i = 0; i < times; ++i)
	{
		if (second_data[i] < 0.001f) continue;
		count++;
		
		double error;
		if (releativeError)
			error = (second_data[i] - first_data[i]) / second_data[i];   //releative error
		else
			error = (second_data[i] - first_data[i]);                    //absolute error

		if (abs(error) > abs(MaxError)) {
			MaxError = abs(error);
			MaxI = i;
		}
		totalError += abs(error);
	}
	AvaError = totalError / times;
	double time1 = (point2 - point1).count() / 1000000.0; //ms
	double time2 = (point3 - point2).count() / 1000000.0; //ms
	printf("func1 times:%lf average times:%lf \n", time1, time1 / (double)times);
	printf("func2 times:%lf average times:%lf \n", time2, time2 / (double)times);
	printf("Max Error:%lf average Error:%lf \n", MaxError, AvaError);
	int data1 = start1 + MaxI*slice1;
	int data2 = start2 + MaxI*slice2;
	printf("Max Error data1:%f data2:%f result1:%f  result2:%f\n\n", data1, data2, func1(data1,data2), func2(data1,data2));
}

struct Vec {
	float x, y, z, w;
	Vec operator+(const Vec& v)
	{
		return { x + v.x,y + v.y,z + v.z,w + v.w };
	}

	Vec operator/(const Vec& v)
	{
		return { x / v.x,y / v.y,z / v.z,w / v.w };
	}

	Vec operator*(const Vec& v)
	{
		return { x * v.x,y * v.y,z * v.z,w * v.w };
	}
};


float Test1(float F)
{
	return Vector4{ F }.AssignAdd(1.0f).AssignMul(2.0f).AssignDiv(3.0f)[0];
}

float Test2(float F)
{
	constexpr float one = 1.0f;
	constexpr float two = 2.0f;
	constexpr float three = 3.0f;
	return _mm_div_ps(_mm_mul_ps(_mm_add_ps(_mm_load_ps1(&F), _mm_load_ps1(&one)), _mm_load_ps1(&two)), _mm_load_ps1(&three)).m128_f32[0];
}

float Test3(float F)
{
	return ((Vec{ F, F, F, F }+Vec{ 1.0f,1.0f,1.0f,1.0f })*Vec { 2.0f, 2.0f, 2.0f, 2.0f} / Vec{ 2.0f, 2.0f, 2.0f, 2.0f }).x;
}


float TestFastRcp(float F)
{
	return _mm_rcp_ss(_mm_load_ps1(&F)).m128_f32[0];
}

A3D_FORCEINLINE float TestRcp(float F)
{
	constexpr float one = 1.0f;
	return _mm_div_ps(_mm_load_ps1(&one), _mm_load_ps(&F)).m128_f32[0];
}


A3D_FORCEINLINE float TestRcp2(float F)
{
	F = 1.4f / F;
	F = 2.2f / F;
	F = 4.f / F;
	return 1 / F;
}


A3D_FORCENOINLINE __m128  LoadSint
(
	const int* pSource
)
{
	assert(pSource);
#if 1
	__m128 V;
	V.m128_f32[0] = (float)pSource[0];
	V.m128_f32[1] = (float)pSource[1];
	V.m128_f32[2] = 0.f;
	V.m128_f32[3] = 0.f;
	return V;
#else
	__m128 x = _mm_load_ss(reinterpret_cast<const float*>(&pSource[0]));
	__m128 y = _mm_load_ss(reinterpret_cast<const float*>(&pSource[1]));
	__m128 V = _mm_unpacklo_ps(x, y);
	return _mm_cvtepi32_ps(_mm_castps_si128(V));
#endif
}

inline void TestFloat()
{
	
	////test constexpr
	//constexpr float min = FloatMin(1.0f, 2.0f);
	//constexpr float clamp = FloatClamp(3.f, 0.0f, 1.0f);
	//constexpr float saturate = FloatSaturate(3.f);
	//constexpr float nsign = FloatSign(-3.f);

	// float testCeil[] = { FloatCeil(-2.3f),FloatCeil(-1.8f),FloatCeil(-0.8f),FloatCeil(-0.3f),FloatCeil(-0.f),FloatCeil(+0.f),FloatCeil(+0.3f),FloatCeil(+0.9f),FloatCeil(+1.2f),FloatCeil(+1.6f) };
	// float testFloor[] = { FloatFloor(-2.3f),FloatFloor(-1.8f),FloatFloor(-0.8f),
	//	FloatFloor(-0.3f),FloatFloor(-0.f),FloatFloor(+0.f),FloatFloor(+0.3f),FloatFloor(+0.9f),FloatFloor(+1.2f),FloatFloor(+1.6f) };
	//constexpr float testRound[] = { FloatRound(-2.3f),FloatRound(-1.8f),FloatRound(-0.8f),FloatRound(-0.3f),
	//	FloatRound(-0.f),FloatRound(+0.f),FloatRound(+0.3f),FloatRound(+0.9f),FloatRound(+1.2f),FloatRound(+1.6f) };
	//constexpr bool isNegInf = FloatIsInfinite(kfNegativeInf);
	//constexpr bool isPosInf = FloatIsInfinite(kfPositiveInf);
	//constexpr bool isInf = FloatIsInfinite(0);
	//float abs = FloatAbs(-2.0f);
	////float mod = FloatMod(-2.4, 1.1f);
	//float fast_sin = FloatSin(1);
	//
	//cout << FloatSin(2.946795) << " " << FloatSin(0) << endl;

	//cout << sin(2.946795) << " " << sin(0) << endl;
	//cout << FloatExp2(2) << endl;
	//cout << atan2f(1.0, 2.0f) << endl;
	//cout << FloatAtanPos(1.0, 2.0f) << endl;
	//

	//printf("%f, %f, %f, %f, %f, %f, %f, %f\n", FloatRound(-1.1), FloatRound(-0.6), FloatRound(-0.1), FloatRound(-0.0f), FloatRound(+0.0), FloatRound(+0.1), FloatRound(+0.6), FloatRound(+1.1));
	//printf("-3PI:%f, -5/2PI:%f, -2PI:%f, -3/2PI:%f, -PI:%f, -1/2PI:%f, %f\n", FloatClampRadian(-kfHalfPi *6), FloatClampRadian(-kfHalfPi * 5), FloatClampRadian(-kfHalfPi * 4), FloatClampRadian(-kfHalfPi * 3), FloatClampRadian(-kfHalfPi * 2), FloatClampRadian(-kfHalfPi * 1), FloatClampRadian(0.0f));
	//printf("3PI:%f, 5/2PI:%f, 2PI:%f, 3/2PI:%f, PI:%f, 1/2PI:%f, %f\n", FloatClampRadian(kfHalfPi * 6), FloatClampRadian(kfHalfPi * 5), FloatClampRadian(kfHalfPi * 4), FloatClampRadian(kfHalfPi * 3), FloatClampRadian(kfHalfPi * 2), FloatClampRadian(kfHalfPi * 1), FloatClampRadian(0.0f));
	//
	//cout << " Test floor Time:" << endl;
	//TestError(FloatFloor, std::floorf, false, -10000, 10000, 1000000);

	//cout << " Test Round Time:" << endl;
	//TestError(FloatRound, std::roundf, false, -10000, 10000 , 1000000);

	//cout << " Test ClampedSin Time and accuracy:" << endl;
	//TestError(FloatFastSin, std::sinf, false, -kfPi, kfPi, 1000000);

	////cout << " test case:" << FloatArctan(2) << " " << atan(2) << endl;
	//cout << " Test arctan Time and accuracy:" << endl;
	//TestError(FloatFastArctan, std::atan, false, -10, 10, 1000000);

	//cout << " Test floor Time:" << endl;
	//TestError(FloatCeil, std::ceilf, false, -10000, 10000, 1000000);

	//cout << " Test mod Time:" << endl;
	//TestError(FloatMod, fmodf, true, -100, 100, 1,2, 1000000);

	float a = 1 << -1;
	cout << " Test exp2 Time:" << FloatFastExp2(-1.0f)<< endl;
	TestError(FloatFastExp2, std::exp2f, false, -1, 1, 1000000);

	int c = 0;
}