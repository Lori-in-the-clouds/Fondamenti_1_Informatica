#include <stdlib.h>
#include "matrix.h"
struct matrix* mat_delete_col(const struct matrix* m, size_t i) {
	if (m == NULL || m->cols == 1) {
		return NULL;
	}
	if (i + 1 > m->cols) {
		return NULL;
	}
	
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->cols = m->cols - 1;
	p->rows = m->rows;
	p->data = calloc(p->cols * p->rows, sizeof(double));

	int j = 0;
	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			if (c == i && (c == m->cols - 1)) {
				break;
			}
			if (c == i) {
				c++;
			}
			
			p->data[j] = m->data[r * m->cols + c];
			j++;
		}
	}
	return p;
}