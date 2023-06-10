#define _CRT_SECURE_NO_WARNINGS
#include "WTK.h"
#include <stdlib.h>
int main(void) {
	struct point* p = malloc(3 * sizeof(struct point));
	p[0].x = 1;
	p[0].y = 2;

	p[1].x = 3;
	p[1].y = 4;

	p[2].x = 1;
	p[2].y = 1;
	
	char* s = "prova.txt";
	FILE* f = fopen(s, "w");
	if (f == NULL) {
		return NULL;
	}
	write_points(f,&p,3);
	fclose(f);
}