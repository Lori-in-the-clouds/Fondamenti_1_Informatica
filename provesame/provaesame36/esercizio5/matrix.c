#include <stdlib.h>
#include "matrix.h"
struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p) {
	struct matrix* a = malloc(1 * sizeof(struct matrix));
	a->cols = m->cols;
	a->rows = m->rows;
	a->data = calloc(a->cols * a->rows, sizeof(double));
	int i = 0;
	int j = 0;
	for (size_t r = 0; r < a->rows; r++) {
		
		for (size_t c = 0; c < a->cols; c++) {
			a->data[i] = m->data[p[j] * m->cols + c];
			i++;
		}
		j++;
	}
	return a;
}