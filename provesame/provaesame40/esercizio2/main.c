#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include "rle.h"
int main(void) {
	char* s = "prova.txt";
	const char* nomefileout = "prova1.txt";
	easy_rle_decode(s, nomefileout);
}