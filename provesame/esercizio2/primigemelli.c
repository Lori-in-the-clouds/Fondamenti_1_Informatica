#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
extern bool primigemelli(uint32_t start, uint32_t* x, uint32_t* y) {
	if (start == 0) {
		x = 1;
		x = 3;
		return true;
	}
	uint32_t sostituto = start;
	int n = 2;
	int i = 0;
	int contatore = 0;
	int* ris = malloc(1 * sizeof(int));
	int eprimo = 0;

	
		//controllo se start  � primo
		int div = 2;
		while (div!=start) {
			if (start % div == 0) {
				contatore++;
			}
			div++;
		}
		if (contatore == 0) {
			ris[i] = start;
			i++;
			n++;
			ris = realloc(ris,n * sizeof(int));
			eprimo++;
		}
		int j = 0;
		int k = start;
		if (eprimo = 0) {
			k++;
			j++;
		}
		int contatorez = 0;
		while (contatorez != 2-j) {
			contatore = 0;
			int div = 2;
			while (div != k) {
				if (k % div == 0) {
					contatore++;
				}
				div++;
			}
			if (contatore == 0) {
				ris[i] = k;
				i++;
				n++;
				ris = realloc(ris, n * sizeof(int));
				if (i == 1) {
					contatorez++;
				}
				else {
					contatorez++;
				}
			}
			k++;
		}
		if (eprimo == 0) {
			if (fabs(ris[0] - ris[1])==2) {
				x == ris[0];
				y == ris[1];

				return true;
			}
			else {
				return false;
			}
		}
		if (eprimo == 1) {
			if (ris[0] - ris[1] == 2) {
				x == ris[0];
				y == ris[1];

				return true;
			}
			else {
				return false;
			}
		}

	}
