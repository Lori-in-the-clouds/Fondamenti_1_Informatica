#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "product.h"
int main(void) {
	char* s = "prova.txt";
	FILE* f = fopen(s, "w");
	if (f == NULL) {
		return 0;
	}
	struct product* p = malloc(3 * sizeof(char));
	p[0].productId = "289347";
	p[0].fullName = "Pizza Margherita";
	p[0].price = 5;

	p[1].productId = "289347";
	p[1].fullName = "Pizza Margherita";
	p[1].price = 5;

	p[2].productId = "289347";
	p[2].fullName = "Pizza Margherita";
	p[2].price = 5;
	size_t n = 0;
	write_products(f, &(*p), n);
	fclose(f);
	return 0;
}