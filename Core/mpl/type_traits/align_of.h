#pragma once

#include<core/mpl/size_t_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct AlignOf :public Sizet_<alignof(T)>{};
	}
}