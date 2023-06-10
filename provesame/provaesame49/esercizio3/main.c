#include "segmento.h"
#include <stdlib.h>
int main(void) {
	struct segmento s1;
	s1.a = 1;
	s1.b = 6;
	struct segmento s2;
	s2.a = 2;
	s2.b = 5;
	intersezione(s1, s2);
	return 0;
}