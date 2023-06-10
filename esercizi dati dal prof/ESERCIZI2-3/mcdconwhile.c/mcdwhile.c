unsigned int m,n, t, mcd;

unsigned int MCD(unsigned int m, unsigned int n) {



	
		while (m != n) {
			if (m < n) {
				t = m;
				m = n;
				n = t;
			}
			m = m - n;
		}
		mcd = m;
		return m;
	
}
int main(void) {
	MCD(15, 10);
	return 0;
	
}