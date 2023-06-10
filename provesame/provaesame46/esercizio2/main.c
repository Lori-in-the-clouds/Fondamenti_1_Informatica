#include <stdlib.h>
#include "partition.h"
int main(void) {
	size_t n = 9;
	int* seq = malloc(9 * sizeof(int));
	seq[0] = 1;
	seq[1] = 1;
	seq[2] = 4;
	seq[3] = 3;
	seq[4] = 6;
	seq[5] = 8;
	seq[6] = 10;
	seq[7] = 7;
	seq[8] = 9;
		
	
	find_first_partition(seq, n);
	return 0;
	}