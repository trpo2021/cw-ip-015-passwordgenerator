#include <libpwgen/rand_capital_letter.h>
#include <libpwgen/print_pass.h>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
srand(time(0));
int quantity_pass_symbols=10;
char *password=new char[quantity_pass_symbols];
for(int i=0;i<quantity_pass_symbols;i++){
password[i]=rand_capital_letter();
}
print_pass(password,quantity_pass_symbols);
return 0;
}
