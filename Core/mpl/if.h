#pragma once
namespace Aurora3D
{
	namespace mpl
	{
		template<bool B, typename T1, typename T2>
		struct BoolIf :public T1 { typedef T1 type; };
		template<typename T1, typename T2>
		struct BoolIf<false, T1, T2> :public T2 { typedef T2 type; };

		template<typename C, typename T1, typename T2>
		struct If :public BoolIf<C::value, T1, T2> {};
	}
}