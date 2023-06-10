#include "libreria.h";
double seno(double x) {
	double sin=0;
	double t = 0;
	int i = 0;
	double z;
	do {
		t = sin;
		
		z = ((potenza(i) / fattoriale((2 * i) + 1) * potenzann(x, i)));

		sin = sin + z;
		i++;
	}
	
	while (t != sin);
	
	return sin;
}