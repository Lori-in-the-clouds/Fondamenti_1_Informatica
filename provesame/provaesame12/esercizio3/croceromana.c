#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void croceromana(FILE* f, unsigned char n) {
	//spazi iniziali
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n * 2; i++) {
			fprintf(stdout, "%c", ' ');
		}
		fprintf(stdout, "%c\n", '|');
	}
	//braccio orizzontale
	for (int j = 0; j < 1; j++) {
		for (int i = 0; i < n * 2; i++) {
			fprintf(stdout, "%c", '-');
		}
		fprintf(stdout, "%c", '+');
	}
	for (int i = 0; i < n * 2; i++) {
		fprintf(stdout, "%c", '-');
	}
	
		fprintf(stdout, "\n");
	
	//parteinferiore
	for (int j = 0; j < 2*n; j++) {
		for (int i = 0; i < n * 2; i++) {
			fprintf(stdout, "%c", ' ');
		}
		fprintf(stdout, "%c\n", '|');
	}

}