#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* args[]) {
	if (argc != 4) {
		return 1;
	}
	
	double area;
	double ris1 = atof(args[1]);
	double ris2 = atof(args[2]);
	double ris3 = atof(args[3]);
	if (ris1 <= 0 || ris2 <= 0 || ris3 <= 0) {
		return 1;
	}
	area = (sqrt( (ris1+ris2+ris3)*(-ris1+ris2+ris3)*(ris1-ris2+ris3)*(ris1+ris2-ris3) ))/4;
	printf("%f", area);
	return 0;
}