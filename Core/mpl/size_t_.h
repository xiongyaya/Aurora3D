#pragma once
namespace Aurora3D
{
	namespace mpl
	{
		template<int N>
		struct Sizet_
		{
			static constexpr size_t value = N;
			typedef Sizet_<N> type;
			typedef size_t value_type;
			typedef Sizet_<N + 1> next;
			typedef Sizet_<N - 1> prior;
			constexpr operator size_t() const
			{
				return N;
			}
		};
	}
}