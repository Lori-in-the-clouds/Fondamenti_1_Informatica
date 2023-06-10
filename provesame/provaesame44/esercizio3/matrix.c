#include <stdlib.h>
#include "matrix.h"
struct vector* mat_vectorize(const struct matrix* m, enum vectorize_by dir) {
	if (m == NULL) {
		return NULL;
	}
	if (dir!= BY_COLUMN && dir!= BY_ROW) {
		return NULL;
	}
	struct vector* p = calloc(1, sizeof(struct vector));
	p->data = calloc(m->rows * m->cols, sizeof(double));
	p->n = m->rows * m->cols;
	int i = 0;
	if (dir == BY_ROW) {
		for (size_t r = 0; r < m->rows; r++) {
			for (size_t c = 0; c < m->cols; c++) {
				p->data[i] = m->data[r * m->cols + c];
				i++;
			}
		}
		return p;
	}
	if (dir == BY_COLUMN) {
		
			for (size_t c = 0; c < m->cols; c++) {
				for (size_t r = 0; r < m->rows; r++) {
				p->data[i] = m->data[r*m->cols + c];
				i++;
			}
		}
		return p;
	}
}
