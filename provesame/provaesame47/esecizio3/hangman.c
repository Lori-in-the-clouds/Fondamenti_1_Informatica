#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char* hangman(const char* frase, const char* lettere) {
	if (lettere == "") {
		char* ris2 = malloc((strlen(frase) + 1) * sizeof(char));
		for (int i = 0; i < strlen(frase); i++) {
			if (frase[i] == frase[i] == ' ' || (frase[i] < 97 || frase[i] > 122) && (frase[i] < 97 - 32 || frase[i]>122 - 32)) {
				ris2[i] = frase[i];
			}
			else {
				ris2[i] = '*';
			}
		}
		ris2[strlen(frase)] = '\0';
		return ris2;
	}
	if (frase == NULL || lettere == NULL) {
		return NULL;
	}
	int num = strlen(frase);
	int num1 = strlen(lettere);
	int n = 1;
	
	char* ris = malloc(n * sizeof(char));
	for (int i = 0; i < num; i++) {
		int prova = 0;
		for (int j = 0; j < num1; j++) {
			if (tolower(frase[i])== lettere[j] || frase[i] == lettere[j] || frase[i] == ' ' || ((frase[i]<97 || frase[i]>122) && (frase[i] < 97 - 32 || frase[i]>122 - 32))) {
				break;
			}
			if (j == num1 - 1) {
				prova = 1;
			}
		}
		if (prova == 1) {
			ris[i] = '*';
			n++;
			ris = realloc(ris, n * sizeof(char));
		}
		else {
			
			ris[i] = frase[i];
			n++;
			ris = realloc(ris, n * sizeof(char));
		}

		
	}
	ris[n-1] = '\0';
	return ris;

}