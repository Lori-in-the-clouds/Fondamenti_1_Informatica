#include <string.h>
#include "hangman.h"
int main(void) {
	char* s = "Sopra la panca la capra campa, sotto la panca la capra crepa.";
	char* r = "";
	char *m = hangman(s, r);


	return 0;
}