#include <stdlib.h>
#include "paridispari.h"
void paridispari(int* v, size_t n) {
	if (v == NULL || n == 0) {
		return;
	}
	int s = 1;
	int* ris = malloc(s * sizeof(int));
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0) {
			ris[j] = v[i];
			j++;
			s++; 
			ris = realloc(ris, n * sizeof(int));
		}
	}
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 != 0) {
			ris[j] = v[i];
			j++;
			s++;
			ris = realloc(ris, n * sizeof(int));
		}
	}
	for (int i = 0; i < n; i++) {
		v[i] = ris[i];
	}
	free(ris);
}