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
	void print() { cout << " type: " << TypeNameHelper<decltype(*this)>{}() << endl;; }
	Test operator+(int) { return Test{}; };
	
	void operator&(int) { Test{}; };
};
static Test operator+(Test, Test) { Test{}; };

int main()
{
	//ProcessTool();
	//TestProprecessor();
	TestTypeTraits();
	//TestMpl();

	getchar();
	return 0;
}