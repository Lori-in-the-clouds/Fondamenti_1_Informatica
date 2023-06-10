#include "punti.h"
#include <stdlib.h>
int main(void) {
	struct punto3d* p = malloc(3 * sizeof(struct punto3d));
	size_t n = 3;
	p[0].coord[0] = 4;
	p[0].coord[1] = 4;
	p[0].coord[2] = 4;

	p[1].coord[0] = 5;
	p[1].coord[1] = 5;
	p[1].coord[2] = 5;

	p[2].coord[0] = 6;
	p[2].coord[1] = 6;
	p[2].coord[2] = 6;
	
	size_t* p1 = malloc(1 * sizeof(size_t));
	size_t* p2 = malloc(1 * sizeof(size_t));
	trova_piu_lontani(p, n, p1, p2);
	return 0;
}