#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "shapes.h"
#include <stdlib.h>
int main(void) {
	char* s = "line1.bin";
	FILE* f = fopen(s, "rb");
	if (f == NULL) {
		return NULL;
	}
	struct line* pln = malloc(1 * sizeof(struct line));
	line_load(f, &pln);
	return 0;
}