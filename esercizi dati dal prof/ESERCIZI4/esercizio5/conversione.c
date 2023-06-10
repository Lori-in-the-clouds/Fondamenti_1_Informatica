#include <stdlib.h>
int numerocifre(unsigned int n) {				 //conto quante cifre ci sono
	int numcifre = 0;
	while (n != 0) {
		int i = 0;
		i++;
		numcifre++;
		n = n / 10;
	}
	return numcifre;
}
//____________________________________________________

char* converti(unsigned int n) {
	unsigned int numcifre = numerocifre(n);
	
	//creo lo spazio dell'array
	char* s = malloc((n) * sizeof(char));					
	char* r = malloc((n+1) * sizeof(char));
	//isolo ciascuna cifra e la metto dentro l'array
	unsigned int z = n;
	for (int i=0; i < numcifre; i++) {                    
		
		s[i]= (z % 10) + 48 ;
		z = z / 10;
	}

	//inverto l'array
	unsigned int m = numcifre-1;

	for (int i = 0; i < numcifre; i++) {
		r[m] = s[i];
		m--;
	}
	
	//aggiungo il terminatore
	r[numcifre+1] = "\0";



	return r;

}







