#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "readperson.h"

int main(void) {
	FILE* f = fopen("prova.txt", "r");
	if (f == NULL) {
		return 0;
	}
	struct person p;
	person_read(f, &p);
	return 0;



}
