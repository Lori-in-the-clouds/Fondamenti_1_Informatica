#include "libreria.h";
double x1 = 0;
double x2 = 0;
int soluzioni(double a, double b, double c, double *x1, double *x2) {
	if (discriminante(a, b, c) == 0) {
		*x1 = (-b) / (2*a);
		return *x1;
	}
	else if (discriminante(a, b, c) < 0) {
		return 0;
	}
	else  {
		*x1 = ((-b) + radice(discriminante(a, b, c))) / (2 * a);
		*x2 = ((-b) - radice(discriminante(a, b, c))) / (2 * a);
		return 0;
   }
}


int main(void) {
	double a, b, c, x1, x2;
	a = 1.0;
	b = 1.0;
	c = -6.0;
	soluzioni(a, b, c, &x1, &x2);
	return 0;
}