#include "stringhe.h"
#include <string.h>
#include <stdlib.h>

int main(void) {
	char* s = "ciao";
	size_t n = 10;
	zfill(s, n);
	return 0;
}