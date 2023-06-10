#include "libreria.h";
#include <stdlib.h>
int main(void) {
	const char* frase = { " Questa e' una stringa lunga 45 caratteri" };
	const char* frase1 = {" 1 2 3 a b c"};
	const char* frase2 = { "1 2 3 a b c" };
	const char* frase3 = { "Questa e' una stringa lunga 45 caratteri" };
	const char* frase4 = { "   " };
	const char* frase5 = { "     ciao mi chiamo lorenzo di maio e abito a modena      ciao cio    ciao    ciao    caio " };
	conta_parole(frase);
	conta_parole(frase1);
	conta_parole(frase2);
	conta_parole(frase3);
	conta_parole(frase4);
	conta_parole(frase5);

	
	return 0;
}