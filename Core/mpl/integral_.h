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
			typedef Integral_<T, N + 1> next;
			typedef Integral_<T, N - 1> prior;
			constexpr operator T() const
			{
				return N;
			}
		};
	}
}