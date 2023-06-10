#include <stdlib.h>
int main(void) {
    
    
    const double x []= { 0, 1 ,3,4 };
    size_t n = sizeof x / sizeof x[0];
    const double y[] = { 2 , 3,5 ,5 };
    prodotto_scalare(x, y, n);
    return 0;

 }