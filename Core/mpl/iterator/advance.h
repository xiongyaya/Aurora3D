#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//It += N
		template<typename It, typename N> struct Advance 
			:public It::template add<N>{};
	}
}