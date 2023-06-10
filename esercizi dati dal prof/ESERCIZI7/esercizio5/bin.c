#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* args[]) {
	if (argc != 2) {
		return 1;
	}
	int n = atoi(args[1]);
	if (n < 0) {
		return 1;
	}
	int s = n;
	int i = 0 ;
	//trovo la rappresentazione binaria 
	if (n == 0) {
		printf("%i", n);
		return 0;
	}
	while (n != 0) {
		n = n / 2;
		i++;
	}
	int* ris = malloc(i * sizeof(int));
	for (int j = 0; j < i; j++) {
		ris[j] = s % 2;
		s = s / 2;
	}
	//capovolgo le cifre 
	int* ris2 = malloc((i + 1) * sizeof(int));
	int m = i - 1;
	for (int j = 0; j < i; j++) {
		ris2[j] = ris[m];
		printf("%i", ris2[j]);
		m--;

	}
	free(ris);
	

}