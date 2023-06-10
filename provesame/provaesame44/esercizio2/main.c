#include <stdlib.h>
#include <stdint.h>
extern uint32_t vector_MCD(const uint32_t* v, size_t n);
int main(void) {
	uint32_t* p = malloc(3 * sizeof(uint32_t));
	p[0] = 60;
	p[1] = 20;
	p[2] = 40;
	//2
	//16
	vector_MCD(p, 3);
	return 0;
}