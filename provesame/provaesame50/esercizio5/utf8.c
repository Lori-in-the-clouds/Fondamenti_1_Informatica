#include <stdlib.h>
#include <stdint.h>
size_t utf8_encode(uint32_t codepoint, uint8_t seq[4]) {
	if (codepoint > 0x10FFFF) {
		return 0;
	}
	size_t nbyte = 0;
	size_t nbit = 7;
	
	if (codepoint > 0x007F) {
		nbyte++;
		nbit += 4;
	}
	if (codepoint > 0x07FF) {
		nbyte++;
		nbit += 5;
	}
	if (codepoint > 0xFFFF) {
		nbyte++;
		nbit += 5;
	}
	
	

}