#include "query_question_what_pass.h"
#include <iostream>

using namespace std;

int query_question_what_pass()
{
    int choice;
    cout << "Select the option you want:" << endl
         << "1. Password with a choice of symbols" << endl
         << "2. Password with all symbols" << endl
         << "3. Password with random characters." << endl
         << "Enter the item number: ";
    cin >> choice;
    return choice;
}
