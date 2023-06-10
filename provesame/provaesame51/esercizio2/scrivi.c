#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void scrivi_v(FILE* f, uint8_t n) {
	if (f == NULL) {
		return;
	}
	if (n == 0) {
		
		return;
	}
	int spazi = n+2;
	int iniziali = 0;
	int righe = 1;
	if (n == 0) {
		fprintf(f, "%c",'\\');
		fprintf(f, "%c", '/');
		
		return;
	}
	while (righe!=n) {
		for (int j = 0; j < iniziali; j++) {
			fprintf(f, "%c", ' ');
		
		}
		iniziali++;
		fprintf(f, "%c", '\\');
		for (int i = 0; i < spazi; i++) {
			fprintf(f, "%c", ' ');
		}
		spazi -= 2;
		fprintf(f, "%c\n", '/');

		righe++;

	}
	
	return;
}