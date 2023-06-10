#include <stdlib.h>
#include "matrix.h"
struct matrix* mirror_mat(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->cols = m->cols;
	p->rows = m->rows;
	p->data = calloc(p->cols * p->rows, sizeof(double));
	int i = 0;
	for (size_t r = 0; r < p->rows; r++) {
		for (size_t c = 0; c < p->cols; c++) {
			if ((c+1)*2<= p->cols) {
				p->data[i] = m->data[r * p->cols + (p->cols-1-c)];
				i++;
				continue;
			}
			if ((c+1)/2<=p->cols) {
				p->data[i] = m->data[r * p->cols + (p->cols-1-c)];
				i++;
				continue;
			}
			p->data[i] = m->data[r * p->cols + c];
			i++;
		}
		
	}
	return p;
}  