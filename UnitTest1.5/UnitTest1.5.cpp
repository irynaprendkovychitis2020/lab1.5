#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.5/Pair.h"
#include "../lab 1.5/Pair.cpp"
#define TESTING

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair c;
			c.SetA(2);
			int test = c.GetA();
			Assert::AreEqual(test, 2);

		}
	};
}
