#pragma once
namespace Aurora3D
{
	namespace mpl
	{
		template<bool B, typename T1, typename T2> struct If:public T1{};
		template<typename T1, typename T2> struct If<false,T1, T2 >:public T2{};
		template<typename C,typename T1,typename T2 > struct TypeIf :public If<C::value, T1, T2>{};
	}
}