#pragma once
namespace Aurora3D
{
	namespace mpl
	{
		template<typename T, T N>
		struct Integral_
		{
			static constexpr T value = N;
			typedef Integral_<T, N> type;
			typedef T value_type;
			constexpr operator T() const
			{
				return N;
			}
		};
	}
}