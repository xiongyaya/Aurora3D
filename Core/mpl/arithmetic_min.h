#pragma once

#include<Core/compile.h>
#include<Core/mpl/integral_.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/type_traits/declval.h>
#include<Core/mpl/type_traits/is_value_type_same.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
#if defined(AURORA3D_COMPILER_MSVC)
#pragma warning(push)
			//4018: signed and unsigned not match
#pragma warning(disable:4018)
#endif

			//size_t bool and int mix  compile-time min
			template<typename T1, typename T2> constexpr decltype(false ? Declval<T1>() : Declval<T2>())
				Min2(T1 t1, T2 t2){ return t1 < t2 ? t1 : t2; }

#if defined(AURORA3D_COMPILER_MSVC)
#pragma warning(pop)
#endif

			//for case T1::value_type differ from T2::value_type , 
			//use int as common compatible type(size_t bool and int)
			template<typename T1, typename T2, bool IsValueTypeSame = IsValueTypeSame_v(T1,T2)>  
			struct TypeMin2:public Int_<Min2(T1::value,T2::value)> {};

			//for case T1::value_type same as T2::value_type
			template<typename T1, typename T2> struct TypeMin2<T1, T2, true>
				:public Integral_<typename T1::value_type, Min2(T1::value, T2::value)> {};
		}

		//not-wrap Min< V1, V2, V3,...>
		template<int V1, int... Vs> struct Min :public Int_<detail::Min2(V1, Min<Vs...>::value)> {};
		template<int V1> struct Min<V1> :public Int_<V1> {};

		//wrap type TypeMin< T1<v1>, T2<v2>, T3<v3>, ... > 
		template<typename First, typename... Others> struct TypeMin : public detail::TypeMin2<First, TypeMin<Others...> > {};
		template<typename T> struct TypeMin<T> :public T {};

	}
}