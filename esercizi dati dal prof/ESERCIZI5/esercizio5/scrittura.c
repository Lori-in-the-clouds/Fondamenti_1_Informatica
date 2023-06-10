#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int scrivimaiuscolo(const char* filename) {
	FILE* f = fopen(filename, "r");
	char* v = NULL;
	size_t i = 0;
	if (f == NULL) {
		return 0;
		}
	
	while (1) {
		char d;
		int res = fscanf(f, "%c", &d);
		if (res != 1) {
			break;
		}
		
		i++;
		v = realloc(v, (i) * sizeof(char));
		v[i - 1] = toupper(d);
	}
	v[i] = '\0';
	fprintf(stdout, "%s", v);
	fclose(f);
	return 1;

}