#include "punti.h"
#include <stdlib.h>
#include <math.h>
int trova_piu_lontani(const struct punto3d* punti, size_t n, size_t* p1, size_t* p2) {
	if (n < 2) {
		return 0;
	}
	double dist = 0;
	double max = 0;
	for (int i = 0; i < n; i++) { //ciascuno iniziale
		for (int j = 0; j < n; j++) {
			if (j == i) {
				continue;
			}
		
			dist = sqrt(pow((punti[i].coord[0] - punti[j].coord[0]), 2.) + pow((punti[i].coord[1] - punti[j].coord[1]), 2.) + pow((punti[i].coord[2] - punti[j].coord[2]), 2.));
			if (dist >= max) {
				*p1 = i;
				*p2 = j;
				max = dist;
			}
		}
	}
	return 1;
}