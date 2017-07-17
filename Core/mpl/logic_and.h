#pragma once

#include<core/mpl/bool_.h>
#include<core/mpl/if.h>

namespace Aurora3D
{
	namespace mpl
	{
		//lazy 
		template<typename... Args> struct And : public True_ {};

		template<typename First, typename... Other> struct And<First, Other...> 
			: public DeriveIf<First, And<Other...>, False_>{};
	}
}