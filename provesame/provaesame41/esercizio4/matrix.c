#include <stdlib.h>
#include "matrix.h"
struct matrix* mat_replicate(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->rows = m->rows;
	p->cols = (m->cols)*2;
	p->data = calloc(p->cols * p->rows, sizeof(double));
	int i = 0;
	for (size_t r = 0; r < p->rows; r++) {
		for (int j = 0; j < 2; j++) {
			for (size_t c = 0; c < m->cols; c++) {
				p->data[i] = m->data[r * m->cols + c];
				i++;
			}
		}
	}

	return p;






















	/*int i = 0;
	for (int j = 0; j < 2; j++) {
		for (size_t c = 0; c < m->cols; c++) {
			for (size_t r = 0; r < m->rows; r++) {
				p->data[i] = m->data[r * m->cols + c];
				i++;
			}
		}
	}
	struct matrix* ris = malloc(1 * sizeof(struct matrix));
	ris->rows = p->rows;
	ris->cols = (p->cols);
	ris->data = calloc(ris->cols * ris->rows, sizeof(double));
	i = 0;
	for (int j = 0; j < 2; j++) {
		for (size_t c = 0; c < m->cols; c++) {
			for (size_t r = 0; r < m->rows; r++) {
				ris->data[i] = p->data[r * m->cols + c];
				i++;
			}
		}
	}
	free(p->data);
	free(p);
	return ris;*/
}