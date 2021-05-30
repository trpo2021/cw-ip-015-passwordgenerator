#include "rand_capital_letter_exclude.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char rand_capital_letter_exclude() {
	char rand_symbol = rand() % 25 + 65;
	while (rand_symbol == 'O' || rand_symbol == 'I') rand_symbol = rand() % 25 + 65;
	return rand_symbol;
}
