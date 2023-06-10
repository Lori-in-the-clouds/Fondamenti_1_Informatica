#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include "vec_double.h"
#include <stdlib.h>
#include <math.h>
struct vec_double* read_vec_double(const char* filename) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	int32_t num = 0;
	size_t c =fread(&num, sizeof(uint32_t), 1, f); 
	int32_t x = fabs(ceil(num));
	if (c == 0) {
		return NULL;
	}
	struct vec_double* p = malloc(1 * sizeof(struct vec_double));
	p->size = c;
	p->data = malloc(1 * sizeof(double));
	int n = 1;
	for (int i = 0; i < num; i++) {
		size_t turn2 =fread(&p->data[i], sizeof(double),1,f);
		n++;
		p->data = realloc(p->data, n * sizeof(double));
		if (turn2 == 0) {
			free(p);
			return NULL;
		}
	}
	return p;
}