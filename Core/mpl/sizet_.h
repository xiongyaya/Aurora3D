#pragma once

#include<Core/mpl/integral_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<size_t N> struct Sizet_:public Integral_<size_t, N>{};
	}
}