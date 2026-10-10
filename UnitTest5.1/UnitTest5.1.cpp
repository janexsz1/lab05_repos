

#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
    TEST_CLASS(UnitTest51)
    {
    public:

        TEST_METHOD(TestFunctionK)
        {
            double expected = std::sin(2.0) / 9.0
                + std::cos(3.0) / 4.0;

            double actual = k(2.0, 3.0);

            Assert::AreEqual(expected, actual, 0.000001);
        }
    };
}

