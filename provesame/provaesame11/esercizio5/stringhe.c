#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char* sostituisci(const char* str, const char* vecchia, const char* nuova) {
	if (str == NULL ||  (vecchia == NULL || nuova == NULL)) {
		return NULL;
	}
	if (str == NULL) {
		char* ris = malloc(1 * sizeof(char));
		return ris;
	}
	int num = strlen(str);
	if (vecchia == NULL) {
		char* ris = malloc((num + 1) * sizeof(char));
		for (int i = 0; i < num; i++) {
			ris[i] = str[i];
		}
		ris[num] = '\0';
		
		return ris;
	}
	int num2 = 0;
	if (nuova == NULL) {
		num2 = 0;
	} else {
		num2 = strlen(nuova);
	}
	int num1 = strlen(vecchia);
	
	int n = 1;
	int controllo = 0;
	char* ris = malloc(1 * sizeof(char));
	int i = 0;
	int clock = 0;
	int m = 0;
	if (nuova == NULL) {


	}
	for ( i = 0; i < num; i++) {
		int r = 0;
		for (int j = i; j < num1 + i; j++) {

			if (str[j] == vecchia[r]) {
				controllo++;
				r++;
			}
			if (controllo == num1) {
				int s = 0;
				int t = m;
				for (m /*=i*/; m < num2 + t; m++) {
					ris[m] = nuova[s];
					n++;
					ris = realloc(ris, n * sizeof(char));
					s++;
				}
				controllo = 0;
				clock = 1;
				i += num1 - 1;

			}

		}
		if (clock == 1) {
			clock--;
			continue;
		}
		controllo = 0;
		ris[m] = str[i];
		m++;
		n++;
		ris = realloc(ris, n * sizeof(char));

	}
	ris[n-1] = '\0';
	
	return ris;
}