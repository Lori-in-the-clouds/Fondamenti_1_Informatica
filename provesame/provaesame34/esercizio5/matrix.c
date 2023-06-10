#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "matrix.h"
#include <stdlib.h>
#include <stdint.h>

bool matrix_read(struct matrix* m, FILE* f) {
	
	size_t turn1 = 0;
	
	turn1 = fscanf(f, "%i", &m->rows);
	if (turn1 == EOF) {
		return false;
	}
	turn1 = fscanf(f, "%i", &m->cols);
	if (turn1 == EOF) {
		return false;
	}
	m->data = malloc(m->rows * m->cols* sizeof(double));
	
	for (int i = 0; i < (m->rows * m->cols);i++) {
	
		turn1 = fscanf(f, "%lf", &m->data[i]);
		if (turn1 == EOF) {
			return false;
		}

	}
	return true;
}
