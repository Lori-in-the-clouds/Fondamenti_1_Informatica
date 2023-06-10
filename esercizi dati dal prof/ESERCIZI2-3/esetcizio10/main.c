#include <stdlib.h>
int potenza(double* d, int z) {
    int ris;
    if (z == 0) {
        *d = 1;
        return *d;
    }
    else {
        for (int i = 1; i < z; i++) {
            *d = *d * *d;
        }
        return *d;
    }

}

int main(void) {
    double a[] = { 2,2,2,2,2,2,2,2,2,2 };
    size_t i, n = 10;

    for (int i = 0; i < n; i++) {
     
        potenza(&a[i], i);
        
    }
    return 0;

}