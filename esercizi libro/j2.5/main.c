#include <stdlib.h>
#include "array.h"

int main(void) {
	size_t n = 5;
	
	double arr[] = { 0,1,2,3,4 };
	size_t pos = 3;

	array_remove(arr, &n, pos);

}