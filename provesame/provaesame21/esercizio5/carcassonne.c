#include <stdlib.h>
#include <stdbool.h>
#include "carcassonne.h";

bool controlla_casella(const struct casella* c, const struct casella* tabellone, size_t dim) {
	//(tabellone[0]).lati[0];

   //controllo che non ci sia nessuna casella dove metto la mia
	for (int i = 0; i < dim; i++) {
		if (c->x == tabellone[i].x && c->y == tabellone[i].y) {
			return false;
		}
	}
	//controllo che ci sia almeno uno adiacente 
	for (int i = 0; i < dim; i++) {
		if (c->x == tabellone[i].x || c->y == tabellone[i].y) {
			if (c->x == tabellone[i].x + 1 || c->x == tabellone[i].x - 1 || c->y == tabellone[i].y + 1 || c->y == tabellone[i].y - 1) {
				//ok;
				break;
			}
			else {
				return false;
			}
			
		}
		return false;
		
	}
	//controllo l'orientamento
	for (int i = 0; i < dim; i++) {
		if (c->x == tabellone[0].x || c->y == tabellone[0].y) {
			if (c->x == tabellone[i].x + 1 || c->x == tabellone[i].x - 1 || c->y == tabellone[i].y + 1 || c->y == tabellone[i].y - 1) {
				//controllo i vari casi tra gli adiacenti:
				//primo caso in verticale
				if (c->y == tabellone[i].y + 1 && c->x == tabellone[i].x) {
					if (c->lati[2] != (tabellone[i]).lati[0]) {
						return false;
					}

				}
				//secondo caso in verticale
				if (c->y == tabellone[i].y - 1 && c->x == tabellone[i].x) {
					if (c->lati[0] != (tabellone[i]).lati[2]) {
						return false;
					}
				}
				//terzo caso in orizzontale
				if (c->x == tabellone[i].x - 1 && c->y == tabellone[i].y) {
					if (c->lati[1] != (tabellone[i]).lati[3]) {
						return false;
					}
				}
				//quarto caso in orizzontale
				if (c->x == tabellone[i].x + 1 && c->y == tabellone[i].y) {
					if (c->lati[3] != (tabellone[i]).lati[1]) {
						return false;
					}
				}

			}
		}

	}
	return true;
}