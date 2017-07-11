#pragma once

//vector operation forward declare
#include<Core/mpl/logic_less.h>
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_not_equal.h>
#include<Core/mpl/next.h>
#include<Core/mpl/container/vector_.h>
#include<Core/mpl/container/deref.h>
#include<Core/mpl/mata_function/placeholder.h>
#include<Core/mpl/mata_function/apply.h>

namespace Aurora3D
{
	namespace mpl
	{
		//depends on Vector_
		template<typename... Args> struct Set_:public Vector_<Args...>{};

		// while( It != End && *It < U ) It = ++It;
		template<typename U, typename It, typename End, typename Cmp,
			bool Condition = And< NotEqual<It, End>,
			CallApply<Cmp, U, Deref_t<It> > >::value >
		struct BinarySearch :public BinarySearch<U,
			typename Next<It>::next, End, Cmp>
		{};

		//It == End or *It >=U , return It
		template<typename U, typename It, typename End, typename Cmp>
		struct BinarySearch<U, It, End, Cmp, false>
		{
			typedef It type;
		};


		template<typename Begin, typename End, typename T, typename Cmp = AddApply<Less>>
		struct LowerBound
		{

		};


		template<typename Begin, typename End, typename T, typename Cmp = AddApply<Less>>
		struct UpperBound
		{

		};



		//binary search and insert
		template<typename S, typename U, typename Cmp = AddApply<Less> > 
		struct SetInsert 
		{
			typedef typename BinarySearch<U, Begin_t<S>, End_t<S>, Cmp>::type pos;

		};

		//binary search 



	}
}