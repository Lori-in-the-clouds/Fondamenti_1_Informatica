#include <string.h>
#include <stdlib.h>
char* change_font(const char* s) {
	int n = 1;
	char* ris = malloc(n * sizeof(char));

	if (s == NULL) {
		free(ris);
		return NULL;
	}
	int j = 0;
	for (int i=0; i<strlen(s);i++) {
		if (s[i] == 'S' && s[i + 1] == 'E' && s[i + 2] == 'I') {
			ris = realloc(ris, n * sizeof(char));
			ris[j] = '6';
			j++;
			n++;
			i += 2;
			continue;
		}
		if (s[i] == 'P' && s[i + 1] == 'E' && s[i + 2] == 'R') {
			ris = realloc(ris, n * sizeof(char));
			ris[j] = 'X';
			j++;
			n++;
			i += 2;
			continue;
		}

		if (s[i] == 'A') {
			ris = realloc(ris, n * sizeof(char));
			ris[j] = '4';
			j++;
			n++;
			continue;
		}
		if (s[i] == 'E') {
			ris = realloc(ris, n * sizeof(char));
			ris[j] = '3';
			j++;
			n++;
			continue;
		}
		if (s[i] == 'I') {
			ris = realloc(ris, n * sizeof(char));
			ris[j] = '1';
			j++;
			n++;
			continue;
		}
		if (s[i] == 'O') {
			ris = realloc(ris, n * sizeof(char));
			ris[j] = '0';
			j++;
			n++;
			continue;
		}
		if (s[i] == 'S') {
			ris = realloc(ris, n * sizeof(char));
			ris[j] = '5';
			j++;
			n++;
			continue;
		}
		

			//ALTRIMENTI
			ris = realloc(ris, n * sizeof(char));
			ris[j] = s[i];
			n++;
			j++;
		


	}
	ris = realloc(ris, (n+1) * sizeof(char));
	ris[n-1] = '\0';
	

	
	return ris;
}