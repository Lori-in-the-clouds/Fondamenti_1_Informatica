#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
extern void stampa_a(uint8_t n);
int main(void) {
	uint8_t n = 41;
	stampa_a(n);
	return 0;
}