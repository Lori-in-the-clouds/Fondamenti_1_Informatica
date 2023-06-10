#include <stdlib.h>
#include <stdint.h>
uint32_t vector_MCD(const uint32_t* v, size_t n) {
	if (v == NULL) {
		return 0;
	}
 //prendo i divisori di ciascuno
	int div = 1;
	//trovo il valore piu piccolo
	int min = v[0];
	for (int i = 0; i < n; i++) {
		if (min > v[i]) {
			min = v[i];
		}
	}
	int ris = 0;
	while (div <=min) {
		int punto = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] % div == 0) {
				punto++;
			}
		}
		if (punto == n) {
			ris = div;
		}
		div++;
	}
	return ris;
}