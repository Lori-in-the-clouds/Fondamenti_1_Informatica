#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
 bool is_perfect(uint32_t n) {
	 if (n == 0) {
		 return false;
	 }
	 //individuo tutti i divisori e li metto dentro un array
	 int* ris = malloc(1 * sizeof(int));
	 int m = 1; //contatore realloc
	 int i = 1;
	 int j = 0;
	 int somma = 0;
	 while (i<n) {
		 if (n % i == 0) {
			 ris[j] = i;
			 somma += ris[j];
			 j++;
			 m++;
			 ris = realloc(ris, m * sizeof(int));
			 
		 }
		 i++;
	 }
	 free(ris);
	 if (somma == n) {
		 return true;
	 }
	 else {
		 return false;
	 }
	 
}