#include <string.h>
#include <stdlib.h>
void elimina_consecutivi(char* str) {
	if (str == NULL) {
		return;
	}
	
	
	char* ris = malloc(1 * sizeof(char));
	int n = 1;
	int num1 = strlen(str);
	int j = 0;
	for (int i = 0; i < num1; i++) {
		if (str[i] == str[i + 1]) {
			ris[j] = str[i];
			j++;
			n++;
			ris = realloc(ris, n * sizeof(char));
			while (str[i] == str[i + 1]) {
				
				i++;
			}
			continue;
		}
		ris[j] = str[i];
		j++;
		n++;
		ris = realloc(ris, n * sizeof(char));

	}
	ris[n-1] = '\0';
	
	/*str = malloc(n * sizeof(char));*/
	for (int j = 0; j < n; j++) {
		str[j] = ris[j];
	}
	free(ris);
}