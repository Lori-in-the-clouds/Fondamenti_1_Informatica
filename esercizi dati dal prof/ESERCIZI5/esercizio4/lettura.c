#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "lettura.h"

double* leggidouble(const char* filename, size_t* size) {
	size_t num = 0;
	double* v = NULL;
	FILE* f = fopen(filename, "r");
	if (f) {
		while (1) {
			double d;
			int res = fscanf(f, "%lf", &d);
			if (res != 1) {
				break;
			}
			++num;
			v = realloc(v, num * sizeof(double));
			v[num - 1] = d;
		}
		if (num > 0) {
			*size = num;

		}

		fclose(f);
	}
	return v;
}