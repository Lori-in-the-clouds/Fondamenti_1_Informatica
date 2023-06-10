#include <stdbool.h>
#include <stdlib.h>
#include "matrix.h"
bool scalar_mult(struct matrix* dst, const struct matrix* src, double k, bool accumulate) {
	if (dst == NULL || src == NULL) {
		return false;
	}
	if (dst->rows != src->rows || dst->cols != src->cols) {
		return false;
	}
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->rows = src->rows;
	p->cols = src->cols;
	p->data = calloc(p->rows * p->cols, sizeof(double));
	int i = 0;
	//SRC*k
	for (size_t r = 0; r < p->rows; r++) {
		for (size_t c = 0; c < p->cols; c++) {
			p->data[i] = src->data[r * p->cols + c] * k;
			i++;
		}
	}
	//primo caso 
	i = 0;
	if (accumulate == false) {
		for (size_t r = 0; r < p->rows; r++) {
			for (size_t c = 0; c < p->cols; c++) {
				dst->data[i] = p->data[r * p->cols + c];
				i++;
			}
		}
	}
	//secondo caso
	i = 0;
	if (accumulate == true) {
		for (size_t r = 0; r < p->rows; r++) {
			for (size_t c = 0; c < p->cols; c++) {
				dst->data[i] =dst->data[r*dst->cols+c] + p->data[r * p->cols + c];
				i++;
			}
		}
	}
	free(p);
	
	return true;
}