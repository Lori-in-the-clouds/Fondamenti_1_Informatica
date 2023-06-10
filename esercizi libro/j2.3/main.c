#include "liberia.h"
int main(void) {
    struct punto p = { 12.5, 0.5 };

    const double phi = 2.7182818284590;
    double alfa = phi * 1;
    rotazione( &p, alfa);
    return 0;
}

