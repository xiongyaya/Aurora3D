#pragma once

#include<core/mpl/sizet_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct ArrayLen :public Sizet_<0> { };
		template<typename T, size_t len> struct ArrayLen<T[len]>: public Sizet_<len>{};
		template<typename T> using  ArrayLen_t = typename ArrayLen<T>::type;
#define ArrayLen_v(T)     ArrayLen<T>::value
	}
}