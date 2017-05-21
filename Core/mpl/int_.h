#pragma once

#include<Core/mpl/integral_type.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<int N> struct Int_:public IntegralType<int, N>{};
	}
}