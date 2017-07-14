#pragma once

#include<Core/mpl/int_.h>
namespace Aurora3D
{
	namespace mpl
	{
		template<typename S> struct Length: public Int_<S::length>{};
		struct ZeroLength { static constexpr int length = 0; };
	}
}