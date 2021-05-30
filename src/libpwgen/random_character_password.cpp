#include "random_character_password.h"
#include "print_pass.h"
#include "rand_capital_letter.h"
#include "rand_capital_letter_exclude.h"
#include "rand_cursive_letter.h"
#include "rand_cursive_letter_exclude.h"
#include "rand_numeral.h"
#include "rand_special_symbols.h"
#include "requests_for_user.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
void fill_rand_symbols(
        char password[], int marker, int choice, int quantity_pass_symbols)
{
    for (int i; marker < quantity_pass_symbols; marker++) {
        if (choice == 2)
            i = rand() % 4;
        if (choice == 1)
            i = rand() % 4 + 2;
        switch (i) {
        case (0):
            password[marker] = rand_capital_letter();
            break;
        case (1):
            password[marker] = rand_cursive_letter();
            break;
        case (2):
            password[marker] = rand_numeral();
            break;
        case (3):
            password[marker] = rand_special_symbols();
            break;
        case (4):
            password[marker] = rand_capital_letter_exclude();
            break;
        case (5):
            password[marker] = rand_cursive_letter_exclude();
            break;
        }
    }
}
void pass_randoms_symbols()
{
    system("cls");
    cout << "Random character password:" << endl;
    int choice = exclude_pass_symbols();
    int quantity_pass_symbols = query_quantity_pass_symbols(choice);
    char* password = new char[quantity_pass_symbols];
    int marker = 0;
    int quantity_pass = query_quantity_pass();
    for (int i = 0; i < quantity_pass; i++) {
        fill_rand_symbols(password, marker, choice, quantity_pass_symbols);
        print_pass(password, quantity_pass_symbols);
    }
}
