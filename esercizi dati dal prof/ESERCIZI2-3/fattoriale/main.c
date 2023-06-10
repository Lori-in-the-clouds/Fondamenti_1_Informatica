unsigned int fattore = 1;
int fattoriale(unsigned int a) {
	for ( int i = 1; i <= a; i++) {
	fattore *=i;
	}
	return fattore;
}
int main(void) {
	unsigned int b;
	b = 5;
	fattoriale(b);
	return 0;
}