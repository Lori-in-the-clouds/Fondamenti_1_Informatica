#include <stdlib.h>
#include "punti_in_cerchio.h"
int main(void) {
	struct punto *p = malloc(3 * sizeof(struct punto));
	p[0].x = 5;
	p[0].y = 1;

	p[1].x = 4;
	p[1].y = 3.7;

	p[2].x = 6.3;
	p[2].y = 8;
	double r = 6.0;
	size_t count = 0;
	punti_in_cerchio(p, 3, r, &count);
	return 0;
}