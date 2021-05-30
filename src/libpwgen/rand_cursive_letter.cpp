#include "rand_cursive_letter.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char rand_cursive_letter() {
	char rand_symbol = rand() % 25 + 97;
	return rand_symbol;
}
