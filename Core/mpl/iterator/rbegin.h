#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename S> struct RBegin :public S::rbegin {};
	}
}