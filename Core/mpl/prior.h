#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct Prior:public T::prior {};
	}
}