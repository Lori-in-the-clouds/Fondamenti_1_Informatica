#include <stdlib.h>
int felice(unsigned int num) {
	if (num == 0) {
		return 0;
	}
	size_t somma = num;
	
	while (1) {
		size_t j = 1;
		size_t numero = somma;
		size_t cif = numerocifre(somma);
		somma = 0;
		
		for (int i = 0; i < cif; i++) {

			int cifra = (numero / j) % 10;
			j *= 10;
			somma = somma + (cifra * cifra);
			
			
}		if (somma == 1) {
			return 1;
		}
		if (somma == 4) {
			return 0;
		}
	}

}

int numerocifre(unsigned int k) {
	int i = 1;
	if (k == 0) {
		return 0;
	}
	while (k >= 10) {
		k /= 10;
		i++;
	}
	return i;
}