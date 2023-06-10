#include <math.h>
double newton(double m1, double m2, double d) {
	if (m1 < 0 || m2 < 0 || d < 0) {
		return -1;
	}
	const double g = 6.67259 * pow(10., -11.);
	double f = g * ((m1 * m2) / (d * d));
	return f;
}