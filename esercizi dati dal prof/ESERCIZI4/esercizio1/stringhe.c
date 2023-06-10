#include <stdlib.h>
char* concatena(const char* prima, const char* seconda) {
	//conta i caratteri del primo
	size_t num1 = 0;
	for (int i = 0; prima[i] != 0; i++) {
		num1 += 1;
    }
	//conta i caratteri del secondo
	size_t num2 = 0;
	for (int i = 0; seconda[i] != 0; i++) {
		num2 += 1;
	}
	//spazio totale 
	size_t tot = num1 + num2;
	char* ris = malloc(tot+1);

	//copia dentro il primo 
	int j;
	for ( j = 0; j < num1; j++) {
		ris[j] = prima[j];
	}
	//copia dentro il secondo 
	for (int i =0; i < num2; i++) {
		ris[i+j] = seconda[i];
	}
	ris[tot] = 0;
	return ris;



}