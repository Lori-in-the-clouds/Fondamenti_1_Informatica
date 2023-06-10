#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
double parse_operazione(const char* s) {
	//leggo la prima cifra
	size_t cont1 = 0;
	bool potenza = false;
	bool potenza2 = false;
	double pov = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') {
			break;
		}
		if (s[i] == 'e') { //controllo
			if (s[i + 1] == '-') {
				char* pot = malloc(4 * sizeof(char));
				pot[0] = s[i + 1];
				pot[1] = s[i + 2];
				pot[2] = '.';
				pot[3] = '/0';
				pov = atof(pot);
				potenza = true;
				free(pot);
			}
			else {
				char* pot = malloc(3 * sizeof(char));
				pot[0] = s[i + 1];
				pot[1] = '.';
				pot[2] = '/0';
				pov = atof(pot);
				potenza2 = true;
				free(pot);
			}
			  
			  

			break;
		}
		cont1++;
	}
	//primo operatore 
	char* r = malloc(cont1+1 * sizeof(char));
	for (size_t i = 0; i < cont1; i++) {
		r[i] = s[i];
	}
	r[cont1] = '/0';
	double cif1 = atof(r);
	free(r);
	//leggo la seconda cifra 
	size_t cont2 = 0;
	int j = 2;
	if (potenza == true) {
		 j = 5;
	}
	if (potenza2 == true) {
		j = 4;
	}
		double pov1 = 0;
		bool potenza1 = false;
		for (size_t i = cont1 + j; i < strlen(s); i++) {
			if (s[i] == 'e') {//controllo
				if (s[i + 1] == '-') {
					char* pot1 = malloc(4 * sizeof(char));
					pot1[0] = s[i + 1];
					pot1[1] = s[i + 2];
					pot1[2] = '.';
					pot1[3] = '/0';
					pov1 = atof(pot1);
					free(pot1);
				}
				else {
					char* pot1 = malloc(3 * sizeof(char));
					pot1[0] = s[i + 1];
					pot1[1] = '.';
					pot1[2] = '/0';
					pov1 = atof(pot1);
					free(pot1);
				}
				potenza1 = true;

				break;
			}
			if (s[i] != ' ') {
				cont2++;
			}
		}
	
	//secondo operatore 
		int k = 0;
		if (potenza == true) {
			 k = 3;
	}
		if (potenza2 == true) {
			k = 2;
		}
	char* m = malloc(cont2+1 * sizeof(char));
	for (int i = 0 ; i < cont2; i++) {
	
		m[i] = s[i+cont1+k+3];
		
	}
	m[cont2] = '/0';
	double cif2 = atof(m);
	free(m);
	//faccio l'operazione
	double risultato;
	int l = 1;
	if (potenza == true) {
		l = 4;
	}
	if (potenza2 == true) {
		l = 3;
	}
	if (s[cont1 + l] == '+') {
		risultato = pow(10,pov)*cif1 + cif2*pow(10,pov1);
	}
	if (s[cont1 + l] == '-') {
		risultato = pow(10, pov) * cif1 - cif2 * pow(10, pov1);;
	}
	if (s[cont1 + l] == '*') {
		risultato = pow(10, pov) * cif1 * cif2 * pow(10, pov1);
	}
	if (s[cont1 + l] == '/') {
		risultato = pow(10, pov) * cif1 / cif2 * pow(10, pov1);
	}
	
	
	return risultato;
}