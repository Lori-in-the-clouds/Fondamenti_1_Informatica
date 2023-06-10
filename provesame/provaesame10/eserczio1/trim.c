#include <string.h>
#include <stdlib.h>
char* trim(const char* s) {
	if (s == NULL) {
		return NULL;
	}
	int num = strlen(s);
	int inizio = 0;
	int fine = num-1;
	int contatore = 0;
	int contatore1 = 0;
	int n = 1;
	int m = 0;

	
		if (s[0] == ' ') {
			while (s[inizio] == ' ') {
				inizio++;
				contatore++;
			}

		}
		if (s[fine] == ' ') {
			while (s[fine] == ' ') {
				fine--;
				contatore++;
				contatore1++;
			}
		}
		char* ris = malloc((num+1-contatore) * sizeof(char));
		
		for (int i = inizio; i < num-contatore1; i++) {
			ris[m] = s[i];
			m++;
		}
		ris[num - contatore] = '\0';
		
		return ris;

}