int radice(double discriminante ) {
	double t;
	double x = discriminante;
	
	if (x <= 0)
		return 0;
	
	do {
		t = x;
		x = 0.5 * (t + (discriminante / t));
	} while (x != t);

	return x;
}