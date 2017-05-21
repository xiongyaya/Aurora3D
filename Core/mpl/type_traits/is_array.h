#pragma once

#include"../bool_.h"

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsArray : public False_ {};
		template<typename T> struct IsArray<T[]> :public True_ {};
		template<typename T, unsigned int N> struct IsArray<T[N]> :public True_ {};
	}
}