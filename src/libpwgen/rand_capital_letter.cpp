#include "rand_capital_letter.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
char rand_capital_letter()
{
    char rand_symbol = rand() % 25 + 65;
    return rand_symbol;
}
