#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "vettori.h"
#include <stdint.h>
int vettore_leggi(FILE* f, struct vettore* v) {
	
	size_t turn1 = fread(&v->size, sizeof(uint8_t), 1, f);
	if (turn1 == 0) {
		return 0;
	}
	v->data = malloc((v->size) * sizeof(double));
	for (int i = 0; i < v->size; i++) {
		 turn1 = fread(&v->data[i], sizeof(uint64_t), 1, f);
		 if (turn1 == 0) {
			 return 0;
		 }

	}
	return 1;
}