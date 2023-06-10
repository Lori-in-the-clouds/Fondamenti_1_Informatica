#include <stdlib.h>

void array_remove(double* arr, size_t* pn, size_t pos) {
	*pn = *pn - 1;
	//*pn--; stessa cosa ma più bella
	for (int i = pos; i < *pn; i++) {
		arr[i] = arr[i + 1];
		
	}
}