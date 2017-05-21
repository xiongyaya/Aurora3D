#pragma once
namespace Aurora3D
{
	namespace mpl
	{
		template<int N>
		struct Int_
		{
			static constexpr int value = N;
			typedef Int_<N> type;
			typedef int value_type;
			typedef Int_<N + 1> next;
			typedef Int_<N - 1> prior;
			constexpr operator int() const
			{
				return N;
			}
		};
	}
}