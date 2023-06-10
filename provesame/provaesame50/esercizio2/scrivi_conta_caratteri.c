#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
#include <string.h>
int scrivi_conta_caratteri(FILE* f, const char* s) {
	if (f == NULL || s == NULL) {
		return NULL;
	}
	
	int num = strlen(s);
	size_t turn1 = fprintf(f, "%s", s);
		if (turn1 == 0) {
			return 0;
		}
		fprintf(f, "\n");
	int n = 1;
	for (int j = 0; j < num; j++) {
		
		fprintf(f, "%i", n);
		
		if (n == 9) {
			n = -1;
		}
		n++;
		
	}
	fprintf(f, "\n");
	return num;
}