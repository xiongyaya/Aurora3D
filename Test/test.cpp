#include<iostream>
#include<string>
#include<type_traits>
#include<tuple>
#include<boost/type_traits.hpp>
#include"test_proprecessor.hpp"
#include"test_type_traits.hpp"
#include"test_mpl.hpp"
#include<Core/mpl/ingore_t.h>
#include<Core/mpl/type_traits/has_plus.h>

using namespace std;



class Test
{
public:
	Test operator+(const Test&) {};
	void operator&(int) {};
};


int main()
{
	std::tuple<int>;
	//std::tuple_cat
	//int& a = 1.1;
	//std::is_enum<int>;
	//ProcessTool();
	//TestProprecessor();
	TestTypeTraits();
	std::has_virtual_destructor<int>;
	cout << " + :" << boost::has_plus<Test, Test, int*>::value << endl;
	cout << " - :" << boost::has_minus<Test, std::string, void>::value << endl;
	cout << " & :" << boost::has_bit_and<Test, int>::value << endl;

	using namespace Aurora3D::mpl;
	cout << " value:" << HasPlusOperation<int, int,int>::value << endl;
	
	//std::bool_constant
	//std::underlying_type<int>::type;
	//TestMpl();
	getchar();
	return 0;
}