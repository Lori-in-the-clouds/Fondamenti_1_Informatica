#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
void quadrati_progressivi(FILE* f, int n) {
	//int div = 1;
	//int conf = div;
	//
	//if (n / 10 > 0) {
	//	//conto quante cifre ha
	//	while (n == 1) {
	//		n = n / 10;
	//		div++;
	//	}
	//	//prendiamo lap rima cifra 
	//	int s = pow(10, div - 1);
	//	
	//	int k = 0;
	//	int contatore = 0;
	//	int s = 1;
	//	for (int c = 0; c < n; c++) {
	//		contatore = 0;
	//		for (int i = 1; i < n; i++) {
	//			if (contatore == 0) {
	//				for (int j = 0; j < k; j++) {
	//					fprintf(stdout, "%i", s);

	//				}
	//				s++;
	//				i += k;
	//			}
	//			if (contatore == 0) {
	//				k++;
	//				contatore++;
	//			}


	//			fprintf(stdout, "%i", i);
	//		}
	//		int zero = 0;
	//		fprintf(stdout,"%i",)
	//		fprintf(stdout, "\n");
	//	}



	/*}*/
	int k = 0;
	int contatore = 0;
	int s = 1;
	for (int c = 0; c < n; c++) {
		contatore = 0;
		for (int i = 1; i <= n; i++) {
			if (contatore == 0) {
				for (int j = 0; j < k; j++) {
					fprintf(f, "%i", s);
					
				}
				s++;
				i += k;
			}
			if (contatore == 0) {
				k++;
				contatore++;
			}
			
			
			fprintf(f, "%i", i);
		}
		fprintf(f, "\n");
	}
	}


	

 