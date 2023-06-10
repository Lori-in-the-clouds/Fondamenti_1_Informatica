#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h> 
#include <stdio.h>
#include <stdlib.h>
#include "tirocini.h"
int main(void) {
	char* s = "input1.txt";
	FILE* f = fopen(s, "rt");
	if (f == NULL) {
		return NULL;
	}
	struct tirocinio* p = malloc(1 * sizeof(struct tirocinio));
	tirocinio_load(f, &p);
	return 0;
}