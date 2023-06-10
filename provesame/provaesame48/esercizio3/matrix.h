#ifndef MATRIX_C
#define MATRIX_C
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
extern struct matrix* mat_submatrix(const struct matrix* mat,const int* row_idxs, const int* col_idxs);
	
#endif // !MATRIX_C
