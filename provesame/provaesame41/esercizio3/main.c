#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include "rectangle.h"
#include <stdbool.h>
#include <stdlib.h>
int main(void) {
	char* s = "prova.txt";
	FILE* f = fopen(s, "rb");
	if (f == NULL) {
		return 0;
	}
	struct rect* r = malloc(1 * sizeof(struct rect));
	rect_load(f, &r);
	return 0;
}