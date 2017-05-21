#pragma once

#include<core/mpl/size_t_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct ArrayLen :public Sizet_<0> { };
		template<typename T, size_t len> struct ArrayLen<T[len]>: public Sizet_<len>{};
	}
}