#pragma once

#include<core/preprocessor/seq_compose.h>
#include<core/preprocessor/seq_foreach.h>
#include<core/preprocessor/sign.h>
#include<core/mpl/bool_.h>
#include<core/type.h>


namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsFunction :public False_ {};

#ifdef A3D_COMPILER_MSVC
		#define IS_FUNCTION(Prefix)                                                                                        \
			template<typename Ret, typename... Args> struct IsFunction<Ret __cdecl(Args...) Prefix> :public True_ {};      \
			template<typename Ret, typename... Args> struct IsFunction<Ret __cdecl(Args..., ...) Prefix> :public True_ {}; \
			template<typename Ret, typename... Args> struct IsFunction<Ret __stdcall(Args...) Prefix> :public True_ {};    \
			template<typename Ret, typename... Args> struct IsFunction<Ret __fastcall(Args...) Prefix> :public True_ {};   \
			template<typename Ret, typename... Args> struct IsFunction<Ret __vectorcall(Args...) Prefix> :public True_ {};      
#else  
		#define IS_FUNCTION(Prefix)                                                                                     \
			template<typename Ret, typename... Args> struct IsFunction< Ret(Args...) Prefix> :public True_ {};          \
			template<typename Ret, typename... Args> struct IsFunction< Ret(Args..., ...) Prefix> :public True_ {};    
#endif
		A3D_PP_FOREACH(IS_FUNCTION, A3D_PP_COMPOSE_EX((const,volatile,const volatile), (&,&&,  A3D_PP_NULL), A3D_PP_NULL, &, &&))
#undef IS_FUNCTION

			template<typename T> using IsFunction_t = typename IsFunction<T>::type;
#define IsFunction_v(T)   IsFunction<T>::value
#define NotFunction_v(T)  (!IsFunction<T>::value)
	} 
}