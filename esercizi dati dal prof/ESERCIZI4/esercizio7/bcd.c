#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)


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

unsigned short bin2bcd(unsigned short val) {
	unsigned int numcifre = numerocifre(val);
	char* s = malloc((numcifre) * (sizeof(char)));
	char* r = malloc(4 * (sizeof(char)));
	char* r0 = malloc(4 * (sizeof(char)));
	
	sprintf(s, "%d", val);


	//codice binario
	
	for (int i = 0; i < numcifre; i++) {
		int j = 0;
		while (s[i] != 0) {

			if (s[i] % 2 == 0) {
				r[j] = 0;
				j++;

			}
			else {
				r[j] = 1;
				j++;
			}


			if (j == 1) {
				s[i] = (s[i] - 48) / 2;		//togli codice ascii
			}
			else {
				s[i] = s[i] / 2;

			}
		}
		// inserisco gli zeri mancanti 
		


	}
						

	1 -- > 0x0001
		\xnum

		int a = 4;
	int b;
	b = \0x10;

	1001      1100 + (10000*1001)
    1100		
	101
1001.1100

		0x 0127    0000 0001 0010 0111
		
		unsigned short s[] = "0127";
		0x0127 

		100010000 + 1100 = 10001. 1100




	
}