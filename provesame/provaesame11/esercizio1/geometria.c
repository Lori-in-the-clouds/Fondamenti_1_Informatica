#include <math.h>
struct punto {
	double x, y;
};
void rotazione(struct punto* p, double alfa) {
	double x = p->x;
	double y = p->y;
	p->x = x * cos(alfa) - y * sin(alfa);
	p->y = x* sin(alfa) +  y* cos(alfa);
	
}