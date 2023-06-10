#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void stampa_quadrato(unsigned int lato) {
	for (int i = 0; i < lato-1; i++) {
		fprintf(stdout, "%c", '*');
	}
		fprintf(stdout, "%c\n", '*');

		for (int i = 0; i < lato - 2; i++) {
			fprintf(stdout, "%c", '*');
			for (int i = 0; i < lato - 2; i++) {
				fprintf(stdout, "%c", ' ');
			}
			fprintf(stdout, "%c\n", '*');
		}
		for (int i = 0; i < lato; i++) {
			fprintf(stdout, "%c", '*');
		}

 }