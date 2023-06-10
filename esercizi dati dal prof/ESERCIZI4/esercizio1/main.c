#include "libreria.h";
#include <stdlib.h>
int main(void) {
	const char s1[] = "Questa e la ";
	const char s2[] = "Stringa risultante. ";
	char* s;
	s = concatena(s1, s2);
	free(s);
}