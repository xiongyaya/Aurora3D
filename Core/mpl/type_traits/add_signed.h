#pragma once

#include<core/preprocessor/seq_compose.h>
#include<core/preprocessor/seq_foreach.h>
#include<core/preprocessor/sign.h>
#include<Core/mpl/type_traits/underlying_type.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename T> struct AddSignedHelper { typedef T type; };
#define ADD_SIGNED(NonsignType)  \
			template<> struct AddSignedHelper<unsigned NonsignType>{ typedef signed NonsignType type;  };
			A3D_PP_FOREACH(ADD_SIGNED, A3D_PP_COMPOSE((char, short, int, long, long long), (A3D_PP_NULL, const, volatile, const volatile)));
#undef  ADD_SIGNED
		}
		template<typename T> struct AddSigned :public detail::AddSignedHelper<typename UnderlyingType<T>::type> {};
		template<typename T> using AddSigned_t = typename AddSigned<T>::type;
	}
}