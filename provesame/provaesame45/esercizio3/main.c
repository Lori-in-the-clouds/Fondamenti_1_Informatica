#include <stdlib.h>
#include "matrix.h"
int main(void) {
	struct matrix A;
	A.rows = 2;
	A.cols = 3;
	A.data = malloc(5 * sizeof(char));
	A.data[0] = 1.0;
	A.data[1] = 2.0;
	A.data[2] = 3.0;
	A.data[3] = 4.0;
	A.data[4] = 5.0;
	A.data[5] = 6.0;
	matrix_snake(&A);

	return 0;
}