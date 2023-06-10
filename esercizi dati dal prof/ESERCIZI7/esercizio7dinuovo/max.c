#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int main(int args, char *argv[]) {
	if (args == 1 || args == 0) {
		return 1;
	}
	
	
	int i = 1;
	
	int max = atoi(argv[1]);
	
	for(int j=1;j<args;j++) {
		float x = atof(argv[i]);
		if (x -atoi(argv[i])!=0) {
			return 1;

		}
		if (atoi(argv[i]) >= max) {
			  max = atoi(argv[i]);
		}
		i++;
	}
	printf("%i", max);
	return 0;
}