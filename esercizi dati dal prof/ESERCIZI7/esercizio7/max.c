#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* args[]) {
	int max = 0;
	if (argc == 0 || argc == 1) {
		return 1;
	}
	double* ris = malloc((argc-1) * sizeof(double));
	for (int i = 0; i < argc - 1; i++) {
		ris[i] = atof(args[i + 1]);
	}
	for (int i = 0; i < argc - 1; i++) {
		if (((double)ris[i]) - ((int)ris[i]) != 0) {
			return 1;
	}
	}

	//cerco il massimo
	int j = 0;
	max = ris[0];
	for(int i = 0; i<argc-2;i++) {
		if (max < ris[j + 1]) {
			int s = j;
			max = ris[s + 1];
			
		}
		j++;
	}
	printf("%i", (int)max);
	return 0;
}