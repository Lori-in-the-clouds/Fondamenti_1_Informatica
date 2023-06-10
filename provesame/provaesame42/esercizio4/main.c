#include "matrix.h"
int main(void) {
	struct matrix A;
	A.rows = 3;
	A.cols = 3;
	A.data = calloc(A.rows * A.cols, sizeof(double));
	A.data[0] = 1;
	A.data[1] = 2;
	A.data[2] = 3;
	A.data[3] = 4;
	A.data[4] = 5;
	A.data[5] = 6;
	A.data[6] = 7;
	A.data[7] = 8;
	A.data[8] = 9;
	mat_reset_cross(&A, 0, 1);

	return 0;
}