#include <stdlib.h>
#include "slicing.h"
int main(void) {
	int* v = malloc(8 * sizeof(int));
	for (int i = 0; i < 8; i++) {
		v[i] = i + 1;
	}
	size_t start = 2;
	size_t end = 6;
	int step = -1;
	size_t* n = 8;
	slicing(v, &n, start, end, step);

	return 0;
}