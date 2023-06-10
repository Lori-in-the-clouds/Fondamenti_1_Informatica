#include <stdlib.h>
#include "matrix.h"
struct matrix* mat_transpose(const struct matrix* mat) {
	if (mat == NULL) {
		return NULL;
	}
	struct matrix* p = calloc(1, sizeof(struct matrix));
	p->rows = mat->cols;
	p->cols = mat->rows;
	p->data = calloc(p->cols * p->rows, sizeof(double));
	int i = 0;
	for (size_t c = 0; c < mat->cols; c++) {
		for (size_t r = 0; r < mat->rows; r++) {
			p->data[i] = mat->data[r * mat->cols + c];
			i++;
		}
	}
	return p;

}