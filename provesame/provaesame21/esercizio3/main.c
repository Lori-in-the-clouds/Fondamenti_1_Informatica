#include <string.h>
#include <stdlib.h>
#include "operazione.h"

int main(void) {
	char* s = "4.56 + 255.3";
	char* t = "11.34e-3 / -2.5554";
	double ris = parse_operazione(t);
	return 0;
}