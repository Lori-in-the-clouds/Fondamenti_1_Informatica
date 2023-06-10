#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
extern void scrivi_v(FILE* f, uint8_t n);
int main(void) {
	char* s = "prova.txt";
	FILE* f = fopen(s, "r");
	
	uint8_t n = 1;
	scrivi_v(f, n);
}