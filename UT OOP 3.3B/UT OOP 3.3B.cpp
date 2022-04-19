#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 3.3B/FuzzyNumber.cpp"
#include "../OOP 3.3B/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest33B
{
	TEST_CLASS(Labtest33B)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber V(4, 1, 7), L(6, 3, 9);
			FuzzyNumber C = V + L;
			Assert::AreEqual(C.get_x(), 10.0);
		}

		TEST_METHOD(TestMethod2)
		{
			Triad K(3.5, -9.4, 5.6), F(3.6, -9.3, 5.7);
			Assert::AreEqual(K > F, false);
		}
	};
}
