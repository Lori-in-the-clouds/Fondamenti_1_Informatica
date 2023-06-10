#define _CTR_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) { 
	if (argc != 2) {
		return 1;
	}
	size_t contatore = strlen(argv[1]);
	char* ris = malloc((contatore+1) * sizeof(char));
	size_t j = contatore;
	for (size_t i = 0; i <= contatore; i++) {
		ris[j-1] = argv[1][i];
		j--;
	}
	ris[contatore] = '\0';
	printf("%s",ris);
	return 0;
}
