#include <stdbool.h>
#include <stdlib.h>
#include "matrix.h"
int main(void) {
	struct matrix a;
	a.rows = 3;
	a.cols = 3;
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
	mat_boolean(&a, 5, GE);
	return 0;
}