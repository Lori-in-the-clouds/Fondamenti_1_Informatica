#if !defined COUNTTEENAGER_H
#define COUNTTEENAGER_H
#include <stdio.h>
struct person {
	char name[256];
	unsigned int age;
};
extern unsigned int count_teenagers(FILE* f);
#endif /*COUNTTEENAGER_H*/