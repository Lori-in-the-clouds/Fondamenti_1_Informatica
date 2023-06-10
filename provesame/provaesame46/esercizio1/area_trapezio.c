#include <math.h>
double area_trapezio(double a, double b, double c, double d) {
	double pezzo1 = (1.0 / 2) * (a + b);
	double pezzo2 = sqrt(pow(c, 2) - (1. / 4) * pow(((b - a) + (((c * c) - (d * d)) / (b - a))), 2));
	double area = pezzo1 * pezzo2;
	return area;

}