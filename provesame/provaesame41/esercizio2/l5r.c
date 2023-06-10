#include <stdlib.h>
int roll_and_keep(const int* r, size_t x, size_t y) {
	if (r == NULL | x == 0 || y == 0 || y > x) {
		return 0;
	}
	int* ris = malloc(y * sizeof(int));
	int min = 0;
	int s = 0;
	//metto tre maggiori 
	for (int i = 0; i < y; i++) {
		ris[i] = r[i];
	}
	for (int i = y; i < x; i++) {
	//cerco il minore della lista
		
			//cerco il minore 
			min = ris[0];
			s = 0;
			for (int m = 0; m < y; m++) {
				if (ris[m] < min) {
					min = ris[m];
					s = m;
				}
			}
			if (r[i] > min) {
				ris[s] = r[i];
			}
		
		

	}
	int somma = 0;
	for (int i = 0; i < y; i++) {
		somma = somma + ris[i];
	}
	free(ris);
	return somma;
	
}