#define _CRT_SECURE_NO_WARNINGS
#include "WTK.h"
#include <stdio.h>
#include <stdlib.h>
size_t write_points(FILE* f, const struct point* p, size_t n) {
	size_t ris = 0;
	if (p == NULL) {
		return NULL;
	}
	for (int i = 0; i < n; i++) {
		size_t turn1 = fprintf(f, "%s", "POINT(");
		if (turn1 == 0) {
			return 0;
		}
		size_t turn2 =fprintf(f, "%g %g", p[i].x, p[i].y);
		if (turn2 !=0) {
			ris++;
		}
		fprintf(f, "%c\n", ')');
	}
	return ris;
}