#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsConst: public False_{};
		template<typename T> struct IsConst<T const>: public True_{};
	}
}