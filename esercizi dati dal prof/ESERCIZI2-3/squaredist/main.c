int z;
double squaredist(double x1, double y1, double x2, double y2) {
	z = ((x1 - x2) * (x1 - x2)) /((y1 - y2) * (y1 - y2));
	return z;
}
double main(void) {
	double x1, x2, y1, y2;
	x1 = 5.0;
	y1 = 5.0;
	x2 = 7.0;
	y2 = 6.0;
	squaredist(x1, y1, x2, y2);
	return 0;
}