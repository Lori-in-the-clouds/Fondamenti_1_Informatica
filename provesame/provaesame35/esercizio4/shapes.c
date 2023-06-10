#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "shapes.h"
bool rect_load(FILE* f, struct rect* r) {
	fscanf(f, "%i", &(r->x));
	fscanf(f, "%i", &(r->y));
	fscanf(f, "%i", &(r->width));
	fscanf(f, "%i", &(r->height));
	fscanf(f, "%*c");
	fscanf(f, "%c",&(r->symbol));
	
}