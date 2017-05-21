#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsUnsigned :public Bool_ < T(0) < T(-1) > {};
	}
}