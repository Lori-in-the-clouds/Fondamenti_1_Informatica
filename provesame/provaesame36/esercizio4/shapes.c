#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "shapes.h"
#include <stdint.h>
bool line_load(FILE* f, struct line* pln) {
	size_t turn1 = 0;
	turn1 = fread(&pln->x1, sizeof(uint16_t), 1, f);
	if (turn1 == 0) {
		return false;
	}
	turn1 = fread(&pln->y1, sizeof(uint16_t), 1, f);
	if (turn1 == 0) {
		return false;
	}
	turn1 = fread(&pln->x2, sizeof(uint16_t), 1, f);
	if (turn1 == 0) {
		return false;
	}
	turn1 = fread(&pln->y2, sizeof(uint16_t), 1, f);
	if (turn1 == 0) {
		return false;
	}
	turn1 = fread(&pln->thickness, sizeof(int8_t), 1, f);
	if (turn1 == 0) {
		return false;
	}
	return true;

}