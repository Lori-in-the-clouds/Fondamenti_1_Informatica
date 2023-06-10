#include <stdlib.h>
#include "matrix.h"

double* matrix_snake(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}
	size_t i = 0;
	double* arr = calloc(m->rows * m->cols, sizeof(double));
	for (size_t r = 0; r < m->rows; r++) {
		if (r % 2 == 0) {

			for (size_t c = 0; c < m->cols; c++) {
				arr[i] = m->data[r * m->cols + c];
				i++;
			}
		}
		//se è dispari
		else {
			for (int c = (m->cols)-1; c >=0; c--) {
				arr[i] = m->data[r * m->cols + c];
				i++;
			}
		}
	}
	return arr;
}
//size_t i = 0;
//double *arr = calloc(m->rows * m->cols, sizeof(double));
//for(size_t r = 0; r < m->rows; r++){
//	for(size_t c = 0; c < m->cols; c++){
//		arr[i] = m->data[r * m->cols + c];
//	}
//}