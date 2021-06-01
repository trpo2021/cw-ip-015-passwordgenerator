#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <libpwgen/for_parameters.h>
#include <libpwgen/menu.h>


using namespace std;

int main(int argc, char *argv[])
{
    srand(time(NULL));
	bool num_pass=false, num_symbols=false, num_capital=false, num_cursive=false, num_numeral=false, num_special=false;
	bool call_quantity_pass=false, call_quantity_symbols=false;
	bool call_capital=false, call_cursive=false, call_numeral=false, call_special=false, call_menu=false, call_choice=false, call_random=false;
	int quant_pass=0, quant_symbols=0, quant_capital=0, quant_cursive=0, quant_numeral=0, quant_spec=0;
	for (int i=1; i<argc; i++){
		if (strcmp(argv[i], "-h")==0){
			cout <<"Enter:" <<endl <<
			"-p : quantity passwords" <<endl <<
			"-q : quantity symbols in password" <<endl <<
			"-A : capital letter" <<endl <<
			"-a : cursive letter" <<endl <<
			"-N : numeralr" <<endl <<
			"-S : special symbols" <<endl <<
			"-e : exclude characters 'O', 'I', 'o', 'l'" <<endl <<
			"-R : random password" <<endl <<
			"-m : output in menu format" <<endl <<endl <<
			"for example:" <<endl <<
			"Password with a choice symbols:  -p 2 -A 3 -a 0 -N 5 -S 3" <<endl <<
			"Random password: -R -p 5 -q 10";
		}
		if (num_pass) quant_pass=atoi(argv[i]);
		if (num_symbols) quant_symbols=atoi(argv[i]);
		if (num_capital) quant_capital=atoi(argv[i]);
		if (num_cursive) quant_cursive=atoi(argv[i]);
		if (num_numeral) quant_numeral=atoi(argv[i]);
		if (num_special) quant_spec=atoi(argv[i]);
		num_pass=false; num_symbols=false; num_capital=false; num_cursive=false; num_numeral=false; num_special=false;
		if (strcmp(argv[i], "-p")==0){
			call_quantity_pass=true;
			num_pass=true;
		}
		if (strcmp(argv[i], "-q")==0){
			call_quantity_symbols=true;
			num_symbols=true;
		}
		if (strcmp(argv[i], "-A")==0){
			call_capital=true;
			num_capital=true;
		}
		if (strcmp(argv[i], "-a")==0){
			call_cursive=true;
			num_cursive=true;
		}
		if (strcmp(argv[i], "-N")==0){
			call_numeral=true;
			num_numeral=true;
		}
		if (strcmp(argv[i], "-S")==0){
			call_special=true;
			num_special=true;
		}
		if (strcmp(argv[i], "-m")==0)
			call_menu=true;	
		if (strcmp(argv[i], "-e")==0)
			call_choice=true;
		if (strcmp(argv[i], "-R")==0)
			call_random=true;
			
	}
	if (call_quantity_pass && call_capital && call_cursive && call_numeral && call_special){
pass_choice_symbols_for_parameters(quant_pass, quant_capital, quant_cursive, quant_numeral, quant_spec, call_choice);

		}	
	if (call_menu) menu();
	if (call_random && call_quantity_symbols) pass_randoms_symbols_for_parameters (quant_symbols, quant_pass, call_choice);

    return 0;
}
