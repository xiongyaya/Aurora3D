#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//T ++
		template<typename T> using Prior = typename T::prior;
	}
}