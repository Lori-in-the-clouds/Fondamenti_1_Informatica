#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "compress.h"
int main(void) {
	char* s = "dati1 (2).bin";
	struct dati a;
	dati_read(s, &a);
	return 0;
}