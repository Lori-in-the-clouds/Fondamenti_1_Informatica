#include <string.h>
#include <stdlib.h>
char* zfill(const char* str, size_t n) {
	if (str == "" || str == NULL) {
		char *ris2 = malloc((n+1) * sizeof(char));
		for (int i = 0; i < n;  i++) {
			ris2[i] = '0';
		}
		ris2[n] = '\0';
		return ris2;
	}
	if (n <= strlen(str)) {
		char *ris1 = malloc((strlen(str) + 1) * sizeof(char));
		for (int i = 0; i < (strlen(str));  i++) {
			ris1[i] = str[i];
		}
		ris1[strlen(str)] = '\0';
		return ris1;
	}

	char* ris = malloc((n + 1) * sizeof(char));
	for (int i = 0; i < n - strlen(str); i++) {
		ris[i] = '0';
	}
	int j = 0;
	for (int i = n - strlen(str) ; i < n; i++) {
		ris[i] = str[j];
		j++;
	}
	ris[n] = '\0';

	
	return ris;
}