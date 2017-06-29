#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct TypeBitNot :public Int_<~T::value> {};
	}
}