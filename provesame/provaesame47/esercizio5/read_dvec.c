#define _CRT_SECURE_NO_WARNINGS
#include "read_dvec.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>
struct dvec* read_dvec_comp(const char* filename) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	
	
	short m = 0;
	int i = 0;
	while (1) {
		//p->d = realloc(p->d, (1 + i) * sizeof(double));
		//d = realloc(d, (1 + i) * sizeof(short));
		size_t n = fread(&m, sizeof(short), 1, f);
		if (m == 0) {
			return NULL;
		}
		//p->d[i] = d[i];
		if (n != 1) {
			break;
		}
		i++;
	}
	fclose(f);
	FILE* s = fopen(filename, "rb");
	if (s == NULL) {
		return NULL;
	}
	
	struct dvec* p = malloc(i * sizeof(double));
	p->n = i;
	//short* d = malloc(1 * sizeof(short));
	p->d = malloc(i * sizeof(double));
	for (int j = 0; j < i; j++) {
		fread(&m, sizeof(short), 1, s);
		p[0].d[i] = m/ pow(2,14);
	}
	fclose(f);
	return p;

}
