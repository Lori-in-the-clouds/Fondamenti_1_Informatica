#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "scacchiera.h"


void stampa_scacchiera(const struct scacchiera* sc) {

	//riga tabella
	for (int i = 0; i <= 8; i++) {
		printf("%c", '+');
		if (i == 8) {
			printf("%c\n", ' ');
			break;
		}
		printf("%s", "---");
	}

	//inserisci i pezzi
	int m = 0;
	for (int j = 8; j!=0; j--) {
		for (int i = 7-m; i <= 63-m; i += 8) {
			printf("%s%c%c", "| ", sc[0].caselle[(i)], ' ');
		}
		printf("%s\n", "|");
		m++;
		for (int i = 0; i <= 8; i++) {
			printf("%c", '+');
			if (i == 8) {
				printf("%c\n", ' ');
				break;
			}
			printf("%s", "---");
		}
	}
	
	
	


}