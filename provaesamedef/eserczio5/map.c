#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "map.h"
#include <stdbool.h>
struct connections* load_connections(const char* filename) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	int* x = malloc(1 * sizeof(int));

	size_t turn1 = fscanf(f, "%i", &x);

	struct connections* p = malloc(1 * sizeof(struct connections));
	for (size_t r = 0; r < x[0]; r++) {
		for (size_t c = 0; c < x[0]; c++) {
			
		}
	}
	
}