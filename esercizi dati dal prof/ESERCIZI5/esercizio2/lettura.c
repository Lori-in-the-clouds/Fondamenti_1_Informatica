#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "lettura.h"
int* leggiinteri(const char* filename, size_t* size)
{
	if (filename == NULL  || size==NULL) {						//controllo
		return NULL;
	}
	FILE* f = fopen(filename, "rb");//apriamo il file
	if (f == NULL) {
		fclose(f);
		return NULL;
	}
	uint32_t dim = 0;
	
	size_t contatore = fread(&dim, sizeof(uint32_t), 1, f);
	if (contatore != 1) {
		fclose(f);
		return NULL;
	}

	int* ris = malloc(dim * sizeof(int));//rs variabile automaaitca 
	if (ris == NULL) {
		fclose(f);
		return NULL;
	}
	size_t letti = fread(ris, sizeof(int), dim, f);
	fclose(f);
	if (letti != dim) {
		free(ris);
		return NULL;
	}
	*size = dim;
	fclose(f);
	return ris;
	
}