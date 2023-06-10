#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include "images.h"
#include <stdio.h>
#include <string.h>
struct image* read_images(const char* filename, size_t* n) {
	FILE* f = fopen(filename,"rt");
	if (f == NULL) {
		return NULL;
	}
	int m = 1;
	struct image* p = malloc(m* sizeof(struct image));
	int i = 0;
	
	while (1) {
		size_t turn1 = fscanf(f, "\n%[^':']s", &p[i].name);
		int num = strlen(p[i].name);
		p[i].name[num] = '\0';
		if (turn1 != 1) {
			if (i == 0) {
				return NULL;
			}
			break;
		}
		fscanf(f, "%*c");
		fscanf(f, "%zu",&p[i].height);
		size_t prova = fscanf(f, "%*c");
		fscanf(f, "%zu",&p[i].width);
		
		i++;
		m++;
		p = realloc(p, m * sizeof(struct image));
	}
	*n = i;
	fclose(f);
	return p;
}