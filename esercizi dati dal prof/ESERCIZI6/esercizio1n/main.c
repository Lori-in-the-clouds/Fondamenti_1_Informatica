#include <stdlib.h>
#include "matrix.h"
int main(void) {
	struct matrix A;
	A.rows = 2;
	A.cols = 3;
	A.data = calloc(A.cols * A.rows, sizeof(double));
	A.data[0] = 1;
	A.data[1] = 2;
	A.data[2] = 3;
	A.data[3] = 4;
	A.data[4] = 5;
	A.data[5] = 6;
	mat_transpose(&A);
	return 0;
}