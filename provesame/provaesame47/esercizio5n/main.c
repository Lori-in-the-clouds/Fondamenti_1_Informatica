#define _CRT_SECURE_NO_WARNINGS
#include "read_dvec.h"
#include <stdlib.h>
#include <stdio.h>
int main(void) {
	char* s = "prova.txt";

	read_dvec_comp(s);
	fclose(s);
	return 0;
}