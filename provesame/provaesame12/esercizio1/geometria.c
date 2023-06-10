#include <math.h>
struct punto {
	double x, y;
};

extern double distanza(struct punto* a, struct punto* b) {
	double dist = sqrt(((a->x - b->x) * (a->x - b->x)) + ((a->y - b->y) * (a->y - b->y)));
	return dist;
}