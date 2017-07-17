#pragma once
#include<core/mpl/bool_.h>
#include<core/mpl/if.h>

namespace Aurora3D
{
	namespace mpl
	{
		//T1 && T2 && T3 ...
		template<typename... Args> struct Or:public False_ {};
		template<typename T, typename... TArgs> struct Or<T, TArgs...> 
			: public DeriveIf<T, True_, Or<TArgs...>>{};
	}
}