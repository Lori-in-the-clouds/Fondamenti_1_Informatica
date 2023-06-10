#include <math.h>
unsigned int inverti(unsigned int i) {
	int somma = 0;
	int n = 1;
	int m = 0;
	int s = i;
	//conto cifre
	while (s != 0) {
		s = s / 10;
		m++;
	}
	int p = m;
	for(int j=0;j<p;j++) {
		
		 int r= (i / n) % 10;
		 somma = somma+ (r * pow(10,m-1));
		 n *= 10;
		 m--;


	}
	return somma;

}