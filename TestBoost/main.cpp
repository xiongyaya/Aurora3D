#include<iostream>
#include<string>

using namespace std;

#include<boost/mpl/lambda.hpp>
//
//namespace boost {
//	namespace mpl {
//
//		template<
//			typename T = na
//			, typename Tag = void_
//
//		>
//			struct lambda;
//
//	}
//}
//
//template< typename T, typename fallback_ = boost::mpl::bool_<true> >
//struct has_type
//{ 
//	struct gcc_3_2_wknd
//	{ 
//		template< typename U > 
//		static boost::mpl::aux::yes_tag 
//			test(boost::mpl::aux::type_wrapper<U> const volatile*,
//				 boost::mpl::aux::type_wrapper<typename U::type>* = 0);
//		static boost::mpl::aux::no_tag test(...);
//	}; 
//	typedef boost::mpl::aux::type_wrapper<T> t_;
//	static const bool value = sizeof(gcc_3_2_wknd::test(static_cast<t_*>(0))) == sizeof(boost::mpl::aux::yes_tag);
//	typedef boost::mpl::bool_<value> type;
//};

template<typename T>
struct HasInnerType
{
	struct HasResult { char pad[2]; };
	struct NoResult {
		char pad[1];
	};

	template<typename U>
	static  HasResult Test(U *t1, typename U::type *t2= 0);
	static  NoResult Test(...);
	static constexpr bool value = sizeof(Test(static_cast<T*>(0))) == sizeof(HasResult);
};

struct HasInnerType1 { typedef int type; };
struct NoInnerType1{};

int main()
{
	cout << "" << endl;
	cout << HasInnerType<HasInnerType1>::value << endl;
	cout << HasInnerType<NoInnerType1>::value << endl;

	getchar();
	return 0;
}