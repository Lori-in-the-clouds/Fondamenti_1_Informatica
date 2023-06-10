#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern void quadrati_progressivi(FILE*f,int n);
int main(void) {
	int n = 4;
	char* s = "prova.txt";
	FILE* f = fopen(s, "w");
	if (f == NULL) {
		return NULL;
	}
	quadrati_progressivi(f,n);
	return 0;
}