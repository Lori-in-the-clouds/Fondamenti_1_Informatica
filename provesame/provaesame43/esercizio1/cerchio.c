#include <stdbool.h>
#include "cerchio.h"
#include <math.h>
bool nel_cerchio(const struct punto* p, const struct cerchio* c) {
 //distanza tra il centro e p
	if (p == NULL || c == NULL) {
		return NULL;
	}
	double dist = sqrt(((c->x - p->x) * (c->x - p->x)) + ((c->y - p->y) * (c->y - p->y)));
	if (dist <= c->r) {
		return true;
	}
	else {
		return false;
	}

}