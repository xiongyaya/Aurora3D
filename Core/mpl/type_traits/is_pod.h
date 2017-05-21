#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsPod :public Bool_<__is_pod(T)> {};
	}
}