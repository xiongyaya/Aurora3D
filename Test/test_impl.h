#pragma once



struct alignas(16) Vector4
{
	float  v[4];
};


typedef Vector4 float128;


float128 VectorAdd(const float128& v1, const float128& v2)
{
	return float128{};
}