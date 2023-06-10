#include "matrix.h"
#include <stdlib.h>

struct matrix* mat_submatrix(const struct matrix* mat, const int* row_idxs, const int* col_idxs) {
	
//conto quante righe deve avere
	int j = 0;
	size_t num1 = 0;
	while (row_idxs[j] >= 0) {
		num1++;
		j++;
	}
//conto quante colonne deve avere
	j = 0;
	size_t num2 = 0;
	while (col_idxs[j] >= 0) {
		num2++;
		j++;
	}
	struct matrix* A = malloc(sizeof(struct matrix));
	A->cols = num2;
	A->rows = num1;
	if (mat->data == NULL) {
		A->data = NULL;
	}
	A->data = calloc(num1 * num2, sizeof(double));
	int i = 0;
	
	for (size_t r = 0; r < mat->rows; r++) {
		for (size_t c = 0; c < mat->cols; c++) {
			
			for (int j = 0; j < num1; j++) {
				if (r == row_idxs[j]) {
					
					for (int m = 0; m < num2; m++) {
						if (c == col_idxs[m]) {
							A->data[i] = mat->data[r * mat->cols + c];
							i++;
						}
					}
				}
			}
			
		}
	}
	return A;
}