#include "libreria.h";
#include <stdint.h>
#include <stdlib.h>
int main(void) {
	size_t n = 4;
	uint32_t * v = malloc(n * sizeof(uint32_t));
	for (int i = 0; i < n; i++) {
		v[i] = 0;
	}
	iota(*v, n);
	
	free(v);
	return 0;

}