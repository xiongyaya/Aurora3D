#pragma once

#include"../precompile_def.h"
#include"vector3.h"

namespace Aurora3D
{
	A3D_MS_ALIGN(16) struct Quaternion
	{
	public:
		float x = 0.0f;
		float y = 0.0f;
		float z = 0.0f;
		float w = 0.0f;

	}A3D_GCC_ALIGN(16);
}