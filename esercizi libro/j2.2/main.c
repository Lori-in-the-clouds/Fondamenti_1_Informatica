#include "libreria.h";
double binomialesimmetrico(int n,int h, int k) {
	double risultato;
	risultato = fattoriale(n) / (fattoriale(h) * fattoriale(k));
	return risultato;

}

double main(void) {
	int n, h, k;
	n = 3;
	h = 2;
	k = 1;
	double nuovo;
	nuovo = binomialesimmetrico(n, h, k);
	return 0;
}
