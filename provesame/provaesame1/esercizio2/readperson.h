#if !defined READPERSON_H
#define READPERSON_H
#include <stdio.h>
struct person {
	char name[256];
	unsigned int age;
};

extern void person_read(FILE* f, struct person* pp);

#endif /*READPERSON_H*/