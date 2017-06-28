#pragma once

#include<Core/type.h>
#include<Core/mpl/integral_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<int64 N> struct Int_:public Integral_<int64, N>
		{
			typedef Int_<N + 1> next;
			typedef Int_<N - 1> prior;
		};
	}
}