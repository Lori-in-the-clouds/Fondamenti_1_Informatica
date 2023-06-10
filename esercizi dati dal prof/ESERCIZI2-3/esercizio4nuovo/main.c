#include <stdlib.h>
#include <stdint.h>
#include "libreria.h"
int main(void) {
	int n = 4;
	uint32_t* src = malloc(n * sizeof(uint32_t));
	src[0] = 3;
	src[1] = 2;
	src[2] = 10;
	uint32_t* dst = malloc(n * sizeof(uint32_t));
	for (int i = 0; i < n; i++) {
		dst[i] = 0;
	}

	copy(dst, src, n);
	free(src);
	free(dst);
	return 0;
}
