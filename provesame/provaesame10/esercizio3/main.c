#define _CRT_SECURE_NO_WARNINGS
#include "decode.h"
#include <stdio.h>
int main(void) {
	char* s = "prova.txt";
	FILE* f = fopen(s, "r");
	decode(f);
	return 0;
}