#pragma once


#include"../bool_.h"

namespace Aurora3D
{
	namespace mpl
	{
		template<typename A, typename B> struct IsEqual : public False_ {};
		template<typename T, typename T> struct IsEqual<T, T> :public True_ {};
	}
}