#include "matrix.h"
#include <stdlib.h>
int main(void) {
	struct matrix A;
	A.data = malloc(12 * sizeof(double));
	A.rows = 3;
	A.cols = 4;
	A.data[0] = 1;
	A.data[1] = 2;
	A.data[2] = 3;
	A.data[3] = 4;
	A.data[4] = 5;
	A.data[5] = 6;
	A.data[6] = 7;
	A.data[7] = 8;
	A.data[8] = 9;
	A.data[9] = 10;
	A.data[10] = 11;
	A.data[11] = 12;
	 int* row_idxs = malloc(3 * sizeof(int));
	row_idxs[0] = 1;
	row_idxs[1] = 2;
	row_idxs[2] = -1;
	int* col_idxs = malloc(4 * sizeof(int));
	col_idxs[0] = 0;
	col_idxs[1] = 2;
	col_idxs[2] = 3;
	col_idxs[3] = -1;

	mat_submatrix(&A,row_idxs,col_idxs);
	return  0;
}