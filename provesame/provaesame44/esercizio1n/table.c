#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
void print_table(char** colnames, uint8_t ncols, uint8_t nrows) {
	if (ncols == 0 || nrows == 0) {
		return;
	}
	
		for (int i = 0; i < ncols; i++) {
			int num = strlen(colnames[i]);
			fprintf(stdout, "%c%s", '|', colnames[i]);
			int spazi = 9 - num;
			for (int i = 0; i < spazi; i++) {
				fprintf(stdout, "%c", ' ');
			}
		}

		fprintf(stdout, "%c\n", '|');
		for (int i = 0; i < ncols; i++) {
			fprintf(stdout, "%s", "+---------");

		}
		fprintf(stdout, "%c\n", '+');
		for (int r = 0; r < nrows; r++) {
			for (int i = 0; i < ncols; i++) {
				fprintf(stdout, "%s", "|         ");

			}
			fprintf(stdout, "%c\n", '|');
			for (int i = 0; i < ncols; i++) {
				fprintf(stdout, "%s", "+---------");

			}
			fprintf(stdout, "%c\n", '+');


		}
	
}