#pragma once

#include<Core/mpl/integral_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<bool T> struct Bool_ :public Integral_<bool, T> 
		{
			typedef Bool_<T>  type;
			typedef Bool_<!T> next;
			typedef Bool_<!T> prior;
			typedef Bool_<!T> reverse;
		};
		typedef Bool_<true>  True_;
		typedef Bool_<false> False_;
	}
}