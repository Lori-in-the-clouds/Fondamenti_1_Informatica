#include <stdlib.h>
extern double entropia(const double* v, size_t n);
int main(void) {
	double v[2] = {1.000,0000};
	entropia(&v, 2);
	return 0;
}