#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "product.h"
void write_products(FILE* f, const struct product* list, size_t n) {
	
	fprintf(f, "%c\n", '[');
	if (n == 0) {
		fprintf(f, "%c\n", ']');
		exit(EXIT_SUCCESS);
	}
	for (int i = 0; i < n; i++) {
		
		fprintf(f, "\t%c\n", '{');
		fprintf(f, "\t\t%c%s%c%s%c%s%c%c\n", '"', "productId", '"', ": ", '"', list[i].productId, '"', ',');
		fprintf(f, "\t\t%c%s%c%s%c%s%c%c\n", '"', "fullName", '"', ": ", '"', list[i].fullName, '"', ',');
		fprintf(f, "\t\t%c%s%c%s%i\n", '"', "price", '"', ": ", list[i].price);
		if (i == n - 1) {
			fprintf(f, "\t%c\n%c", '}', ']');
			break;
		}
		fprintf(f, "\t%s\n", "},");
		
	}
}