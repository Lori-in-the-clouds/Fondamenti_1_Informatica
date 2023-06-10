#include <stdint.h>
#include <stdbool.h>
extern bool primigemelli(uint32_t start, uint32_t* x, uint32_t* y);
int main(void) {
	int x = 0;
	uint32_t y = 0;
	uint32_t z = 0;
	primigemelli(x, &y, &z);
	return 0;
}