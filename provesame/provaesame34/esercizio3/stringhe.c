#include <stdlib.h>
#include <string.h>
char* parola_piu_lunga(const char* sz) {
	if (sz == NULL) {
		return NULL;
	}
	int max = 0;
	int i = 0;
	int n = 1;
	int cont = 0;
	int j = 0;
	char* ris = malloc(1 * sizeof(char));
	char* prova = malloc(n * sizeof(char));
	while (1) {
		if (sz[i] == '\0') {
			break;
		}
		if (sz[i] == ' ') {
			i++;
			continue;
		}
		while (sz[i] != ' ' && i<strlen(sz)) {
			
			cont++;
			prova[j] = sz[i];
			i++;
			j++;
			n++;
			prova = realloc(prova, n * sizeof(char));
		}
		
		j = 0;
		if (cont > max) {
			 ris = realloc(ris,n * sizeof(char));
			 max = cont;
			for (int i = 0; i < cont; i++) {
				ris[i] = prova[i];
			}
			ris[n - 1] = '\0';
		}

		
		n = 1;
		cont = 0;
		

	}
	free(prova);
	
	return ris;

}