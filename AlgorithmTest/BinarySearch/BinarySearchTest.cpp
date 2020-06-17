#include "pch.h"
#include "CppUnitTest.h"
#include "../../Algorithm/src/BinarySearch/BinarySearch.h"
#include "../../Algorithm/src/BinarySearch/BinarySearch.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BinarySearch
{
	TEST_CLASS(BinarySearchTest)
	{
	public:

		TEST_METHOD(ReturnCorrectIndex)
		{
			int arr[] = { 1, 2, 34, 64 };

			Assert::AreEqual(2, binarySearch(arr, 4, 34));
		}

		TEST_METHOD(ReturnExceptionIfArrayLengthIsNull)
		{
			int arr[] = {0};
			auto func = [&arr]{ binarySearch(arr, 0, 34); };
			Assert::ExpectException<BinarySearchErrors>(func);
		}
		
		TEST_METHOD(ReturnExceptionIfNotFoundNumbers)
		{
			int arr[] = { 1, 2, 34, 64 };
			auto func = [&arr] { binarySearch(arr, 4, 10); };
			Assert::ExpectException<BinarySearchErrors>(func);
		}
	};
}
