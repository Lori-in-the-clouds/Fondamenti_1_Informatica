#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "vettori.h"
int main(void) {
	char* s = "vettori1.bin";
	FILE* f = fopen(s, "rb");
	if (f == NULL) {
		return NULL;
	}
	struct vettore* p = malloc(1 * sizeof(struct vettore));
	vettore_leggi(f, p);
	return 0;
}