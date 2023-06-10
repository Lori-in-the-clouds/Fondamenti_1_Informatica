#include "matrix.h"
#include <stdlib.h>
int main(void) {
	struct matrix a;
	a.rows = 4;
	a.cols = 3;
	size_t p[4] = { 3,2,1,0 };
	a.data = calloc(a.rows * a.cols, sizeof(double));
	a.data[0] = 1;
	a.data[1] = 2;
	a.data[2] = 3;
	a.data[3] = 5;
	a.data[4] = 6;
	a.data[5] = 7;
	a.data[6] = 9;
	a.data[7] = 10;
	a.data[8] = 11;
	a.data[9] = 13;
	a.data[10] = 14;
	a.data[11] = 15;
	mat_permute_rows(&a, &p);
}