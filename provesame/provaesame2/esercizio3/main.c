#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include "dati.h"

int main(void) {
	char* s = "dati1.txt";
	unsigned int* pn;
	read_dati(s, &pn);
	return 0;
}