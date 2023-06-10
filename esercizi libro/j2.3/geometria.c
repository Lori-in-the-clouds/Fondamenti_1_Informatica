#include <math.h>
#include "liberia.h"
void rotazione(struct punto* p, double alfa) { 
	struct punto s;
	s.x = (p->x * cos(alfa)) - (p->y * sin(alfa)) ;
	s.y = (p->x * sin(alfa)) - (p->y * cos(alfa));

}