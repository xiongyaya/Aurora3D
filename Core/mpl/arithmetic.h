#pragma once
#include<core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T>
		struct Next :public Int_<T::value + 1> {};

		template<typename T>
		struct Prior:public Int_<T::value - 1>{};
	}
}