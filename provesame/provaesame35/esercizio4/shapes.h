#if !defined SHAPES_H
#define SHAPES_H
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
struct rect {
	int16_t x, y;
	uint16_t width, height;
	char symbol;
};
extern bool rect_load(FILE* f, struct rect* r);
#endif /*SHAPES_H*/