#include "pch.h"
#include "CppUnitTest.h"
#include "../lb6.3.02/lb6.3.02.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6302
{
	TEST_CLASS(UnitTest6302)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int size = 5;
			vector<int> expected = { 1, 2, 3, 4, 5 };

			
			vector<int> result = createArray<int>(size);

			
			Assert::IsTrue(std::equal(result.begin(), result.end(), expected.begin()));
		}

		
		TEST_METHOD(TestReverseArray)
		{
			vector<int> arr = { 1, 2, 3, 4, 5 };
			vector<int> expected = { 5, 4, 3, 2, 1 };

			
			reverseArrayRecursive(arr, 0, arr.size() - 1);

			
			Assert::IsTrue(std::equal(arr.begin(), arr.end(), expected.begin()));
		}

		
		TEST_METHOD(TestPrintArray)
		{
			vector<int> arr = { 1, 2, 3, 4, 5 };
			std::ostringstream output; 

			
			std::streambuf* prevcoutbuf = std::cout.rdbuf(output.rdbuf());

			
			printArrayRecursive(arr, "Array");

			
			std::cout.rdbuf(prevcoutbuf);

			
			Assert::AreEqual(output.str(), std::string("Array:    1   2   3   4   5\n"));
		}
	};
}
