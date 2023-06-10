#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void capsula(FILE* f, unsigned char n) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		fprintf(f, "%c", ' ');
		k++;
	}
	for (int i = 0; i < n; i++) {
		fprintf(f, "%c", '-');
		k++;
	}
	int cont = 1;
	int cont1 = 0;
		for(int i=0;i<n;i++) {
			fprintf(f, "%\n");
				for (int i = 0; i < (k / 2) - cont; i++) {
					fprintf(f, "%c", ' ');
				}
					fprintf(f, "%c", '/');

					for (int j = 0; j < (k/2) + cont1; j++) {
						fprintf(f, "%c", ' ');
					}
							fprintf(f, "%c", '\\');
	
	
							cont++;
							cont1 += 2;
		}
		fprintf(f, "%\n");
		for (int i = 0; i < n; i++) {
			fprintf(f, "%c", '|');
			for (int i = 0; i < (k / 2) -1+ cont1; i++) {
				fprintf(f, "%c", ' ');
			}
			fprintf(f, "%c", '|');
			fprintf(f, "%\n");
		}
		
		for (int i = 0; i < n; i++) {
			
			
			for (int i = (k / 2) - (cont-1); i > 0; i--) {
					fprintf(f, "%c", ' ');
			}
					fprintf(f, "%c", '\\');
				
			for (int s = (k / 2) + cont1; s > 1; s--) {
					fprintf(f, "%c", ' ');
			}
				
				fprintf(f, "%c", '/');
				fprintf(f, "%\n");
				cont1= cont1-2;
				cont= cont-1;
			}
		for (int i = 0; i < n; i++) {
			fprintf(f, "%c", ' ');
			k++;
		}
		for (int i = 0; i < n; i++) {
			fprintf(f, "%c", '-');
			k++;
		}
		
		}




		
	



