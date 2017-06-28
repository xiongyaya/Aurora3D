#pragma once

#include<Core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsArray : public False_ {};
		template<typename T> struct IsArray<T[]> :public True_ {};
		template<typename T, unsigned int N> struct IsArray<T[N]> :public True_ {};

#define IsArray_v(T)     IsArray<T>::value
#define NotArray_v(T)    (!IsArray<T>::value)
	}
}