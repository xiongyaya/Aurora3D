#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		//implicitly convertible, use no-explicit-construction
		//e.g.string a = 1.1; not works  no suitable construction
		template<typename From, typename To> struct IsConvertible :public Bool_<__is_convertible_to(From,To)> {};
	}
}