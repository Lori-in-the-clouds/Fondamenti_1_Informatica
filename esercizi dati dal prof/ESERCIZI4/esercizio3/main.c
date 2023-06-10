#include "complessi.h";

int main(void) {
	struct complesso comp1 = { 2,3 };
	const struct complesso comp2 = { 5,4 };
	prodotto_complesso(&comp1, &comp2);
	return 0;
}