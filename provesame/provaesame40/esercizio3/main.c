#include <stdint.h>
extern void cornice(uint8_t h, uint8_t w);
int main(void) {
	uint8_t h = 3;
	uint8_t w = 5;
	cornice(h, w);
	return 0;
}