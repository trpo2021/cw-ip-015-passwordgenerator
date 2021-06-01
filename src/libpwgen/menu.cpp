#include "libpwgen/menu.h"
#include "libpwgen/pass_all_symbols.h"
#include "libpwgen/pass_choice_symbols.h"
#include "libpwgen/query_question_what_pass.h"
#include "libpwgen/random_character_password.h"
#include <iostream>

using namespace std;

void menu()
{
    int choice = 0;
    while (choice == 0) {
        choice = query_question_what_pass();
        switch (choice) {
        case (1):
            pass_choice_symbols();
            break;
        case (2):
            pass_all_symbols();
            break;
        case (3):
            pass_randoms_symbols();
            break;
        default:
            choice = 0;
            system("clear");
            cout << "Invalid value entered, please try again!" << endl;
            break;
        }
    }
}
