#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "libri.h";
int main(void) {
	
	uint16_t anni_rista[] = { 2001, 2002, 0 };
	struct libro p = { "Geometria", anni_rista };
	FILE* f = fopen("text.txt", "wb");
	if (f == NULL) {
		return NULL;
	}
	libro_scrivi(&p, f);
	fclose(f);
	return 0;
}
