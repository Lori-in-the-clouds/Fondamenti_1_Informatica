#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* args[]) {
	if (argc != 2) {
		return -1;
	}
	int n = atoi(args[1]);
	if (n <= 0) {
		return 0;
	}

	 
		int num = n;
	
		int cifre = 1;
		while (num != 1) {
			if (num % 2 == 0) {
				num = num / 2;
				cifre++;
			}
			else {
				num = (num * 3) + 1;
				cifre++;
			}
		}
		int* ris1 = malloc((cifre+1)*sizeof(int));
		ris1[0] = n;
		num = n;
		for (int j = 1; j < cifre ; j++) {
		
		if (num % 2 == 0) {
				num = num / 2;
				ris1[j] = num;
				
			}
			else {
				num = (num * 3) + 1;
				ris1[j] = num;
				
			}
			
		}
		//stampo i numeri 
		
		int i = 0;
		for (int j = 0; j < cifre-1; j++) {
			
			fprintf(stdout,"%i", ris1[i]);
			i++;
			fprintf(stdout, "%c", ',');
			fprintf(stdout, "%c",' ');
			
			
		}
		fprintf(stdout, "%i", ris1[cifre-1]);
		return cifre;
	
  






}
