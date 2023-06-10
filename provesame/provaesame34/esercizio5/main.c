#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "matrix.h"
#include <stdlib.h>
int main(void) {
	char* s = "A.txt";
	FILE* f = fopen(s, "r");
	if (f == NULL) {
		return 0;
	}
	struct matrix* a = malloc(1 * sizeof(struct matrix));
	
	a->rows = 0;
	a->cols= 0;
	matrix_read(a, f);
	return 0;
}