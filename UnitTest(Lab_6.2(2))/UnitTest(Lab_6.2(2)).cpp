#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2(2)/Lab_6.2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab622
{
	TEST_CLASS(UnitTestLab622)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int masuv_b[20] = { 6, 8, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
			start(masuv_b, 20, 0, masuv_b[0], 0, 1);
			Assert::AreEqual(masuv_b[0], 4);
		}
		TEST_METHOD(TestMethod2)
		{
			int masuv_b[20] = { 6, 8, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
			start(masuv_b, 20, 0, masuv_b[0], 0, 1);
			Assert::AreEqual(masuv_b[3], 6);
		}
	};
}
