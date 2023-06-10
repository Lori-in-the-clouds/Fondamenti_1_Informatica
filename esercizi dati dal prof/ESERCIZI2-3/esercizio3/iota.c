#include <stdint.h>
#include <stdlib.h>
void iota(uint32_t *x, size_t n) {
	uint32_t* nuovo = malloc(n * sizeof(uint32_t));
   for (int i = 0; i < n; i++) {
	     nuovo[i] = i;
		
	}
	

}