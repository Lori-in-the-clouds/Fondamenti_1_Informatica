#include <stdlib.h>
#include "matrix.h"
struct matrix* mat_reset_cross(const struct matrix* m, size_t ir, size_t ic) {
	if (m  == NULL) {
		return NULL;
	}
	if (ir > (m->rows-1) || ic > (m->cols-1)) {
		return NULL;
	}
	
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->rows = m->rows;
	p->cols = m->cols;
	p->data = calloc(p->rows * p->cols, sizeof(double));
	int i = 0;
	for (size_t r = 0; r < p->rows; r++) {
		for (size_t c = 0; c < p->cols; c++) {
			if (r == ir || c == ic) {
				if (r == ir && c == ic) {
					p->data[i] = m->data[r * p->cols + c];
					i++;
				}
				else {
					p->data[i] = 0;
					i++;
				}
				continue;
				
			}
			p->data[i] = m->data[r * p->cols + c];
			i++;
		}
	}
	return p;

}