#include "rand_numeral.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

char rand_numeral()
{
    char rand_symbol = rand() % 9 + 49;
    return rand_symbol;
}
