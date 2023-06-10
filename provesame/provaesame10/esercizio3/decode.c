#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void decode(FILE* f) {
	int n = 1;
	int i = 0;
	char* ris = malloc(n * sizeof(char));
	while (1) {
		size_t turn1 =fscanf(f, "%c", &ris[i]);
		if (turn1 == EOF) {
			break;
		}
		if (ris[i]>=49 && ris[i]<=57) {
			int num = ris[i]-48;
			i++;
			n++;
			ris = realloc(ris, n * sizeof(char));
			fscanf(f, "%c", &ris[i]);
			for (int j = 0; j < num; j++) {
				printf("%c", ris[i]);
			}
		}
		else {
			printf("%c", ris[i]);
			i++;
			n++;
			ris = realloc(ris, n * sizeof(char));
		}
	}
	free(ris);
}