#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<Core/mpl/type_traits/first_template.h>
using namespace std;


template<typename T>
struct TypeNameHelper
{
	string operator()()
	{
		return typeid(T).name();
	}
};

template<typename T>
struct TypeNameHelper< const volatile T>
{
	string operator()()
	{
		return  string{}+ typeid(T).name() + " const volatile";
	}
};

template<typename T>
struct TypeNameHelper< const  T>
{
	string operator()()
	{
		return  string{}+typeid(T).name() + " const";
	}
};

template<typename T>
struct TypeNameHelper<  volatile T>
{
	string operator()()
	{
		return string{}+typeid(T).name() + " volatile";
	}
};

template<typename T>
struct TypeNameHelper< const volatile T&>
{
	string operator()()
	{
		return  string{}+typeid(T).name() + " const volatile &";
	}
};

template<typename T>
struct TypeNameHelper<volatile T&>
{
	string operator()()
	{
		return  string{}+typeid(T).name() + " volatile &";
	}
};

template<typename T>
struct TypeNameHelper<const T&>
{
	string operator()()
	{
		return  string{}+typeid(T).name() + " const &";
	}
};
template<typename T>
struct TypeNameHelper<T&>
{
	string operator()()
	{

		return  string{}+typeid(T).name() + " &";
	}
};


template<typename T>
struct TypeNameHelper< const volatile T&&>
{
	string operator()()
	{
		return  string{}+typeid(T).name() + " const volatile &&";
	}
};

template<typename T>
struct TypeNameHelper<volatile T&&>
{
	string operator()()
	{
		return  string{}+typeid(T).name() + " volatile &&";
	}
};

template<typename T>
struct TypeNameHelper<const T&&>
{
	string operator()()
	{
		return  string{}+typeid(T).name() + " const &&";
	}
};
template<typename T>
struct TypeNameHelper<T&&>
{
	string operator()()
	{
		return  string{}+typeid(T).name() + " &&";
	}
};

//template<typename T>
//struct TypeInnerType
//{
//	typedef T trait;
//	typedef T type;
//};
//
//template<typename Trait, typename T>
//struct TypeInnerType< Trait<T> >
//{
//	typedef 
//};


template<typename T>
struct TypeName
{
	void operator()()
	{
		cout<<"      "<< left<<setw(40) <<TypeNameHelper<typename FirstTemplateType<T>::type >{}()<<" ==> " << TypeNameHelper<typename T::type >{}() << endl;
	}
};
