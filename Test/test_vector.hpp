#pragma once

#include<cassert>
#include<Core/math/vector4.h>

using namespace Aurora3D::math;

inline void TestVector()
{
	//================ basic operation =====================
	 Vector4 one{ 1.0f,1.0f,1.0f,1.0f };
	 Vector4 half{ 0.5f,0.5f,0.5f,0.5f };
	Vector4 rcp = half.AccurateRcp();
	cout << rcp.ToString() << endl;
	//Vector4 test1 = (one + one + one -half)*0.5f/2.0f;
	//cout << test1.ToString() << endl;
	//
	////
	//constexpr Vector4 mod1{ 2.3f, 3.3f, 4.2f, 5.5f };
	//Vector4 mod_ret = mod1 % 2.0f;
	//cout << mod_ret.ToString() << endl;
	//mod_ret = -mod_ret;
	//cout << mod_ret.ToString() << endl;

	//Vector4 two =  one + one + one;
	//Vector4 test = kVector2PI;
	//one + one + one;

}