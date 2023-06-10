#include <stdlib.h>
extern char* sostituisci(const char* str, const char* vecchia, const char* nuova);
int main(void) {
char* s = "ciao   bello cas cas ciao";
	char* vecchia = "cas";
	char* nuova =NULL;
	char *risultato =sostituisci(s, vecchia, nuova);
	return 0;

}