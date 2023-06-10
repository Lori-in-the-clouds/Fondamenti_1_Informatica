#include <string.h>
#include <stdlib.h>

char* leggi_nome_sito(const char* url) {
	int j = 0;
	for (int i = 7; i < strlen(url); i++) {
		if (url[i] != '/') {
			j++;
		}
		if (url[i] == '/') {
			break;
		}
		
	}

	char* ris = malloc((j +1/*1*/) * sizeof(char));

	for (int i = 0; i < j; i++) {
		ris[i] = url[i + 7];
	}
	ris[j] = '\0';
	
	return ris;
}