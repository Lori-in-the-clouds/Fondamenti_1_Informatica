#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h> 
#include <stdio.h>
#include "tirocini.h"
#include <stdlib.h>
bool tirocinio_load(FILE* f, struct tirocinio* t) {
	
	t->nome = malloc(1 * sizeof(char));
	t->azienda1 = malloc(1 * sizeof(char));
	t->azienda2 = malloc(1 * sizeof(char));
	t->azienda3 = malloc(1 * sizeof(char));
	for (int j = 0; j < 4; j++) {
		int i = 0;
		int n = 1;
		while (1) {
			//nome
			if (j == 0) {
				size_t turn = fscanf(f, "%c", &t->nome[i]);
				if (turn == 0) {
					return false;
				}
				if (t->nome[i] == ',') {
					t->nome[i] = '\0';
					
					break;
				}
				n++;
				i++;
				t->nome = realloc(t->nome, n * sizeof(char));
				
			}
			//azienda 1
			else if (j == 1) {
				size_t turn = fscanf(f, "%c", &t->azienda1[i]);
				if (t->azienda1[i] == ',') {
					t->azienda1[i] = '\0';
					break;
				}
				n++;
				i++;
				t->azienda1= realloc(t->azienda1, n * sizeof(char));
			}
			//azienda2
			else if (j == 2) {
				size_t turn = fscanf(f, "%c", &t->azienda2[i]);
				if (t->azienda2[i] == ',') {
					t->azienda2[i] = '\0';
					break;
				}
				n++;
				i++;
				t->azienda2 = realloc(t->azienda2, n * sizeof(char));
			}
			//azienda 3
			else {
				size_t turn = fscanf(f, "%c", &t->azienda3[i]);
				if (t->azienda3[i] == '\n') {
					t->azienda3[i] = '\0';
					break;
				}
				n++;
				i++;
				t->azienda3 = realloc(t->azienda3, n * sizeof(char));
			}
		}
	}
	return true;
}
