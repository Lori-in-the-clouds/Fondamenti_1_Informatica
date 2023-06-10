#include <stdlib.h>;
#include <math.h>
#include "punto.h";
int main(void) {
    struct punto p;
    p.x = 16.00;
    p.y = 4.00;
    struct immagine img;
    img.w = 25;
    img.h = 25;
    struct immagine img_new;
    img_new.w = 12;
    img_new.h = 10;
    scala_punto(&p, &img, &img_new);
    return 0;
}
