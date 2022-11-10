#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab81/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest83u
{
	TEST_CLASS(UnitTest83u)
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
