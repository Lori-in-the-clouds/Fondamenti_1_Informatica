
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"
void mat_constr(struct matrix* m, size_t rows, size_t cols) {
	m->rows = rows;
	m->cols = cols;
	m->data = calloc(rows * cols, sizeof(double));
}
struct matrix* mat_traspose(const struct matrix* mat) {
	;
}

