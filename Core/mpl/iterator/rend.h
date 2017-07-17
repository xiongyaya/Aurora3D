#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename S> struct Rend :public S::rend {};
	}
}