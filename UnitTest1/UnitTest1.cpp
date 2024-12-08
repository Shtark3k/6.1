#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1ForAndri/6.1ite.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestIteraction
{
	TEST_CLASS(UnitTestIteraction)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int c[n] = { 4, 12, -2, 1, -7 };
			int expectation = CountElements(c, n);
			int actual = 4;
			Assert::AreEqual(expectation, actual);
		}
	};
}
