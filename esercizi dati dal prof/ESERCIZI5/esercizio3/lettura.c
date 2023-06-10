#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* leggiinteri2(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	
	int m =0;
	int sca =0;
	while(fread(&sca,sizeof(int), 1, f) != EOF) {
		m++;
	}
	int* ris = malloc(m * sizeof(int));
	fread(&ris, sizeof(int), m, f);
	ris[m] = '\0';
}