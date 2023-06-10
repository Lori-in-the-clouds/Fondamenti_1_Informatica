#include <stdlib.h>
extern void minmax(const int* v, size_t n, int* min, int* max);
int main(void) {
	int v[5] = { 1,5,10,12,0 };
	int* min = malloc(1*sizeof(int));
	int* max = malloc(1 * sizeof(int));
	minmax(v, 5, &min, &max);
	return 0;
}