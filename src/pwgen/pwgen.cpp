#include <cstdlib>
#include <ctime>
#include <iostream>
#include <libpwgen/pass_choice_symbols.h>
#include <libpwgen/print_pass.h>
#include <libpwgen/rand_capital_letter.h>
#include <libpwgen/rand_capital_letter_exclude.h>
#include <libpwgen/rand_cursive_letter.h>
#include <libpwgen/rand_cursive_letter_exclude.h>
#include <libpwgen/rand_numeral.h>
#include <libpwgen/rand_special_symbols.h>
#include <libpwgen/requests_for_user.h>
#include <libpwgen/menu.h>
#include <libpwgen/query_question_what_pass.h>




using namespace std;

int choice, quantity_pass, quantity_pass_symbols;

int main()
{
    srand(time(0));
    menu();

    return 0;
}
