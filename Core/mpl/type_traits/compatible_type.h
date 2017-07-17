#pragma once

#include<Core/mpl/type_traits/decay.h>
#include<Core/mpl/type_traits/declval.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename First, typename... Others>
		struct CompatibleType :public CompatibleType<First, typename CompatibleType<Others...>::type> {};

		template<typename T>
		struct CompatibleType<T> { typedef Decay_t<T> type; };

		template<typename T1, typename T2>
		struct CompatibleType<T1,T2>
		{
			typedef Decay_t<decltype(false ? Declval<T1>() : Declval<T2>())> type;
		};

		template<typename First, typename... Others>
		using CompatibleTypeT = typename CompatibleType<First, Others...>::type;
	}
}