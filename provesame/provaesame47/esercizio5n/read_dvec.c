#define _CRT_SECURE_NO_WARNINGS
#include "read_dvec.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
struct dvec* read_dvec_comp(const char* filename) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return 0;
	}
	struct dvec* p = malloc(2 * sizeof(short));
	short d = 0;
	fread(&d, sizeof(short), 1, f);
}