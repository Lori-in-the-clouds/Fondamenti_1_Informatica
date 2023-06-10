#include <string.h>
#include <stdlib.h>
char* codifica_morse(const char* testo) {
	if (testo == NULL) {
		return NULL;
	}
	int n = 0;
	char* ris = malloc(1 * sizeof(char));
	int num = strlen(testo);
	int j = 0;
	for (int i = 0; i < num; i++) {
		if (testo[i] == 'A') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;

		}

		if (testo[i] == 'B') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;
		}

		if (testo[i] == 'C') {
			n = n + 5;
			ris = realloc(ris, n * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;

		}
		if (testo[i] == 'D') {
			n = n + 4;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;

		}
		if (testo[i] == 'E') {
			n = n + 2;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;

		}
		if (testo[i] == 'F') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'G') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
		}
		if (testo[i] == 'H') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'I') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;

		}
		if (testo[i] == 'J') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;

		}
		if (testo[i] == 'K') {
			n = n + 4;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;

		}
		if (testo[i] == 'L') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;

		}
		if (testo[i] == 'M') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'N') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'O') {
			n = n + 4;
			ris = realloc(ris, (n ) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'P') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'Q') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'R') {
			n = n+4;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;
		}

		if (testo[i] == 'S') {
			n = n + 4;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'T') {
			n = n + 2;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'U') {
			n = n + 4;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'V') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'W') {
			n = n + 4;
			ris = realloc(ris, (n ) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'X') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'Y') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == 'Z') {
			n = n + 5;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (testo[i] == ' ') {
			n = n + 2;
			ris = realloc(ris, n * sizeof(char));
			ris[j] = '/';
			j++;
			ris[j] = ' ';
			j++;
			
			
		}

	}
	ris[n-1] = '\0';
	
	return ris;
}