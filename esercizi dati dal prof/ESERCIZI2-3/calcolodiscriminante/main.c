double discriminante(double a, double b, double c) {
	double risultato;
	risultato = (b * b) - (4 * a * c);
	return risultato;
}


int main(void) {
	double a, b, c;
	a = 3.0;
	b = 5.0;
	c = 2.0;
	discriminante(a, b, c);
	return 0;
}