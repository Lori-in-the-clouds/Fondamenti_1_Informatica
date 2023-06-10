#include <stdlib.h>
extern int* clamped(const int* v, size_t n, int min, int max);
int main(void) {
	int s[5] = {1,2,3,4,5};
	int min = 3;
	int max = 4;
	clamped(s, 5, min, max);
	return 0;
}