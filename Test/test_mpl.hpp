#include<iostream>
using namespace std;

#include"print_type.h"
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_or.h>
#include<Core/mpl/logic_not.h>
#include<Core/mpl/bool_.h>
using namespace Aurora3D::mpl;

inline void TestMpl()
{
	//test replace_type
	//TypeName<replace_type<const int, int, long>::type>{}();
	//TypeName<replace_type< volatile int, int, long>::type>{}();
	//TypeName<replace_type<const volatile int, int, long>::type>{}();
	//TypeName<replace_type< int&, int, long>::type>{}();
	//TypeName<replace_type<const int&, int, long>::type>{}();
	//TypeName<replace_type<const volatile int&, int, long>::type>{}();
	//TypeName<replace_type<volatile int&, int, long>::type>{}();
	//TypeName<replace_type< int*, int, long>::type>{}();
	//TypeName<replace_type<const int*, int, long>::type>{}();
	//TypeName<replace_type<const volatile int*, int, long>::type>{}();
	//TypeName<replace_type<volatile int*, int, long>::type>{}();
	//TypeName<replace_type<int[10], int, long>::type>{}();
	//TypeName<replace_type<const int[10], int, long>::type>{}();
	//TypeName<replace_type<volatile int[10], int, long>::type>{}();
	//TypeName<replace_type<const volatile int[10], int, long>::type>{}();
	//TypeName<replace_type<int*[10], int, long>::type>{}();
	//TypeName<replace_type<const int*[10], int, long>::type>{}();
	//TypeName<replace_type<volatile int*[10], int, long>::type>{}();
	//TypeName<replace_type<const volatile int*[10], int, long>::type>{}();
	//TypeName<replace_type<int*[10], int*, long>::type>{}();

	cout << "value£º" << Or<False_>::value << endl;
	cout << "value£º" << Or<False_, False_>::value << endl;
	cout << "value£º" << Or<False_, True_>::value << endl;
	cout << "value£º" << Or<False_, False_, False_>::value << endl;
	cout << "value£º" << Or<False_, False_, True_>::value << endl;

	cout << "value£º" << And<True_>::value << endl;
	cout << "value£º" << And<True_, False_>::value << endl;
	cout << "value£º" << And<True_, True_>::value << endl;
	cout << "value£º" << And<False_, True_>::value << endl;
	cout << "value£º" << And<True_, True_, True_>::value << endl;
	cout << "value£º" << And<True_, False_, True_>::value << endl;
}