#include <stdlib.h>
#include "matrix.h"
#include <math.h>
struct matrix* scambia_diagonali(const struct matrix* m) {
	if (m->cols != m->rows || m == NULL) {
		struct matrix* p = NULL;
		return p;
	}
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->rows = m->rows;
	p->cols = m->cols;
	p->data = calloc(p->rows * p->cols, sizeof(struct matrix));
	int i = 0;
	for (int r = 0; r < p->rows; r++) {
		for (int c = 0; c < p->cols; c++) {
			if (r == c) {
				p->data[i] = m->data[r * m->cols + (m->cols - (c+1))];
				i++;
				continue;
			}
			if (i == (p->cols-1)*(r+1)) {
				/*p->data[i] = m->data[c*r +p->rows*r];*/
				p->data[i] = m->data[r * m->rows + (m->cols - (c + 1))];
				i++;
				continue;
			}
			p->data[i] = m->data[r * m->cols + c];
			i++;
		}
	}
	return p;
}