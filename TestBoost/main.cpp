#include<iostream>
#include<string>

using namespace std;

#include<boost/mpl/lambda.hpp>

struct ForwardCategoryTag {};
struct BidirectionalCategoryTag :public ForwardCategoryTag {};
struct RandomCategoryTag :public BidirectionalCategoryTag {};

template<typename T>struct MainTemplate {  };

template<> struct MainTemplate<ForwardCategoryTag> { typedef char type; };
template<> struct MainTemplate<BidirectionalCategoryTag> { typedef short type; };
//template<> struct MainTemplate<RandomCategoryTag> { typedef int type; };

template<const char a[255]>
struct Addr
{
	static constexpr char* value = addr;
};

int main()
{
	typedef typename MainTemplate<ForwardCategoryTag>::type type1;
	typedef typename MainTemplate<BidirectionalCategoryTag>::type type2;
	//typedef typename MainTemplate<RandomCategoryTag>::type type3;
	cout << typeid(type1).name() << endl;
	cout << typeid(type2).name() << endl;
	//cout << typeid(type3).name() << endl;
	char a[5] = "fdas";
	Addr<"fds">;
	getchar();
	return 0;
}