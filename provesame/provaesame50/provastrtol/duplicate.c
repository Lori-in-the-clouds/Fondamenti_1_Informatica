#include <stdlib.h>
#include <stdbool.h>
bool cifre_duplicate_hex(unsigned int n) {
	char* s1 = malloc(1 * sizeof(char));
	int div = 16;
	int i = 0;
	int s = 1;
	while (n != 0) {
		int divisione = n % div;
		if (divisione == 10) {
			s1[i] = 'A';
		}
		if (divisione == 11) {
			s1[i] = 'B';
		}
		if (divisione == 12) {
			s1[i] = 'C';
		}
		if (divisione == 13) {
			s1[i] = 'D';
		}
		if (divisione == 14) {
			s1[i] = 'E';
		}
		if (divisione == 15) {
			s1[i] = 'F';
		}
		else {
			s1[i] = (n % div);
		}
		n = n / div;
		i++;
		s++;
		s1 = realloc(s1, s * sizeof(char));
	}

	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			if (j == i) {
				continue;
			}
			if (s1[i] == s1[j]) {
				free(s1);
				return true;
			}
		}
	}
	free(s1);
	return false;
}