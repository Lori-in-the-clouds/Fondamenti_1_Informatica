#if !defined  TIROCINI_H
#define TIROCINI_H
#include <stdbool.h> 
#include <stdio.h>
struct tirocinio {
	char* nome;
	char* azienda1;
	char* azienda2;
	char* azienda3;
};
extern bool tirocinio_load(FILE* f, struct tirocinio* t);
#endif // TIROCINI_H