#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.string/lab_8.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:


        TEST_METHOD(ChangeTest)
        {
            std::string str1 = "abcaabbccdef";
            std::string str2 = "abcdef";

            Change(str1);
            Assert::AreEqual(string("abcaabbccdef"), str1);

            Change(str2);
            Assert::AreEqual(string("abcdef"), str2);
        }
    };
}
