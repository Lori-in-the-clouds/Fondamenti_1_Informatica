#include <stdint.h>
#include "angoli.h"
int main(void) {
	struct angolo a, b;
	a.gradi = 10;
	a.primi = 255;
	a.secondi = 255;
	b.gradi = 10;
	b.primi = 255;
	b.secondi = 255;
	somma_angoli(a, b);
	return 0;
}