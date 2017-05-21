#pragma once

template<typename T>
struct add_const_ref 
{
	typedef const T& type;
};

template<typename T>
struct add_const_ref<T&>
{
	typedef T type;
};