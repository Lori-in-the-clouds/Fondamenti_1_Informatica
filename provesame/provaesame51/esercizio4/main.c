#include "matrix.h"
#include <stdlib.h>
int main(void) {
	struct matrix m1, m2;
	m1.rows = 2;
	m1.cols = 3;
	m2.rows = 3;
	m2.cols = 2;
	m1.data = calloc(m1.rows * m1.cols, sizeof(double));
	m2.data = calloc(m2.rows * m2.cols, sizeof(double));
	m1.data[0] = 1;
	m1.data[1] = 2;
	m1.data[2] = 3;
	m1.data[3] = 4;
	m1.data[4] = 5;
	m1.data[5] = 6;

	m2.data[0] = 7;
	m2.data[1] = 10;
	m2.data[2] = 8;
	m2.data[3] = 11;
	m2.data[4] = 9;
	m2.data[5] = 12;
	mat_mul(&m1, &m2);

}