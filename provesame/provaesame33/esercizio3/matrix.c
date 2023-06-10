#include <stdbool.h>
#include <stdlib.h>
#include "matrix.h"
struct bmatrix* mat_boolean(const struct matrix* m, double rhs, enum comparisons cmp) {
	if (m == NULL) {
		return NULL;
	}
	struct bmatrix* p = malloc(1 * sizeof(struct bmatrix));
	p->cols = m->cols;
	p->rows = m->rows;
	p->data = calloc(p->rows * p->cols, sizeof(bool));
	int i = 0;
	for (int r = 0; r < p->rows; r++) {
		for (int c = 0; c < p->cols; c++) {
			//prima comparison
			if (cmp == LT) {
				if (m->data[r * m->cols + c]<rhs) {
					p->data[i] = true;
				}
				else {
					p->data[i] = false;
				}
			}
			//seconda comparison
			if (cmp == LE) {
				if (m->data[r * m->cols + c] <= rhs) {
					p->data[i] = true;
				}
				else {
					p->data[i] = false;
				}
			}
			//terza comparison
			if (cmp == EQ) {
				if (m->data[r * m->cols + c] == rhs) {
					p->data[i] = true;
				}
				else {
					p->data[i] = false;
				}
			}
			// quarta comparison
			if (cmp == NE) {
				if (m->data[r * m->cols + c] != rhs) {
					p->data[i] = true;
				}
				else {
					p->data[i] = false;
				}
			}
			//quinta comparison
			if (cmp == GE) {
				if (m->data[r * m->cols + c] >= rhs) {
					p->data[i] = true;
				}
				else {
					p->data[i] = false;
				}
			}
			//sesta comparison
			if (cmp == GT) {
				if (m->data[r * m->cols + c] > rhs) {
					p->data[i] = true;
				}
				else {
					p->data[i] = false;
				}
			}
			i++;
		}
		
	}
	return p;
}