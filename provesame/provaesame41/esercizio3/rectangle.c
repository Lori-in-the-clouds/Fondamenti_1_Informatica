#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include "rectangle.h"
#include <stdbool.h>
#include <stdlib.h>
bool rect_load(FILE* f, struct rect* r) {
	size_t turn1 = fread(&r->a.x, sizeof(int32_t), 1, f);
	if (turn1 == 0) {
		return false;
	}
	turn1 = fread(&r->a.y, sizeof(int32_t), 1, f);
	if (turn1 == 0) {
		return false;
	}
	turn1 = fread(&r->b.x, sizeof(int32_t), 1, f);
	if (turn1 == 0) {
		return false;
	}
	turn1 = fread(&r->b.y, sizeof(int32_t), 1, f);
	if (turn1 == 0) {
		return false;
	}
	/*int n= fseek(f,16, SEEK_CUR);*/
	return true;
}