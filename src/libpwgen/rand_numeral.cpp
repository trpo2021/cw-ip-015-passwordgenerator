#include "rand_numeral.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

char rand_numeral() {
	char rand_symbol = rand() % 9 + 49;
	return rand_symbol;
}
