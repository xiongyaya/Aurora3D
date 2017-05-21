#pragma once

#include"../bool_.h"

namespace Aurora3D
{
	namespace mpl
	{
		//ingore const volatile
		template<typename A,typename B> struct IsSame : public False_ {};
		template<typename T> struct IsSame<T, T> :public True_ {};
	}
}