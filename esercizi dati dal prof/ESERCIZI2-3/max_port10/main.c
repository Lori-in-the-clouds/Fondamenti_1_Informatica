int max_port10(int val) {
	int i = 0;
	if (val != 0) {


		while (val > 10) {
			val = val / 10;
			i = i + 1;
		}
		return i;
	}
	else {
		return -1;
	}

}
int main(void) {
	int d;
	d = 0;
	max_port10(d);
	return 0;
}