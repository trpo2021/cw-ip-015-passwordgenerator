#include <libpwgen/rand_capital_letter.h>
#include <libpwgen/print_pass.h>
#include <iostream>
#include <ctime>
#include <stdlib>

using namespace std;

int quantity_pass_symbols;
int main() {
srand(time(0));
char password[10];
quantity_pass_symbols=10;
for(int i=0;i<10;i++)password[i]=rand_capital_letter();
print_pass(password);
return 0;
