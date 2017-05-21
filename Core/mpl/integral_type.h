#pragma once
namespace Aurora3D
{
	namespace mpl
	{
		template<typename T, T N>
		struct IntegralType
		{
			static constexpr T value = N;
			typedef IntegralType<T, N> type;
			typedef T value_type;
			typedef IntegralType<T, N + 1> next;
			typedef IntegralType<T, N - 1> prior;
			constexpr operator T() const
			{
				return N;
			}
		};
	}
}