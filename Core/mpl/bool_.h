#pragma once

#include<Core/mpl/integral_type.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<bool T> struct Bool_ :public IntegralType<bool, T> 
		{
			typedef Bool_<!T> next;
			typedef Bool_<!T> prior;
		};
		typedef Bool_<true>  True_;
		typedef Bool_<false> False_;
	}
}