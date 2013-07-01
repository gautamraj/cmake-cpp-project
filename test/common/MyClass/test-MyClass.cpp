#include <cmath>
#include <common/MyClass/MyClass.h>
#include "test.h"

float sinc(float f)
{
    if (f==0) return 1;
    return sin(M_PI*f) / (M_PI*f);
}

////////////////////////////////////////
BOOST_AUTO_TEST_SUITE(MyClass_Testing);
////////////////////////////////////////


////////////////////////////////////////
BOOST_AUTO_TEST_CASE(SincFunctionZeroVal)
{
    BOOST_REQUIRE(sinc(0)==1);
    BOOST_REQUIRE(abs(sinc(1)) < 1e-8);
}

////////////////////////////////////////
BOOST_AUTO_TEST_CASE(SincFunctionZeros)
{
    for (int i=-20; i<=20; i++)
    {
        if (i==0) continue;
        BOOST_REQUIRE(abs(sinc(i)) < 1e-8);
    }
}

////////////////////////////////////////
BOOST_AUTO_TEST_CASE(HelloWorld)
{
    MyClass A;
    std::string tmp1 = A.Hello();
    std::string tmp2 = "Hello World!";
    BOOST_REQUIRE(tmp1 == tmp2);
}


////////////////////////////////////////
BOOST_AUTO_TEST_SUITE_END();
////////////////////////////////////////
