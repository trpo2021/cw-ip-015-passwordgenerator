#pragma once
void pass_choice_symbols_for_parameters(
        int quantity_pass_symbols,
        int quantity_rand_capital_letter,
        int quantity_rand_cursive_letter,
        int quantity_rand_numeral,
        int quantity_rand_special_symbols,
        bool choice);
void fill_rand_symbols_for_parameters(
        char password[], int marker, int quantity_pass_symbols, bool choice);
void pass_randoms_symbols_for_parameters(
        int quantity_pass_symbols, int quantity_pass, bool choice);
