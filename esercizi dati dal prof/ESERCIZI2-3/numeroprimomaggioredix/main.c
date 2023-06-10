#include "primo.h"

int numeroprimodopo(int k) {
	k = k + 1;
	while (numeroprimo(k) != 1) {
		k +=1;
		
	}
	return k;
	
	
	
}


int main(void) {
	int k = 32;
	numeroprimodopo(k);
	return 0;
}

