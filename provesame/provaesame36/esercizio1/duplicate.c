#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

bool cifre_duplicate_oct(unsigned int n) {
	//metto il numero dentro un char 
	int s = 1;
	char* ris = malloc(s * sizeof(char));
	int div = 1;
	int i = 0;
	while (div <= n) {
		ris[i] = ((n / div) %10)+48;
		div *= 10;
		s++;
		i++;
		ris = realloc(ris, s * sizeof(char));

	}
	//inverti cifre 
	
	
	 int nuovo = strtol(ris, NULL,8);
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			if (j == i) {
				continue;
			}
			if (ris[i] == ris[j]) {
				free(ris);
				return true;
			}

		}
	}
	free(ris);
	return false;
}