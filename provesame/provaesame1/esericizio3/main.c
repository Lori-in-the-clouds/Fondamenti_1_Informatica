#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "countteenager.h"
int main(void) {
	FILE* f = fopen("prova.txt", "r");
	if (f == NULL) {
		return 0;
	}
	count_teenagers(f);
	return 0;
}