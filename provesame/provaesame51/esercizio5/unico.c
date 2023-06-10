#include <stdlib.h>
#include "unico.h"
const struct oggetto* unico(const struct carta* c) {
	struct oggetto* ris = malloc(1 * sizeof(struct oggetto));
	
	int contatore = 0;
	for (int i = 0; i < c->n; i++) {
		contatore = 0;
		for (int j = 0; j < c->n; j++) {
			if (i == j) {
				continue;
			}
			if (c->disegni[i].forma != c->disegni[j].forma) {
				contatore++;
			}
		}
		if (contatore == (c->n) - 1) {
			ris->colore = c->disegni[i].colore;
			ris->forma = c->disegni[i].forma;
			return ris;
		}
	}
	//controll colore
	for (int i = 0; i < c->n; i++) {
			contatore = 0;
		for (int j = 0; j < c->n; j++) {
			if (i == j) {
				continue;
			}
			if (c->disegni[i].colore != c->disegni[j].colore) {
				contatore++;
			}
		}
		if (contatore == (c->n) - 1) {
			ris->colore = c->disegni[i].colore;
			ris->forma = c->disegni[i].forma;
			return ris;
		}
	}
	
	
	
	
}