#pragma once

#include<Core/mpl/int_.h>
namespace Aurora3D
{
	namespace mpl
	{
		//for template mata function
		template<template<typename T, typename... TArgs> typename Fn>
		struct AddApply
		{
			template<typename N, typename... NArgs>
			struct Apply :public Fn<N, NArgs...> 
			{
				//keep original Fn
				typedef Fn<N, NArgs...>  wrapper_type;
			};
		};

		template<typename Fn, typename... Args> 
		struct Apply:public Fn::template Apply<Args...> {};

		template<typename Fn, typename... Args>
		struct CallApply :public Fn::template Apply<Args...> {};

		


		



		template<typename T>
		struct IdentityApply
		{
			template<typename N, typename... NArgs>
			struct Apply
			{
				typedef T type;
			};
		};
	}
}