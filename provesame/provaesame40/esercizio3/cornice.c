#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>

void cornice(uint8_t h, uint8_t w) {
	if (h == 0 || w == 0) {
		return;
	}
	int contatore = 0;
	for (int i = 0; i < w-1; i++) {
		printf("%s", "/-\\|");
		contatore++;
	}
	printf("%s", "/-\\\n");
	


	for (int j = 0; j < h-1; j++) {
		printf("%s", "|");
		//_______________________
		for (int i = 0; i < (contatore*4+1);i++) {
			printf("%c", ' ');
		}

			printf("%c\n", '|');
		//________________________
		printf("%c", '\\');
		//_________________________
		for (int i = 0; i < (contatore * 4 + 1); i++) {
			printf("%c", ' ');
		}

		printf("%c\n", '/');
		//________________________
		printf("%c",'-');
		//_______________________
		for (int i = 0; i < (contatore * 4 + 1); i++) {
			printf("%c", ' ');
		}

		printf("%c\n", '-');
		//______________________
		printf("%c", '/');
		//___________________;;
		for (int i = 0; i < (contatore * 4 + 1); i++) {
			printf("%c", ' ');
		}

		printf("%c\n", '\\');
	}

	printf("%s", "|");
	//_______________________
	for (int i = 0; i < (contatore * 4 + 1); i++) {
		printf("%c", ' ');
	}

	printf("%c\n", '|');
	for (int i = 0; i < w - 1; i++) {
		printf("%s", "/-\\|");
		contatore++;
	}
	printf("%s", "/-\\\n");
}