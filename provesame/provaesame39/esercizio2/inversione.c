#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
bool inverti_case(const char* nomefilein, const char* nomefileout) {
	FILE* f = fopen(nomefilein, "r");
	if (f == NULL) {
		return false;
	}
	FILE* g = fopen(nomefileout, "w");
	if (g == NULL) {
		return false;
	}
	while (1) {
		char c = 0;
		size_t turn1 = fscanf(f, "%c",&c);
		if (turn1 != 1) {
			break;
		}
		if (c >= 97 && c <= 122) {
			c = toupper(c);
		}
		else if (c >= 65 && c <= 90) {
			c =tolower(c);
		}
		fprintf(g, "%c", c);

	}
	fclose(f);
	fclose(g);
	return true;
}