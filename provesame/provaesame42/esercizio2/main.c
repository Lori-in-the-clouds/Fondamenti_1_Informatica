#include <string.h>
extern char* codifica_morse(const char* testo);
int main(void) {
	char* s = "CIAO MAMMA";
	char *ris =codifica_morse(s);
	return 0;
}