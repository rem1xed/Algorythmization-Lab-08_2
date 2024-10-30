#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Algorythmization Lab 08_2/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string test1 = "123##aAA #@##", test2 = test1 = "123aaa #@##";

			modif(test1);

			Assert::AreEqual(test1, test2);


		}
	};
}
