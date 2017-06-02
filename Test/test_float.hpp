#pragma once

#include<Core/math/float32.h>
#include<random>
#include<memory>
#include<chrono>

using namespace Aurora3D::math;

typedef float(*PFunc)(float);
typedef float(*PFunc2)(float,float);

void TestError(PFunc func1, PFunc func2, float start, float end, int times)
{
	float range = end - start;
	float slice = range / (float)times;
	std::unique_ptr<float[]> input_data(new float[times]);
	std::unique_ptr<float[]> first_data(new float[times]);
	std::unique_ptr<float[]> second_data(new float[times]);

	for (int i = 0; i < times; ++i)
	{
		input_data[i] = start + i*slice;
	}
	std::chrono::high_resolution_clock clock;
	
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

	double MaxError = 0.0f;
	double AvaError = 0.0f;
	double totalError = 0.0f;
	int MaxI = 0;
	for (int i = 0; i < times; ++i)
	{
		if (second_data[i] < 0.001f) continue;

		double error = (second_data[i] - first_data[i]) / second_data[i];

		if (error > MaxError) {
			MaxError = error;
			MaxI = i;
		}
		totalError += error;
	}
	AvaError = totalError / times;
	double time1 = (point2 - point1).count() / 1000000.0; //ms
	double time2 = (point3 - point2).count() / 1000000.0; //ms
	printf("func1 times:%lf average times:%lf \n", time1, time1 / (double)times);
	printf("func2 times:%lf average times:%lf \n", time2, time2 / (double)times);
	printf("Max Error:%lf average Error:%lf  data:%f \n", MaxError, AvaError, start+ MaxI*slice);
}


void TestError(PFunc2 func1, PFunc2 func2, float start1, float end1,  float start2, float end2, int times)
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
	for (int i = 0; i < times; ++i)
	{
		if (second_data[i] < 0.001f) continue;

		
		double error = (second_data[i] - first_data[i]) / second_data[i];
	
		if (error > MaxError) {
			MaxError = error;
			MaxI = i;
		}
		totalError += error;
	}
	AvaError = totalError / times;
	double time1 = (point2 - point1).count() / 1000000.0; //ms
	double time2 = (point3 - point2).count() / 1000000.0; //ms
	printf("func1 times:%lf average times:%lf \n", time1, time1 / (double)times);
	printf("func2 times:%lf average times:%lf \n", time2, time2 / (double)times);
	printf("Max Error:%lf average Error:%lf  data1:%f \n, data2:%f", MaxError, AvaError, start1 + MaxI*slice1, start2 + MaxI*slice2);
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


inline void TestFloat()
{
	//test constexpr
	constexpr float min = FloatMin(1.0f, 2.0f);
	constexpr float clamp = FloatClamp(3.f, 0.0f, 1.0f);
	constexpr float saturate = FloatSaturate(3.f);
	constexpr float nsign = FloatSign(-3.f);

	 float testCeil[] = { FloatCeil(-2.3f),FloatCeil(-1.8f),FloatCeil(-0.8f),FloatCeil(-0.3f),FloatCeil(-0.f),FloatCeil(+0.f),FloatCeil(+0.3f),FloatCeil(+0.9f),FloatCeil(+1.2f),FloatCeil(+1.6f) };
	 float testFloor[] = { FloatFloor(-2.3f),FloatFloor(-1.8f),FloatFloor(-0.8f),
		FloatFloor(-0.3f),FloatFloor(-0.f),FloatFloor(+0.f),FloatFloor(+0.3f),FloatFloor(+0.9f),FloatFloor(+1.2f),FloatFloor(+1.6f) };
	constexpr float testRound[] = { FloatRound(-2.3f),FloatRound(-1.8f),FloatRound(-0.8f),FloatRound(-0.3f),
		FloatRound(-0.f),FloatRound(+0.f),FloatRound(+0.3f),FloatRound(+0.9f),FloatRound(+1.2f),FloatRound(+1.6f) };
	constexpr bool isNegInf = FloatIsInfinite(kfNegativeInf);
	constexpr bool isPosInf = FloatIsInfinite(kfPositiveInf);
	constexpr bool isInf = FloatIsInfinite(0);
	float abs = FloatAbs(-2.0f);
	float mod = FloatMod(-2.4, 1.1f);
	float fast_sin = FloatFastSin(1);

	cout << FloatFastSin(2.946795) << " " << FloatFastSin(0) << endl;
	cout << sin(2.946795) << " " << sin(0) << endl;
	cout << FloatExp2(2) << endl;
	cout << atan2f(1.0, 2.0f) << endl;
	cout << FloatAtanPos(1.0, 2.0f) << endl;
	
	cout << FloatRcpSqrt(9400.259766) << " " << sqrtf(9400.259766)<<" "<< TestFastRcp(1.0f) << endl;
	TestError(FloatRcpSqrt, sqrtf, 0.0001f, 20000 , 1000000);
	//TestError(FloatRound, round, -3.f, 3.f, 1000000);
	//TestError(FloatAtanPos, atan2f, 1, 2.0f, 2.f, 499.0f, 1000000);

	int a = 0;
}