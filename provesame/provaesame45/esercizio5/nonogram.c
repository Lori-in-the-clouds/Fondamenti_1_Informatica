#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "nonogram.h"

bool nonogram_load(struct nonogram* ng, const char* filename) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		fclose(f);
		return false;
	}
	fscanf(f, "%i", &ng->n);
	fscanf(f, "%*c");
	ng->schema = malloc(((ng->n * ng->n)+1) * sizeof(char));
	int m = 0;
	int i = 0;
	while(m<ng->n) {
		for (int j = 0; j < ng->n; j++) {
			size_t n = fscanf(f, "%c", &ng->schema[i]);
			i++;
		}
		fscanf(f, "%*c");
		m++;

	
	}
	ng->schema[(ng->n * ng->n)] = '\0';
	fclose(f);
	return true;
}