#define CTEST_MAIN

#include "ctest.h"
#include "libpwgen/rand_capital_letter.h"
#include "libpwgen/rand_numeral.h"
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
CTEST(rand_numeral, resulting_numeral_1)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_numeral, resulting_numeral_2)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_numeral, resulting_numeral_3)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_numeral, resulting_numeral_4)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_numeral, resulting_numeral_5)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_numeral, resulting_numeral_6)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_numeral, resulting_numeral_7)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_numeral, resulting_numeral_8)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_numeral, resulting_numeral_9)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_numeral, resulting_numeral_10)
{
    bool symbol;
    char ch = rand_numeral();
    if (ch >= 49 && ch <= 57)
        symbol = true;
    ASSERT_TRUE(symbol);
}

