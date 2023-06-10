#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "audio.h"
#include <stdio.h>
#include <stdint.h>
int audio_read(const char* filename, struct audio* a) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return 0;
	}
	int n = 1;
	a->samples = 0;
	int contatore = 0;
	a->left = calloc(n,sizeof(uint16_t));
	a->right = calloc(n,sizeof(uint16_t));
	int i = 0;
	while (1) {
		size_t turn1 = fread(&a->left[i], sizeof(uint16_t), 1, f);
		if (turn1 == 0) {
			fclose(f);
			break;
		}
		n++;
		a->left = realloc(a->left, (n) * sizeof(uint16_t));
		fread(&a->right[i], sizeof(uint16_t), 1, f);
		a->right = realloc(a->right, (n) * sizeof(uint16_t));
		i++;
		a->samples++;
	}
	
	return 1;
	
}