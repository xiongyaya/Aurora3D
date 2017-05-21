#pragma once
#include"int.h"

namespace Aurora3D
{
	namespace mpl
	{
		/*template<typename BinaryOp, typename First, typename Second, typename... Args>
		struct Operation{};

		template<typename BinaryOp, typename First, typename Second,
			typename Third, typename... Other>
		struct Operation<BinaryOp, First, Second,Third, Other...>:
			public Operation<BinaryOp, typename BinaryOp<First,Second>::type, Third, Other...>
		{};

		template<typename BinaryOp, typename First,typename Second>
		struct Operation<BinaryOp, First, Second>:
			public BinaryOp<First, Second>
		{};*/

		//template<typename T1,typename T2>
		//struct Divide2: public Int_<T1::value / T2::value>{};

	}
}