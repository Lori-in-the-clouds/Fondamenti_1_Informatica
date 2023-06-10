#include<stdlib.h> 
extern int* prodotto(const int* v, size_t n);
int main(void)  {
	int v[5] ={ 1,2,3,4,5 };
	prodotto(v, 5);
	return 0;
}