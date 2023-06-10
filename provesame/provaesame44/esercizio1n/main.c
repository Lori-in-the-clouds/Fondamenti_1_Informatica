#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
extern void print_table(char** colnames, uint8_t ncols, uint8_t nrows);
int main(void) {
	char* *ciao = malloc(4 * sizeof(char));
	ciao[0] = "cat";
	ciao[1] = "dog";
	ciao[2] = "deer";
	ciao[3] = "frog";
	size_t ncols = 4;
	size_t nrows = 2;
	print_table(&(*ciao), ncols, nrows);
	return 0;
}