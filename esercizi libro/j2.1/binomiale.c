double fattoriale(int n) {
	int fattore = 1;
	if (n == 0) {
		return fattore = 1;
	}
	else {
		for (int i = 1; i <= n; i++) {

			fattore *= i;

		}
		return fattore;

	}
}
double binomiale (int a, int b) {
	double risultato;
	 return risultato = fattoriale(a) / (fattoriale(b) * fattoriale(a - b));
}
int main(void) {
	int a, b;
	a = 7;
	b = 0;
   return 	binomiale(a, b);
}