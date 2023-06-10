#include <stdlib.h>
int prodotto_altri_due(const int* v, size_t n) {
	if (v == NULL || n==0) {
		return -1;
	}
	int ris = 0;
	int contatore = 0;
	int* giafatti = malloc(n * sizeof(int));
	int s = 0;
	for (int i = 0; i < n; i++) {  // il primo generale per swithare in un altro numero 
		for (int j = i; j < n; j++) { //controllo prodotto diciascuno
			int prodotto = 0;
			if (i == j) {
				continue;
			}
			prodotto = v[i] * v[j];
			for (int m = 0; m < n; m++) {
				if (m == i || m == j) {
					continue;
				}
				//controllo se gli ho gia fatti
				for (int k = 0; k < s; k++) {
					if (v[m] == giafatti[k]) {
						contatore++;
					}
				}
				if (contatore != 0) {
					contatore = 0;
					continue;
				}
				if (v[m] == prodotto) {
					ris++;
					giafatti[s] = v[m];
					s++;
				}
			}

		}
	}
	free(giafatti);
	return ris;
}