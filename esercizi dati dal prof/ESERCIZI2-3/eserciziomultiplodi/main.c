
int multiplodi(int a,int b) {
	if (a % b == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main (void) {
	int c,d;
	c = 11;
	d = 10;
	multiplodi(c, d);
	return 0;
}