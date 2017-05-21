#pragma once
#include"bool.h"
#include"if.h"

namespace Aurora3D
{
	namespace mpl
	{
		//lazy or,and,not
		template<typename... Args>
		struct Or
		{
			static constexpr bool value = false;
		};

		template<typename First, typename... Other>
		struct Or<First, Other...> :
			public TypeIf<First, True_, Or<Other...>>::type
		{};


		template<typename... Args>
		struct And
		{
			static constexpr bool value = true;
		};

		template<typename First, typename... Other>
		struct And<First, Other...> :
			public TypeIf<First, And<Other...>, False_>::type
		{};


		template<typename T>
		struct Not : public Bool_< !T::value > {};
	}
}