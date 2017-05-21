#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<bool T>
		struct Bool_
		{
			static constexpr bool value = T;
			typedef Bool_<T> type;
			typedef bool value_type;
			constexpr operator bool() const
			{
				return T;
			}
		};
		typedef Bool_<true>  True_;
		typedef Bool_<false> False_;
	}
}