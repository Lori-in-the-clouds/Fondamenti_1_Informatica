int fattoriale(int n) {
	int fattore = 1.0;
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
