#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
extern int scrivi_conta_caratteri(FILE* f, const char* s);
int main(void) {
	char* t = "prova.txt";
	FILE* f = fopen(t, "w");
	if (f == NULL) {
		return NULL;
	}
	char* s = "scrivimi su file per completare l'esercizio.";
	scrivi_conta_caratteri(f, s);
	fclose(f);
}