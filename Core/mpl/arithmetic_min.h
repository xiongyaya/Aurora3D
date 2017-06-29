#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/binary_op_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		//for 2 integral type 
		template<typename T1, typename T2, int64 V1 = T1::value, int64 V2 = T2::value>
		struct Min2 :public Int_ <  (V1<V2 ? V1 : V2) >{};
		
		//Lazy
		//for n integral type
		template<typename T1, typename... TS> struct Min
			: public Min2<T1, Min<TS...> > {};
		template<typename T> struct Min<T> :public T {};

		/*template<typename T1, typename... TS> struct MinTest
			:public BinaryOperator<Min2, T1, TS...> {};*/

		//Lazy.
		//for n un-wraped integral type
		template<int64 V1, int64... VS> struct IntMin
			:Min<Int_<V1>, Int_<VS>...> {};

		//mata-fn 
		struct Min_Fn
		{
			template<typename T1,typename... TS>
			struct Apply:public Min<T1,TS...> { };
		};

	}
}