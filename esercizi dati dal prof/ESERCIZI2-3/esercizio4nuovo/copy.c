#include <stdlib.h>
#include <stdint.h>

void copy(uint32_t* dst, uint32_t* src, size_t n) {
	for (int i = 0; i < n; i++) {
		dst[i] = src[i];
	}
}