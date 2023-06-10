#include <stdlib.h>
extern int* clamped(const int* v, size_t n, int min, int max) {
	if (v == NULL) {
		return NULL;
	}
	if (min > max) {
		return NULL;
	}
	int* ris = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		if (v[i] < min) {
			ris[i] = min;
		}
		if (v[i] >= min && v[i] <= max) {
			ris[i] = v[i];
		}
		if (v[i] > max) {
			ris[i] = max;
		}
		
	}
	return ris;
}
