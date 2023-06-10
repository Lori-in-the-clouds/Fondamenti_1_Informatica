#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
char* title(const char* str) {
	if (str == NULL) {
		return NULL;
	}
	int num = strlen(str);
	bool controllo = false;
	char* ris = malloc((num+1) * sizeof(char));
	int i = 0;
	if (str[0] != ' ') {
		ris[0] = toupper(str[0]);
		i++;
	}
	for ( i; i < num; i++) {
		if (str[i] == ' ') {
			ris[i] = str[i];
			controllo = true;
			continue;
		}
		if (controllo == true) {
			ris[i] = toupper(str[i]);
			controllo = false;
			continue;
		}
		ris[i] = str[i];
	}
	ris[num] = '\0';

	return ris;

}