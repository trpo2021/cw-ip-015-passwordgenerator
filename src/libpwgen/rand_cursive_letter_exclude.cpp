#include "rand_cursive_letter_exclude.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

char rand_cursive_letter_exclude()
{
    char rand_symbol = rand() % 25 + 97;
    while (rand_symbol == 'o' || rand_symbol == 'l')
        rand_symbol = rand() % 25 + 97;
    return rand_symbol;
}
