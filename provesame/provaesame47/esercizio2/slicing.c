#include <stdlib.h>
int* slicing(const int* v, size_t* n, size_t start, size_t end, int step) {
	int m = 0;
	int j = 0;
	if (step < 0) {
		for (size_t i = end; i >= start; i = i + step) {
			m++;
		}
		int* ris = malloc(m * sizeof(int));
		for (size_t i = end; i >= start; i = i + step) {
			ris[j] = v[i];
			j++;
		}
		*n = m;
		return ris;
	}
	else {



		for (size_t i = start; i <= end; i = i + step) {
			m++;
		}
		int* ris = malloc(m * sizeof(int));
		for (size_t i = start; i <= end; i = i + step) {
			ris[j] = v[i];
			j++;
		}
		*n = m;
		return ris;
	}
	
}