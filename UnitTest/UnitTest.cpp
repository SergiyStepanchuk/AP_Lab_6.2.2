#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(met_do_stuff)
		{
			int mass[5] = { 1, 2, 2, 2, 1 };
			Assert::AreEqual(do_stuff(mass, 5, 0, 0), 2.);
		}
	};
}
