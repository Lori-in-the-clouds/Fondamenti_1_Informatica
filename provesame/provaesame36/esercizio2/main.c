#include <stdlib.h>
extern int* rimuovi_multipli(const int* v, size_t size, size_t* newsize);
int main(void) {
	int v[8] = {3,4,5,6,7,8,9,10};
	size_t size = 8;
	size_t* newsize = malloc(1 * sizeof(size_t));
 	rimuovi_multipli(&v, 5, &newsize);
	return 0;
}