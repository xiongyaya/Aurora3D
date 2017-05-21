#pragma once
#include"bool.h"

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T1,typename T2>
		struct Equal:
			public Bool_< T1::value == T2::value>
		{};

		template<typename T1, typename T2>
		struct NotEqual :
			public Bool_< T1::value != T2::value>
		{};

		template<typename T1, typename T2>
		struct Greater :
			public Bool_< T1::value > T2::value >
		{};

		template<typename T1, typename T2>
		struct GreaterEqual :
			public Bool_< T1::value >= T2::value>
		{};

		template<typename T1, typename T2>
		struct Less :
			public Bool_< T1::value < T2::value>
		{};

		template<typename T1, typename T2>
		struct LessEqual :
			public Bool_< T1::value <= T2::value>
		{};
	}
}