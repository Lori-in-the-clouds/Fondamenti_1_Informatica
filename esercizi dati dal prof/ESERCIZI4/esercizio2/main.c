#include "geometria.h";

int main(void) {
	struct punto p1 = { 1,1 };
	struct punto p2 = { 2, 2 };
	struct punto p3 = { 3,3 };
	colineari(p1, p2, p3);
	return 0;
}