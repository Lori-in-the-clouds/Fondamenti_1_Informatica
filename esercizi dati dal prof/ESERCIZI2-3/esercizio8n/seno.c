double seno(double x) {
	double sin;
	double t;
	double s;
	double r;
	for (int i = 0; i <= 20; i++) {
		t = potenza(i);
		s= potenzann(x, i);
		r = potenza(x, i);
		sin = (t / s) * r;
		
	}
	return sin;
}