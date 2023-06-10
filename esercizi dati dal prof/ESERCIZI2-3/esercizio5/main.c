#include <stdlib.h>
#include <stdint.h>
#include "libreria.h"
int main(void) {
	size_t n = 6;
	uint32_t* v = malloc(6 * sizeof(uint32_t));
	v[0] = 3;
	v[1] = 87;
	v[2] = 5;
	v[3] = 7;
	v[4] = 12;
	v[5] = 9;
	uint32_t* somme = somme_2a2(v, n);
	free(v);
	free(somme);
	return 0;
}