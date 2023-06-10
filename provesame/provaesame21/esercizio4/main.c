#include <stdlib.h>
#include "rational.h"

int main(void) {
	struct rational uno,due,prodotto;
	uno.num = 5;
	uno.den = 5;
	due.num = 2;
	due.den = 4;
	prodotto.num = 0;
	prodotto.den = 0;
	rational_mul(&prodotto, &uno, &due);
	return 0;
}