#include <stdlib.h>
#include "rational.h"
#include <stdbool.h>
void rational_mul(struct rational* product, const struct rational* multiplicand, const struct rational* multiplier) {
    product->num = (multiplicand->num) * (multiplier->num);
    product->den = (multiplicand->den) * (multiplier->den);
    //li riduco a minimi termini
    int i = 2;
    int num = product->num;
    unsigned den = product->den;
    unsigned int max;
    if (num >= den) {
        max = num;
    }
    else {
        max = den;
    }
    while (i<=max) {
        if ((num % i == 0) && (den % i == 0)) {
            num = num / i;
            den = den / i;
            i--;

        }
        i++;
       
     }
    product->num = num;
    product->den = den;
        
}