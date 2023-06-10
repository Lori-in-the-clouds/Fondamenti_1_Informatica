#include <stdlib.h>
#include <string.h>
char* spacefill(const char* str, size_t n) {
	if (str == NULL) {
		return NULL;
	}
	char* ris = malloc((n + 1) * sizeof(char));
	if (strlen(str) >= n) {
		for (int i = 0; i < n; i++) {
			ris[i] = str[i];
		}
		ris[n] = '\0';
		return ris;
	}
	int num = strlen(str);
	int div = n - num;
	
	int contatore = 0;
	for (int i = 0; i < div; i++) {
		ris[i] = ' ';
		contatore = i;
	}
	contatore++;
	int m = 0;
	for (int i = contatore; i < n;i++) {
		ris[i] = str[m];
		m++;
	}
	ris[n] = '\0';
	return ris;
}