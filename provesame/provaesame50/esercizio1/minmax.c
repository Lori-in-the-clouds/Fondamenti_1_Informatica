#include <stdlib.h>
void minmax(const int* v, size_t n, int* min, int* max) {
	if (n == 0 || v == NULL) {
		return;
	}
	int min1 = v[0];
	int max1 = v[0];
	for (int i = 0; i < n; i++) {

		if (v[i] <= min1) {
			min1 = v[i];
		}
		if (v[i] >= max1) {
			max1 = v[i];
		}
	}
	min[0] = min1;
	max[0] = max1;

}