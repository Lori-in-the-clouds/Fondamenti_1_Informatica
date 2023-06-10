#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
struct dato {
	double valore;
	unsigned int classe;
};
struct dato* read_dati(const char* filename, unsigned int* pn) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	int i = 0;

	while (1) {
		fscanf(f, "%*f\n");
		
		if (fscanf(f, "%*f") == EOF) {
			break;
		}
		i++;
	}
	fclose(f);
	FILE* f1 = fopen(filename, "r");
	if (f1 == NULL) {
		return NULL;
	}

	struct dato* ris = malloc(i * sizeof(double));
	for (int j = 0; j < i; j++) {
		fscanf(f1, "%lf", &((ris[j]).valore));
		fscanf(f1, "%u", &((ris[j]).classe));
	}
	
	fclose(f1);
	*pn = i;
	return ris;
	
}