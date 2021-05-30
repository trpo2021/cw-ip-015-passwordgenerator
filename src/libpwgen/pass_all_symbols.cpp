#include "pass_all_symbols.h"
#include "rand_capital_letter.h"
#include "rand_capital_letter_exclude.h"
#include "rand_cursive_letter.h"
#include "rand_cursive_letter_exclude.h"
#include "rand_numeral.h"
#include "rand_special_symbols.h"
#include "requests_for_user.h"
#include "random_character_password.h"
#include "print_pass.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void pass_all_symbols() {
	system("cls");
	cout << "Password with all characters:" << endl;
	int choice = exclude_pass_symbols();
	int quantity_pass_symbols = query_quantity_pass_symbols(choice);
	char *password = new char[quantity_pass_symbols];
	int quantity_pass =query_quantity_pass();
	for (int i = 0; i < quantity_pass; i++) {
		if (choice == 2) password[0] = rand_capital_letter();
		if (choice == 1) password[0] = rand_capital_letter_exclude();
		if (choice == 2) password[1] = rand_cursive_letter();
		if (choice == 1) password[1] = rand_cursive_letter_exclude();
		password[2] = rand_numeral();
		password[3] = rand_special_symbols();
		int marker = 4;
		fill_rand_symbols(password, marker, choice, quantity_pass_symbols);
		for (int i = 0; i < quantity_pass_symbols; i++) {
			swap(password[i], password[rand() % quantity_pass_symbols]);
		}
		print_pass(password, quantity_pass_symbols);
	}
}
