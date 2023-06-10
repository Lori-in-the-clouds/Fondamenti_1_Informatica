#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//#include "countteenager.h"
struct person {
	char name[256];
	unsigned int age;
};

unsigned int count_teenagers(FILE* f) {
	struct person p = {"",0};
	
	int n = 0;
	fscanf(f, "%i",&n );
	
	int contatore = 0;
	for (int i = 0; i < n; i++) {

		fscanf(f, "%s%i", &p.name,&p.age);
		if (p.age>13 && p.age<19) {
			contatore++;
		}
	}
	
	return contatore;
	

}