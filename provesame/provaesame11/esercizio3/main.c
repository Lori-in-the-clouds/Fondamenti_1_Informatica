#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern void capsula(FILE* f, unsigned char n);
int main(void) {
	char* s = "prova.txt";
	FILE* f = fopen(s, "w");
	if (f == NULL) {
		return NULL;
	}
	unsigned char n = 4;
	capsula(f, n);
	return 0;
}
