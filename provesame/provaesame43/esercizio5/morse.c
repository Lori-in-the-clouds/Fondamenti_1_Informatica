#include <string.h>
#include <stdlib.h>
char* decodifica_morse(const char* codice) {
	if (codice == NULL) {
		return NULL;
	}
	int n = 0;
	char* ris = malloc(1 * sizeof(char));
	int num = strlen(codice);
	int j = 0;
	for (int i = 0; i < num; i++) {
		if (codice[i] == 'A') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;

		}

		if (codice[i] == 'B') {
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

		if (codice[i] == 'C') {
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
		if (codice[i] == 'D') {
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
		if (codice[i] == 'E') {
			n = n + 2;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;

		}
		if (codice[i] == 'F') {
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
		if (codice[i] == 'G') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
		}
		if (codice[i] == 'H') {
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
		if (codice[i] == 'I') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;

		}
		if (codice[i] == 'J') {
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
		if (codice[i] == 'K') {
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
		if (codice[i] == 'L') {
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
		if (codice[i] == 'M') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (codice[i] == 'N') {
			n = n + 3;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '.';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (codice[i] == 'O') {
			n = n + 4;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (codice[i] == 'P') {
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
		if (codice[i] == 'Q') {
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
		if (codice[i] == 'R') {
			n = n + 4;
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

		if (codice[i] == 'S') {
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
		if (codice[i] == 'T') {
			n = n + 2;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (codice[i] == 'U') {
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
		if (codice[i] == 'V') {
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
		if (codice[i] == 'W') {
			n = n + 4;
			ris = realloc(ris, (n) * sizeof(char));
			ris[j] = '.';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = '_';
			j++;
			ris[j] = ' ';
			j++;
		}
		if (codice[i] == 'X') {
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
		if (codice[i] == 'Y') {
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
		if (codice[i] == 'Z') {
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
		if (codice[i] == ' ') {
			n = n + 2;
			ris = realloc(ris, n * sizeof(char));
			ris[j] = '/';
			j++;
			ris[j] = ' ';
			j++;


		}

	}
	ris[n - 1] = '\0';

	return ris;
}