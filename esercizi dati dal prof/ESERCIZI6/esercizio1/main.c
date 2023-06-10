
#include "matrix.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void) {
	struct matrix A;
	A.rows = 3;
	A.cols = 4;
	 *mat_traspose(&A);
	A.data[0] = 4.00; A.data[1] = 12.00; A.data[2] = 0.30; A.data[3] = 9.30;
	A.data[4] = 1.00; A.data[5] = 3.00; A.data[6] = 8.00; A.data[7] = -2.00;
	A.data[8] = -3.0; A.data[9] = 9.70; A.data[10] = 4.87; A.data[11] = -8.0;
	return 0;
}