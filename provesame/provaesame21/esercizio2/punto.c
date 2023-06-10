#include <stdlib.h>
#include <math.h>
#include "punto.h"
int scala_punto(struct punto* p, const struct immagine* img, const struct immagine* img_new) {
	if (p == NULL || img_new == NULL || img == NULL) {
		return -1;
	}
	if ((p->x) > (img->w) || (p->y) > (img->h)) {
		return -1;
	}
	size_t xold = p->x;
	size_t yold = p->y;
	p->x = round( xold *((double)img_new->w / img->w));
	p->y = round( yold *((double)img_new->h / img->h));
	return 0;
}