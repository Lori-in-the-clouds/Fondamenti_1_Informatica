#include "libreria.h"
#include <stdlib.h>;
int main(void) {
	unsigned int n;
	n = 425;
	char* s = converti(n);
	free(s);
    return 0;
}