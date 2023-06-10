#include <stdlib.h>
#include <math.h>
double entropia(const double* v, size_t n) {
	double somma = 0;
	int controllo = 0;
	if (n == 0 || v == NULL) {
		return 0;

	}
	for (size_t i = 0; i < n; i++) {
		if (v[i] == 0) {
			controllo++;
		}
	}
	if (controllo == n) {
		return 0;
	}
	for (size_t i = 0; i < n; i++) {
		double x = log2(v[i]);
		if (v[i] == 0) {
			x = 0;
		}
		somma = somma + v[i] *x ;
	}
	 somma = somma * -1.0;
	return somma;

}
