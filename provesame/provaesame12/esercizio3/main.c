#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern void croceromana(FILE* f, unsigned char n);
int main(void) {
	char n = 5;
	char* s = "prova.txr";
	FILE* f = fopen(s, "w");
	croceromana(f,n);
	return 0;
}