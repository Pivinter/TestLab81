#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab81/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81u1
{
	TEST_CLASS(UnitTest81u1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
