#include <stdlib.h>
#include "matrix.h"
struct matrix* mat_delete_row(const struct matrix* m, size_t i) {
	if (m == NULL) {
		return NULL;
	}
	if (i > m->rows-1 || i<0) {
		return NULL;
	}
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->cols = m->cols;
	p->rows = m->rows - 1;
	p->data = calloc((p->cols * p->rows), sizeof(double));
	int j = 0;
	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			if (r == i) {
				break;
			}
			p->data[j] = m->data[r * m->cols + c];
			j++;
		}
	}
	
	return p;
}