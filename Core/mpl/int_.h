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

		typedef Int_<-1> intn1_;
		typedef Int_<0>  int0_;
		typedef Int_<1>  int1_;
		typedef Int_<2>  int2_;
		typedef Int_<3>  int3_;
		typedef Int_<4>  int4_;
		typedef Int_<5>  int5_;
		typedef Int_<6>  int6_;
		typedef Int_<7>  int7_;
		typedef Int_<8>  int8_;
		typedef Int_<9>  int9_;
	}
}