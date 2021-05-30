#include "requests_for_user.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int exclude_pass_symbols()
{
    int choice;
    cout << "Exclude similar characters?" << endl
         << "1. Yes" << endl
         << "2. No" << endl
         << "Enter the item number: ";
    cin >> choice;
    cout << endl;
    while (choice != 1 && choice != 2) {
        cout << "Error, invalid value: ";
        cin >> choice;
        cout << endl;
    }
    return choice;
}
int query_quantity_pass()
{
    int quantity_pass;
    cout << "Number of passwords: ";
    cin >> quantity_pass;
    cout << endl;
    return quantity_pass;
}
int query_quantity_pass_symbols(int choice)
{
    int quantity_pass_symbols;
    cout << "Number of characters: ";
    cin >> quantity_pass_symbols;
    while (choice == 2 && quantity_pass_symbols < 4) {
        cout << "The minimum number of characters is 4" << endl;
        cout << "Number of characters: ";
        cin >> quantity_pass_symbols;
    }
    return quantity_pass_symbols;
}
