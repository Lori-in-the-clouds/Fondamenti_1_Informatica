#include <stdlib.h>
#include "matrix.h"
int main(void) {
	struct matrix a;
	a.cols = 3;
	a.rows = 3;
	a.data = malloc(9 * sizeof(double));
	a.data[0] = 1;
	a.data[1] = 2;
	a.data[2] = 3;
	a.data[3] = 4;
	a.data[4] = 5;
	a.data[5] = 6;
	a.data[6] = 7;
	a.data[7] = 8;
	a.data[8] = 9;
	size_t i = 2;
	mat_delete_col(&a, i);

	return 0;
}