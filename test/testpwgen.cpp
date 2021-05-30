#define CTEST_MAIN

#include "ctest.h"
#include "libpwgen/rand_capital_letter.h"

using namespace std;
int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(rand_capital_letter, value_1)
{
    bool symbol;
    char ch = rand_capital_letter();
    if (ch >= 65 && ch <= 90)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_capital_letter, value_2)
{
    bool symbol;
    char ch = rand_capital_letter();
    if (ch >= 65 && ch <= 90)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_capital_letter, value_3)
{
    bool symbol;
    char ch = rand_capital_letter();
    if (ch >= 65 && ch <= 90)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_capital_letter, value_4)
{
    bool symbol;
    char ch = rand_capital_letter();
    if (ch >= 65 && ch <= 90)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_capital_letter, value_5)
{
    bool symbol;
    char ch = rand_capital_letter();
    if (ch >= 65 && ch <= 90)
        symbol = true;
    ASSERT_TRUE(symbol);
}
