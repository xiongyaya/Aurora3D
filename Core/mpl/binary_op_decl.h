#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//for integral binary operator
		//+,-,*,/,%,|,&,^, >>, << 
		/*template<typename Binary,typename T1, typename... VS>
		struct BinaryOperator :public Binary<T1, BinaryOperator<Binary, TS...>> {};
		template<typename Binary,typename T>
		struct BinaryOperator :public T {};*/
	}
}