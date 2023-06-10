#include <stdlib.h>
#include "rectangle.h"
#include <math.h>
int find_largest(const struct rect* r, size_t n) {
	if (r == NULL || n == 0) {
		return  -1;
	}

	//trovo il terzo punto 
	struct point c;
	double lato1 = 0;
	double lato2 = 0;
	double max = 0;
	int ris;
	
	for (int i = 0; i < n; i++) {
		
		struct point c;
		c.x = 0;
		c.y = 0;
		if (r[i].a.y >= r[i].b.y) {
			c.x = r[i].a.x;
			c.y = r[i].b.y;
			lato1 = fabs(sqrt(((r[i].a.x - c.x) * (r[i].a.x - c.x)) + ((r[i].a.y - c.y) * (r[i].a.y - c.y))));
			lato2 = fabs(sqrt(((r[i].b.x - c.x) * (r[i].b.x - c.x)) + ((r[i].b.y - c.y) * (r[i].b.y - c.y))));
		}
		if (r[i].a.y < r[i].b.y) {
			c.x = r[i].b.x;
			c.y = r[i].a.y;
			lato1 = fabs(sqrt(((r[i].b.x - c.x) * (r[i].b.x - c.x)) + ((r[i].b.y - c.y) * (r[i].b.y - c.y))));
			lato2 = fabs(sqrt(((r[i].a.x - c.x) * (r[i].a.x - c.x)) + ((r[i].a.y - c.y) * (r[i].a.y - c.y))));
		}
		double area = lato1 * lato2;
		
		if (area > max) {
			max = area;
			ris = i;
		}
		
	}
	return ris;
	
	



}