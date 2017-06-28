#pragma once
namespace Aurora3D
{
	namespace mpl
	{
		template<bool B, typename T> struct EnableIf {  };
		template<typename T> struct EnableIf<true,T> { typedef T type; };

		template<bool B, typename T> struct DisableIf {};
		template<typename T> struct DisableIf<false, T> { typedef T type; };

		template<bool B,typename T> 
		using EnableIf_t = typename EnableIf<B, T>::type;

		template<bool B, typename T>
		using DisableIf_t = typename DisableIf<B, T>::type;
	}
}