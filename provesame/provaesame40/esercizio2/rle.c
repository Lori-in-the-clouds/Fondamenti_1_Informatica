#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
extern bool easy_rle_decode(const char* nomefilein, const char* nomefileout) {
	
	FILE* f = fopen(nomefilein, "rb");
	if (f == NULL) {
		return NULL;
	}
	int n = 1;
	int8_t x = 0;
	FILE* g = fopen(nomefileout, "wb");
	if (g == NULL) {
		return NULL;
	}
	char c = 0;
	while (1) {
		size_t turn1 = fread(&x,sizeof(int8_t),1,f);
		if (turn1 != 1) {
			break;
		}
		n++;
		fread(&c,sizeof(char),1,f);
		for (int i = 0; i < x + 1; i++) {
			fwrite(&c, sizeof(char), 1, g);
		}
	}
	fclose(f);
	fclose(g);
	return true;

}