#pragma once

#include<core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T1, typename T2> struct LessEqual : public Bool_< (T1::value <= T2::value) >{};
	}
}