double potenzann(double x, int n) {
	double potenza = 1.0;
	for (int i = 0; i < ((2 * n) + 1); i++) {
		potenza = potenza * x;

	}
	return potenza;

}