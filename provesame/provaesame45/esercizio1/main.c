#include "arithmetic.h"
int main(void) {
	int* v = malloc(3 * sizeof(int));
	v[0] = 2;
	v[1] = 1;
	v[2] = 2;
	//v[3] = 3;
	//v[4] =
	is_arithmetic(v,3);
	return 0;
}