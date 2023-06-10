#include <stdlib.h>
#include <math.h>
#include "rational.h"
void rational_sum(struct rational* sum, const struct rational* first, const struct rational* second) {

	int cmdiv = 1;
	int div = 0;
	sum->den = first->den * second->den;
	sum->num = (first->num * second->den) + (first->den * second->num);
	if (sum->num == 0) {
		sum->den = 1;
		return;
	}
	//dividiamoli per il massimo comune divisore

	if (sum->den < sum->num) {
		 div = sum->den;
	}
	else {
		div = sum->num;
	}
		while (div!=1) {
			if (sum->den % div == 0 && sum->num % div == 0) {
				cmdiv = div;
				break;
			}
			div--;
		}


	
	sum->den = sum->den / cmdiv;
	sum->num = sum->num / cmdiv;

}