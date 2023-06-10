#include <stdlib.h>
#include "matrix.h"
int main(void) {
	struct matrix a;
	a.M = 3;
	a.N = 3;
	a.data = malloc(6 * sizeof(double));
	a.data[0] = 1;
	a.data[1] = 2;
	a.data[2] = 3;
	a.data[3] = 4;
	a.data[4] = 5;
	a.data[5] = 6;
	a.data[6] = 7;
	a.data[7] = 8;
	a.data[8] = 9;
	int r1 = 0;
	int r2 = 1;
	mat_swaprows(&a, r1, r2);
	return 0;
	
}