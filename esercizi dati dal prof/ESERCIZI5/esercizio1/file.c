#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
bool scrivi_intero(const char* filename, int i) {
		FILE* f = fopen(filename, "wb");
		if (f== NULL) {
			return false;

		}
		else {
			fprintf(f, "%i", i);
			fclose(f);
			return true;
		}
}