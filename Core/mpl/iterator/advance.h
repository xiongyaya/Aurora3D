#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename It, typename N> struct Advance 
			:public It::template add<N>{};
	}
}