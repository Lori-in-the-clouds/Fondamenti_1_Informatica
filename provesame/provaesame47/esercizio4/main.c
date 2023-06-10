#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "scacchiera.h"
int main(void) {
	
	struct scacchiera* p = malloc(1 * sizeof(char));
	for (int i = 0; i < 64; i++) {
		p[0].caselle[i] = 'a';
	}
	stampa_scacchiera(&(*p));
	return 0;
}