#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "compress.h"
int dati_read(const char* filename, struct dati* d) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return 0;
	}
	int i = 0;
	int n = 1;
	d->vals = malloc(1*sizeof(int));
	uint8_t* x = malloc(1 * sizeof(uint8_t));
	int8_t* b = malloc(1 * sizeof(int8_t));
	int16_t *c = malloc(1 * sizeof(int16_t));
	d->len = 0;
	
	while (1) {
		size_t turn1 = fread(&x[0], sizeof(uint8_t), 1, f);
		if (turn1 != 1) {
			fclose(f);
			break;
		}
		if (x[0] == 1) {
			fread(&b[0], sizeof(int8_t), 1, f);
			d->vals[i] = b[0];
			i++;
			n++;
			d->vals = realloc(d->vals, n * sizeof(int));
		} 
		if (x[0] == 2) {
			fread(&c[0], sizeof(int16_t), 1, f);
			d->vals[i] = c[0];
			i++;
			n++;
			d->vals = realloc(d->vals, n * sizeof(int));
		}
		if (x[0] == 4) {
			fread(&d->vals[i], sizeof(int32_t), 1, f);
			i++;
			n++;
			d->vals = realloc(d->vals, n * sizeof(int));
		}
		d->len++;

	}
	free(x);
	free(b);
	free(c);
	return d->len;

}