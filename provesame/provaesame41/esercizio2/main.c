#include <stdlib.h> 
extern int roll_and_keep(const int* r, size_t x, size_t y);
int main(void) {
	int r[6]={ 3,8,2,7,1,9 };
	int x = 6;
	int y = 3;
	roll_and_keep(r, x, y);
	return 0;
}