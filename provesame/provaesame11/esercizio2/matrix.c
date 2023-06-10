#include <stdlib.h>
#include "matrix.h"
void mat_swaprows(struct matrix* mat, size_t r1, size_t r2) {
	int i = 0;
	double* x = malloc(1 * sizeof(double));
	int n = 1;
	int j = 0;
	int k = 0;
	for (int r = 0; r < mat->N; r++) {
		for (int c = 0; c < mat->M; c++) {
			if (r1 == r) {
				x[j] = mat->data[i];
				n++;
				j++;
				x = realloc(x, n * sizeof(double));
				mat->data[i] = mat->data[r2 * mat->M + c];
				i++;

			}
			else if (r2 == r) {
				
				mat->data[i] = x[k];
				k++;
				i++;
				
			}
			else {
				mat->data[i] = mat->data[r * mat->M + c];
				i++;
			}
		}
	}
	free(x);
}