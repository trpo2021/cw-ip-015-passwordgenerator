#include <cstdlib>
#include <ctime>
#include <iostream>
#include <libpwgen/print_pass.h>
#include <libpwgen/rand_capital_letter.h>
#include <libpwgen/rand_capital_letter_exclude.h>
#include <libpwgen/rand_cursive_letter.h>
#include <libpwgen/rand_cursive_letter_exclude.h>
#include <libpwgen/rand_numeral.h>
#include <libpwgen/rand_special_symbols.h>
#include <libpwgen/random_character_password.h>
#include <libpwgen/requests_for_user.h>

using namespace std;
const char SPECIALS_SYMBOLS[23]
        = {'!', '?', ',', '.', '+', ':', '=', ';', '-', '/', '"',
           '$', '%', '^', '&', ')', '(', '@', '[', ']', '<', '>'};
int choice, quantity_pass, quantity_pass_symbols;

int main()
{
    srand(time(0));
    pass_randoms_symbols();

    return 0;
}
