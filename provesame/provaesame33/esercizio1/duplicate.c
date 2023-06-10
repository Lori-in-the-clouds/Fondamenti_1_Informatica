#include <stdbool.h>
#include <stdlib.h>
bool cifre_duplicate(unsigned long long n) {
	//conto quante cifre ha 
	size_t num = 0;
	long long s = n;

	while ( s!= 0) {
		s = s / 10;
		num++;

	}
	if (num == 1) {
		return false;
	}
	//isolo ciascuno numero e lo metto dentro l'array
	long long k = 1;
	int* c = malloc(1 * sizeof(int));
	int m = 1;
	for (int i = 0; i < num; i++) {
		
		c[i] = (n / k) % 10;
		m++;

		c = realloc(c, m * sizeof(int));
		k *= 10;
	}
	for (int i = 0; i < num; i++) {
		for (int j = i+1; j < num; j++) {
			if (c[i] == c[j]) {
				free(c);
				return true;
			}
		}
	}
	free(c);
	return false;

}