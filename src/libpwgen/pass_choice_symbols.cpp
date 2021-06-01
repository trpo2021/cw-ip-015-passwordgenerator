#include "pass_choice_symbols.h"
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

void pass_choice_symbols()
{
    system("clear");
    int quantity_rand_capital_letter, quantity_rand_cursive_letter,
            quantity_rand_numeral, quantity_rand_special_symbols;
    cout << "Password type: with a choice of characters" << endl;
    cout << "Number of capital letters: ";
    cin >> quantity_rand_capital_letter;
    cout << "Number of cursive letters: ";
    cin >> quantity_rand_cursive_letter;
    cout << "Number of digits: ";
    cin >> quantity_rand_numeral;
    cout << "Number of special symbols: ";
    cin >> quantity_rand_special_symbols;
    int quantity_pass_symbols = quantity_rand_capital_letter
            + quantity_rand_cursive_letter + quantity_rand_numeral
            + quantity_rand_special_symbols;
    char* password = new char[quantity_pass_symbols];
    int quantity_pass = query_quantity_pass();
    int choice = exclude_pass_symbols();
    for (int k = 0; k < quantity_pass; k++) {
        int i = 0, j = 0;
        for (; i < quantity_pass_symbols && j < quantity_rand_capital_letter;
             i++, j++) {
            if (choice == 2)
                password[i] = rand_capital_letter();
            if (choice == 1)
                password[i] = rand_capital_letter_exclude();
        }
        j = 0;
        for (; i < quantity_pass_symbols && j < quantity_rand_cursive_letter;
             i++, j++) {
            if (choice == 2)
                password[i] = rand_cursive_letter();
            if (choice == 1)
                password[i] = rand_cursive_letter_exclude();
        }
        j = 0;
        for (; i < quantity_pass_symbols && j < quantity_rand_numeral; i++, j++)
            password[i] = rand_numeral();
        j = 0;
        for (; i < quantity_pass_symbols && j < quantity_rand_special_symbols;
             i++, j++)
            password[i] = rand_special_symbols();
        for (int k = 0; k < quantity_pass_symbols; k++) {
            swap(password[k], password[rand() % quantity_pass_symbols]);
        }
        print_pass(password, quantity_pass_symbols);
    }



    delete [] password;
    password = NULL;
}
