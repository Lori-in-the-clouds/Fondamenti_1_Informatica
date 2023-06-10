#include <stdlib.h>
#include "matrix.h"
int main(void) {
	struct matrix a;
	a.cols = 3;
	a.rows = 4;
	a.data = calloc(a.cols * a.rows, sizeof(double));
	a.data[0] = 1;
	a.data[1] = 2;
	a.data[2] = 3;
	a.data[3] = 4;
	a.data[4] = 5;
	a.data[5] = 6;
	a.data[6] = 7;
	a.data[7] = 8;
	a.data[8] = 9;
	a.data[9] = 10;
	a.data[10] = 11;
	a.data[11] = 12;

	mat_replicate(&a);
	return 0;

}