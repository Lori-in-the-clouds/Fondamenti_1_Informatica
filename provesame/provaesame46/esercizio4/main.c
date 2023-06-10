#include <stdlib.h>
#include "matrix.h"
int main(void) {
	struct matrix A;
	A.rows = 2;
	A.cols = 2;
	A.data = calloc(A.rows * A.cols, sizeof(struct matrix));
	A.data[0] = 1;
	A.data[1] = 2;
	A.data[2] = 3;
	A.data[3] = 1; 
	//A.data[4] = 5;
	//A.data[5] = 6;
	mat_pad(&A);
	return 0;
}