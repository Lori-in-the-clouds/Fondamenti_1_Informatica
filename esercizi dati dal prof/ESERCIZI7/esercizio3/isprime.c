#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	int n = atoi(argv[1]);
	if (n < 0) {
		return 1;
	}
	size_t div = 2;
	char* tru = "true";
	char* fal = "false";
	
	if (n == 0 || n == 1) {
		printf("%s", fal);
		return 0;
	}
	for (int i=0; i < n;i++) {
		
		if (n == 2) {
			printf("%s", tru);
			return 0;
		}
		if ((n % div) == 0) {
			printf("%s", fal);
			return 0;
		}
		div++;
		if (div == n) {
			break;
		}
	}
	printf("%s", tru);
	return 0;

}