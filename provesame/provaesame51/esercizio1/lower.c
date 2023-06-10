#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	FILE* f = fopen(argv[1], "r");
	if (f == NULL) {
		return 1;
	}
	char c = 0;
	while (1) {
		size_t turn1 = fscanf(f, "%c", &c);
		if (c >= 65 && c <= 90) {
			printf("%c", c + 32);
		}
		else if (turn1 == EOF) {
			fclose(f);
			return 0;
		}
		else {
			printf("%c", c);
		}

	}

	
}