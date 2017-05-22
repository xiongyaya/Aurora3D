#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsStandLayout :public Bool_<__is_standard_layout(T)> {};
	}
}