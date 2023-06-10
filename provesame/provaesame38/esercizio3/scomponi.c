#include <stdlib.h>
#include <stdio.h>
void stampa_scomposizione(unsigned int n) {
	if (n == 0) {
		int e = 0;
		printf("%i", e);
		return;
	}
	if (n ==1) {
		int p = 1;
		printf("%i", 1);
		return;
	}
	int s = 2;
	int* ris = malloc(2 * sizeof(int));
	int div = 2;
	//trovo i fattori primi
	ris[0] = 1;
	int i = 1;
	while (n!=1) {
		if (n % div == 0) {
			ris[i] = div;
			n = n / div;
			i++;
			s++;
			ris = realloc(ris, s* sizeof(int));

		}
		else {
			div++;
		}
		
	}
	//printiamo
	int contatore = 1;
	int m = 0;
	for (int i = 1; i < s-1; i++) {
		if (ris[i] == ris[i + 1]) {
			while (ris[i] == ris[i + 1]) {
				contatore++;
				i++;
			}
		}
		if (contatore > 1) {
			
			printf("%i%c%i", ris[i], '^', contatore);
			if (i != s - 2) {
				printf("%s", " * ");
			}			
			contatore = 1;
			m++;
		}
		else {
			printf("%i", ris[i]);
			if (i != s - 2) {
				printf("%s", " * ");
			}
			m++;
		}
	}
	free(ris);
}