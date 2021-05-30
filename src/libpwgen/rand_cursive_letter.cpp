#include "rand_cursive_letter.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

char rand_cursive_letter()
{
    char rand_symbol = rand() % 25 + 97;
    return rand_symbol;
}
