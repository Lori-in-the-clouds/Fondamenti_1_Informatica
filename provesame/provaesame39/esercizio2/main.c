#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

extern bool inverti_case(const char* nomefilein, const char* nomefileout);
int main(void) {
	char* s = "prova.txt";
	char* t = "prova1.txt";
	inverti_case(s, t);
	return 0;

}