#pragma once

#include<Core/mpl/integral_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<int N> struct Int_:public Integral_<int, N>
		{
			typedef Int_<N + 1> next;
			typedef Int_<N - 1> prior;
		};
	}
}