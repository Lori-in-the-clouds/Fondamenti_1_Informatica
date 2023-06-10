#include <stdlib.h>
size_t find_first_partition(const int* seq, size_t n) {
	size_t max = 0;
	
	for (int i = 0; i < n; i++) {
		int controllo1 = 1;
		int controllo2 = 1;
		for (int j = i+1; j < n; j++) {
			
			if (seq[i] >= seq[j]) {
				controllo1 = 1;
				break;
			}
			controllo1 = 0;
			

		
		}
		
		for (int j = i - 1; j>=0; j--) {
			if (seq[i] <= seq[j]) {
				controllo2 = 1;
				break;
			}
			controllo2 = 0;


		}
		if (controllo1 == 0 && controllo2 ==0) {
			max = i;
			return max;
		}
		if (i == 0 && controllo1 == 0) {
			max = i;
			return max;
		}
 }
	
}