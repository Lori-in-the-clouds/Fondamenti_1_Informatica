#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
void stampa_a(uint8_t n) {
	if (n % 2 == 0 || n < 3) {
		return;
	}
	int m = n;
	int contatore = 0;
	int k = 0;
	for (int r = 0; r < n; r++) {
		
		for (int i = 0; i < m - 1; i++) {
			printf("%c", ' ');
		}
		printf("%c", '/');
		m--;
		if (r == n / 2) {
			for (int j = 0; j < k * 2; j++) {
				printf("%c", '-');
			}
		}
		else {
			for (int j = 0; j < k * 2; j++) {
				printf("%c", ' ');
			}
		}
		k++;
		printf("%c\n", '\\');

	}
}