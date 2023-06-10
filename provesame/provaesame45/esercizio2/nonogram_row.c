#include <string.h>
#include <stdint.h>
#include <stdlib.h>

uint8_t* nonogram_row(const char* s, size_t n) {
	if (s == NULL) {
		return NULL;
	}
	size_t num = strlen(s);
	size_t cont = 0;
	int m = 0;
	for (int i = 0; i < num; i++) {
		if (s[i] == ' ') {
			cont++;
		}
	}
	uint8_t* ris = malloc(cont * sizeof(uint8_t));
	for (size_t i = 0; i < num; i++) {
		if (s[i] == ' ') {
			size_t cont1 = 0;
			size_t j = i+1;
			while (s[j] == '*') {
				cont1++;
				j++;
			}
			ris[m] = cont1;
			m++;
			

		}

	}
	n = cont;
	return ris;
}