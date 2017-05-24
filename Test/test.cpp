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
#include"test_fwd.h"
#include"test_impl.h"
#include<immintrin.h>

using namespace std;


constexpr __m128 kOneTest = { 1.0f, 1.0f, 1.0f, 1.0f };
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
	//VectorAdd(Vector4{}, Vector4{});
	//ProcessTool();
	//TestProprecessor();
	TestTypeTraits();
	//TestMpl();

	getchar();
	return 0;
}