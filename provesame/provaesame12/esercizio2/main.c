#include <stdlib.h>
#include "matrix.h"
int main(void) {
	struct matrix a;
	a.N = 2;
	a.M = 3;
	a.data = malloc(6 * sizeof(double));
	a.data[0] = 1;
	a.data[1] = 2;
	a.data[2] = 3;
	a.data[3] = 4;
	a.data[4] = 5;
	a.data[5] = 6;
	mat_swapcols(&a, 0, 1);
	return 0;
}