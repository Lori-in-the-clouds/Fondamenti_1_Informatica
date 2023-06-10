#include <stdlib.h>
#include "rectangle.h"
#include <math.h>
int main(void) {
	struct rect *p= malloc(2*sizeof(struct rect));
	p[0].a.x = 0;
	p[0].a.y = 1;
	p[0].b.x = 4;
	p[0].b.y = -1;
	
	p[1].a.x = 3;
	p[1].a.y = 5;
	p[1].b.x = -3;
	p[1].b.y = 10;
	find_largest(&(*p), 2);
	return 0;
}