#include <string.h>
#include <stdlib.h>
char* rimuovi_singoli_spazi(const char* s) {
	int num = strlen(s);
	int spsingoli = 0;
	if (s == "") {
		return NULL;
	}
	if (s == " ") {
		return "";
	}
	for (int i = 0; i < num; i++) {
		
		if (s[i-1]!=' ' && s[i] == ' ' && s[i + 1] != ' ') {
			spsingoli++;
			
		}
	}
	
	char* ris = malloc(((num - spsingoli)+1) * sizeof(char));
	int m = 0;
	for (int i = 0; i < num - spsingoli; i++) {
		
			if ( (s[m - 1] != ' ' && s[m] == ' ' && s[m + 1] != ' ')) {
				ris[i] = s[m + 1];
				m += 2;
				continue;
			}
			ris[i] = s[m];
			m++;
	}
	ris[num - spsingoli] = '\0';
	
	return ris;
}