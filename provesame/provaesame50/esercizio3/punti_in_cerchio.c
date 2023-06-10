#include <stdlib.h>
#include <math.h>
#include "punti_in_cerchio.h"
struct punto* punti_in_cerchio(const struct punto* p, size_t n, double r, size_t* count) {
	if (p == NULL) {
		return NULL;
	}
	double dist = 0;
	int t = 0;
	int m = 0;
	int j = 0;
	struct punto* a = malloc(1 * sizeof(struct punto));
	for (int i = 0; i < n; i++) {
		double totx = p[i].x * p[i].x;
		double toty = p[i].y * p[i].y;
		dist = sqrt(totx+toty);
		if (dist <= r) {
			a[j].x = p[i].x;
			a[j].y = p[i].y;
			t++;
			j++;
			a = realloc(a, t*sizeof(struct punto));
			
			m++;
		}
	}
	*count = m;
	if (t == 0) {
		return NULL;
	}
	return a;
}