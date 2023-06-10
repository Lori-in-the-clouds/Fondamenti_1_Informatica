#include<stdlib.h> 
 int* prodotto(const int* v, size_t n) {
	 if (v == NULL || n == 0 || n == 1) {
		 return NULL;
	 }
	 int *prodotto= malloc(n*sizeof(int));
	 for (int i = 0; i < n; i++) {
		 prodotto[i] = 1;
	 }
	 for (int i = 0; i < n; i++) {
		 for (int j = 0; j < n; j++) {
			 if (j != i) {
				 prodotto[i] = prodotto[i] * v[j];
			 }
		 }
	 }
	 return prodotto;
}