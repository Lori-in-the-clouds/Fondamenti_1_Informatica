#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char* args[]) {
	if (argc != 2) {
		return 1;
	}
	int n = atoi(args[1]);
	if (n < 0) {
		return 1;
	}
	
	int num = n;
	while (num / 10 != 0) {
		//conto quante cifre ha il numero 
		int r = 1;
		while (1) {

			int ris = num / pow(10., r);
			if (ris == 0) {
				break;
			}
			r++;

		}
		//isolo ciascun cifra e la sommo
		int j = 1;
		int somma = 0;
		for (int i = 0; i < r; i++) {
			int s =(num / j) % 10;
			somma = somma + s;
			j *= 10;

		}
		num = somma;

	}
	printf("%i", num);
	return 0;
}