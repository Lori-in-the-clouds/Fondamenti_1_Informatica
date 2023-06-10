#include "trim.h"
#include <stdlib.h>
#include <string.h>

int main(void) {
	const char* s = "   prima   ";
	const char* r = "senza spazi";
	const char* t = "a b";
	const char* m = "   ";
	const char* l = "(null)";
	char* ris1 =trim(s);
	char* ris2 = trim(r);
	char* ris3 = trim(t);
	char* ris4 = trim(m);
	char* ris5 = trim(l);
	return 0;
}