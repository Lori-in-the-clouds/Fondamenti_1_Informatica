#include <stdlib.h>
int* rimuovi_multipli(const int* v, size_t size, size_t* newsize) {
	int somma = 0;
	int t = 0;
	int* ris = malloc(1 * sizeof(int));
	int n = 1;

	for (int i = 0; i < size; i++) {
		int contatore = 0;
		for (int j = 0; j < size; j++) {

			if (i == j) {
				continue;
			}
			somma = v[i] % v[j];
			if (somma != 0) {
				contatore++;
			}

		}
		if (contatore == size - 1) {
			ris[t] = v[i],
			n++;
			t++;
			ris = realloc(ris, n * sizeof(int));
		}

	}
	return ris;
}