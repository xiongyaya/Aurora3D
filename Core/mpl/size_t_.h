#pragma once

#include<Core/mpl/integral_type.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<size_t N> struct Sizet_:public IntegralType<size_t, N>{};
	}
}