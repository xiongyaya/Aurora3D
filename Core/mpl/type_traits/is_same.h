#pragma once

#include<Core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		//ingore const volatile
		template<typename A,typename B> struct IsSame : public False_ {};
		template<typename T> struct IsSame<T, T> :public True_ {};
		template<typename A, typename B> using IsSame_t = typename IsSame<A,B>::type;
#define IsSame_v(A,B)   IsSame<A,B>::value
#define NotSame_v(A,B)  (!IsSame<A,B>::value)
		
	}
}