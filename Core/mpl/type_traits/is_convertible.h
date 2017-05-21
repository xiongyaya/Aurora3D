#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		//implicitly convertible
		//string a = 1.1; not works  no suitable construction
		// const int a = (const int)1; works
		template<typename From, typename To> struct IsConvertible :public Bool_<__is_convertible_to(From,To)> {};
	}
}