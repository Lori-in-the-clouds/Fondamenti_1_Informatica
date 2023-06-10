#include <stdlib.h>
#include "matrix.h"
int main(void) {
	struct matrix a;
	a.rows = 4;
	a.cols = 5;
	a.data = malloc(20 * sizeof(double));
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
	a.data[12] = 13;
	a.data[13] = 14;
	a.data[14] = 15;
	a.data[15] = 16;
	a.data[16] = 17;
	a.data[17] = 18;
	a.data[18] = 19;
	a.data[19] = 20;
	
	
	mirror_mat(&a);
	return 0;
}