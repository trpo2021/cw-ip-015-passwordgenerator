#define CTEST_MAIN

#include "ctest.h"
#include "libpwgen/rand_capital_letter.h"
#include "libpwgen/rand_capital_letter_exclude.h"
#include "libpwgen/rand_cursive_letter.h"
#include "libpwgen/rand_cursive_letter_exclude.h"
#include "libpwgen/rand_numeral.h"
#include "libpwgen/rand_special_symbols.h"

using namespace std;
const char SPECIALS_SYMBOLS[23]
        = {'!', '?', ',', '.', '+', ':', '=', ';', '-', '/', '"',
           '$', '%', '^', '&', ')', '(', '@', '[', ']', '<', '>'};
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
CTEST(rand_cursive_letter, result_cursive_1)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter, result_cursive_2)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter, result_cursive_3)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter, result_cursive_4)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter, result_cursive_5)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter, result_cursive_6)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter, result_cursive_7)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter, result_cursive_8)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter, result_cursive_9)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter, result_cursive_10)
{
    bool symbol;
    char ch = rand_cursive_letter();
    if (ch >= 97 && ch <= 122)
        symbol = true;
    ASSERT_TRUE(symbol);
}
CTEST(rand_capital_letter_exclude, check_exception_O_and_I)
{
    bool symbol = true;
    char ch;
    for (int i = 0; i < 1000; i++) {
        ch = rand_capital_letter_exclude();
        if (ch >= 65 && ch <= 90) {
            if (ch == 'O' || ch == 'I') {
                symbol = false;
                break;
            }
        } else {
            symbol = false;
            break;
        }
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_1)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_2)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_3)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_4)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_5)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_6)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_7)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_8)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_9)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_special_symbols, result_symbol_10)
{
    bool symbol;
    char ch = rand_cursive_letter();
    for (int i = 0; i < 23; i++) {
        if (ch == SPECIALS_SYMBOLS[i])
            symbol = true;
    }
    ASSERT_TRUE(symbol);
}
CTEST(rand_cursive_letter_exclude, check_exception_o_and_l_in_cursive_letter)
{
    bool symbol = true;
    char ch;
    for (int i = 0; i < 1000; i++) {
        ch = rand_cursive_letter_exclude();
        if (ch >= 97 && ch <= 122) {
            if (ch == 'o' || ch == 'l') {
                symbol = false;
                break;
            }
        } else {
            symbol = false;
            break;
        }
    }
    ASSERT_TRUE(symbol);
}
