#include <stdint.h>
extern void hexstring2vec(const char* s, uint8_t out[8]);
int main(void) {
	char* s = "12AB34CD56EF7890";
	uint8_t out[8] = { 0,0,0,0,0,0,0,0 };
	hexstring2vec(s, out);

		
	return 0;
}