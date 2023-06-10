#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "nonogram.h"
int main(void) {
	char* s = "nonogram1.txt";
	struct nonogram p;
	p.n = 0;
	p.schema = "";
	nonogram_load(&p, s);
	return 0;
}