#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
char* somma_stringhe(const char* a, const char* b) {
	if (a == NULL || b == NULL) {
		return NULL;
	}
	size_t contatore = 0;
	unsigned long long  c = atoll(a);
	unsigned long long  d = atoll(b);
	if (c == 0 && d == 0) {
		char c = 48;
		return c;
	}
	unsigned long long somma = c + d;
	unsigned long long sacrifice = somma;
	//conto le cifre 
	while (sacrifice != 0) {
		sacrifice = sacrifice / 10;
		contatore++;
	}
	//le metto dentro la stringa 
	int n = contatore-1;
	char* ris = malloc(1 * sizeof(char));
	int r = 1;
	for (size_t i = 0; i < contatore; i++) {
		long long pov = pow(10, n);
		ris[i] = ((somma / pov) % 10)+48;
		r++;
		ris = realloc(ris, r * sizeof(char));
		n--;
	}
	ris[r-1] = '\0';
	
	return ris;
}