#include <stdlib.h>
#include "fire_sym.h"
int main(void) {
	struct forest a;
	a.rows = 4;
	a.cols = 4;
	a.data = malloc(16 * sizeof(char));
	a.data[0] ='F';
	a.data[1] = '.';
	a.data[2] = '.';
	a.data[3] = '.';
	a.data[4] = 'F';
	a.data[5] = '.';
	a.data[6] = '.';
	a.data[7] = '.';
	a.data[8] = '.';
	a.data[9] = '.';
	a.data[10] = '.';
	a.data[11] = '.';
	a.data[12] = '.';
	a.data[13] = '.';
	a.data[14] = '.';
	a.data[15] = 'F';
	propagate_fire(&a);
}