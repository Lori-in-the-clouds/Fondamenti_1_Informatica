#include <stdlib.h>
double prodotto_scalare(const double* x, const double* y, size_t n) {
	double ris = 0;
	for (int i = 0; i < n; i++) {
		ris =  ris +(x[i] * y[i]);
}
	return ris;
}