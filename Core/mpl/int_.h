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

		typedef Int_<-1> NOne_;
		typedef Int_<0>  Zero_;
		typedef Int_<1>  One_;
		typedef Int_<2>  Two_;
	}
}