#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "lettura.h"

int main(void) {
	const char* nomefile = "nomefile.txt";
	size_t size;
	double* soluzione = leggidouble(nomefile, &size);
	return 0;
}