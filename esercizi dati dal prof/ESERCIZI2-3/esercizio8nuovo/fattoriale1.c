double fattoriale(int c) {
	double fattore = 1.0;
	if (c == 0) {
		return fattore = 1.0;
	}
	else {
		for (int i = 1; i <= c; i++) {

			fattore *= i;

		}
		return fattore;

	}
}