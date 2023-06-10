double fattoriale(int n) {
	double fat = 1;
	int somma = 1;
	for (int i = 0; i < n; i++) {
		somma = fat * somma;
		fat++;
	}
	return somma;
}
double potenza(double x, int s) {
	double somma= x;
	if (s==1) {
		return x;
	}
	for (int i = 0; i < s-1; i++) {
		somma *=x;
	}
	return somma;
}
double seno_iperbolico(double x) {
	double seno = 0;
	double confronto = 1;
	int n = 0;
	for (int i = 0; i < 8; i++) {
		
		seno = seno + ((1 / fattoriale((2 * n) + 1)) * potenza(x, (2 * n) + 1));
		n++;
		if (confronto == seno) {
			break;
		}
		confronto = seno;
	}
}