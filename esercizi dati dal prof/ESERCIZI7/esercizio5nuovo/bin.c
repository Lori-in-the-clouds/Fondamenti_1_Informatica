#include <stdlib.h>
#include <math.h>
#include <stdio.h>
int main(int argc, char* argv[]) {

	if (argc != 2) {
		return 1;
	}
	
	int x = atoi(argv[1]);
	if (x < 0) {
		return 1;
	}
	int* ris = malloc(1 * sizeof(int));
	int n = 1;
	int i = 0;
	while (x!=0) {
		ris[i] = x % 2;
		x = x / 2;
		n++;
		ris = realloc(ris, n * sizeof(int));
		i++;
	}
	//invertiamo l'array
	unsigned long long* risv = malloc(n * sizeof(int));
	int j = 0;
	for (int i = n-2; i >= 0; i--) {
		risv[j] = ris[i];
		printf("%i", risv[j]);
		j++;
	}
	/*unsigned long long somma = 0;
	int k = 0;
	unsigned long long  srl = 0;
	for (int i = n-2;i>=0; i--) {
		if (risv[i] != 0) {
			srl = risv[i] * pow(10, k);
		}
		somma += srl;
		k++;
	}*/
	
	return 0;
}