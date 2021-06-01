#include "for_parameters.h"
#include "print_pass.h"
#include "rand_capital_letter.h"
#include "rand_capital_letter_exclude.h"
#include "rand_cursive_letter.h"
#include "rand_cursive_letter_exclude.h"
#include "rand_numeral.h"
#include "rand_special_symbols.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
void pass_choice_symbols_for_parameters(
        int quantity_pass,
        int quantity_rand_capital_letter,
        int quantity_rand_cursive_letter,
        int quantity_rand_numeral,
        int quantity_rand_special_symbols,
        bool choice)
{
    int quantity_pass_symbols = quantity_rand_capital_letter
            + quantity_rand_cursive_letter + quantity_rand_numeral
            + quantity_rand_special_symbols;
    char* password = new char[quantity_pass_symbols];
    for (int k = 0; k < quantity_pass; k++) {
        int i = 0, j = 0;
        for (; i < quantity_pass_symbols && j < quantity_rand_capital_letter;
             i++, j++) {
            if (choice)
                password[i] = rand_capital_letter_exclude();
            else
                password[i] = rand_capital_letter();
        }
        j = 0;
        for (; i < quantity_pass_symbols && j < quantity_rand_cursive_letter;
             i++, j++) {
            if (choice)
                password[i] = rand_cursive_letter_exclude();
            else
                password[i] = rand_cursive_letter();
        }
        j = 0;
        for (; i < quantity_pass_symbols && j < quantity_rand_numeral; i++, j++)
            password[i] = rand_numeral();
        j = 0;
        for (; i < quantity_pass_symbols && j < quantity_rand_special_symbols;
             i++, j++)
            password[i] = rand_special_symbols();
        for (int k = 0; k < quantity_pass_symbols; k++) {
            std::swap(password[k], password[rand() % quantity_pass_symbols]);
        }
        print_pass(password, quantity_pass_symbols);
    }
}

void fill_rand_symbols_for_parameters(
        char password[], int marker, int quantity_pass_symbols, bool choice)
{
    for (int i; marker < quantity_pass_symbols; marker++) {
        if (choice)
            i = rand() % 4 + 2;
        else
            i = rand() % 4;

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

void pass_randoms_symbols_for_parameters(
        int quantity_pass_symbols, int quantity_pass, bool choice)
{
    char* password = new char[quantity_pass_symbols];
    int marker = 0;
    for (int i = 0; i < quantity_pass; i++) {
        fill_rand_symbols_for_parameters(
                password, marker, quantity_pass_symbols, choice);
        print_pass(password, quantity_pass_symbols);
    }
}
