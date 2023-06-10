#include <string.h>
#include <stdlib.h>
#include"leggi_nome.h";
int main(void) {
	const char* s = "http//:www.esse3.unimore.it/Home.do";
	char *ris = leggi_nome_sito(s);
	return 0;
}