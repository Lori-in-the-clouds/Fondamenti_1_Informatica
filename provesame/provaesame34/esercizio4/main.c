#include "rational.h"
int main(void) {
	struct rational sum;
	struct rational first;/* = malloc(1 * sizeof(struct rational));*/
	struct rational second; /*= malloc(1 * sizeof(struct rational));*/
	first.num = 5;
	first.den = 7;
	second.num = -10;
	second.den = 14;
	rational_sum(&sum, &first, &second);
	return 0;
}