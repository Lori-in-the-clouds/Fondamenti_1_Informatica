#include <stdlib.h>;
#include <stdint.h>
#include <string.h>
#include <math.h>

char* sottrai_stringhe(const char* a, const char* b) {
	if (a == NULL) {
		return NULL;
	}
	if (b == NULL) {
		return NULL;
	}
	long long c = atoll(a);
	long long d = atol(b);
	long long diff = c - d;
	if (diff == 0) {
		char* ris = malloc(2 * sizeof(char));
		ris[0] = 48;
		ris[1] = '\0';
		return ris;
	}
	//conto le cifre di diff
	long long sacrifice = diff;
	long long n = 0;
	while (sacrifice != 0) {
		sacrifice = sacrifice / 10;
		n++;
	}
	long long k = n;
	long long s = 10;
	char* ris = malloc((n + 1) * sizeof(char));
	char* ris1 = malloc((n + 1) * sizeof(char));
	for (size_t i = 0; i < n; i++) {
		long long x = pow(10, -1 + k);
		ris[i] = ((diff / x) % 10)+48;
		k--;
		
	}
	free(ris1);
	ris[n] = '\0';

	return ris;
}