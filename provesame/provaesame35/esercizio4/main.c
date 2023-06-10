#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "shapes.h"
int main(void) {
	FILE* f = fopen("prova.txt", "r");
	if (f == NULL) {
		return NULL;
	}
	struct rect p;
	p.x = 0;
	p.y = 0;
	p.height = 0;
	p.width = 0;
	p.symbol = "";
	rect_load(f, &p);
	return  0;
}