#include<iostream>
#include<string>
#include<type_traits>
#include<tuple>
#include<boost/type_traits.hpp>
#include"test_proprecessor.hpp"
#include"test_type_traits.hpp"
#include"test_mpl.hpp"
#include"test_vector.hpp"
#include"test_float.hpp"
#include<immintrin.h>
#include<inttypes.h>
#include<float.h>
#include<3rd/DirectXMath/Inc/DirectXMath.h>

using namespace std;

  
#if defined(AURORA3D_COMPILER_MSVC)
//4514: un-used inline function had been removed
//4710: function had not been inlined
#pragma warning(disable:4514 4710)
#endif

int main()
{
	//ProcessTool();
	//TestProprecessor();
	//TestTypeTraits();
	//TestMpl();
	//TestVector();
	TestFloat();
	getchar();
	return 0;
}