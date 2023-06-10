#include <stdint.h>
#include <stdlib.h>
#include "utf8.h"
int main(void) {
	uint32_t codepoint = "20AC";
	uint8_t seq = malloc(4 * sizeof(uint8_t));
	utf8_encode(codepoint, &seq);
	return 0;

}