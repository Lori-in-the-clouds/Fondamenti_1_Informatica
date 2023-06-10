#define  CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void stampa_cornicetta(const char* s) {
	size_t n = strlen(s);
	//prima riga	
	fprintf(stdout, "\/-");	
	for (size_t i = 0; i < n; i++) {
		fprintf(stdout, "-");
	}
	fprintf(stdout, "-\\\n");
	//seconda riga 
	fprintf(stdout, "| ");
	fprintf(stdout, "%s ",s);
	fprintf(stdout, "|\n");
	//terza riga
	fprintf(stdout, "\\-");
	for (size_t i = 0; i < n; i++) {
		fprintf(stdout, "-");
	}
	fprintf(stdout, "-/\n");
}