#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.5/Lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int n = 2;
			
			int result = CountBinaryStrings(n, 1, depth);
			Assert::AreEqual(result, 3);
		}
		TEST_METHOD(TestMethod2)
		{
			int depth = 0;
			int n = 4;

			int result = CountBinaryStrings(n, 1, depth);
			Assert::AreEqual(result, 8);
		}
	};
}
