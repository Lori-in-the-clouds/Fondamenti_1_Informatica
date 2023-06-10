#include <math.h>;
unsigned int inverti(unsigned int i) {
    int j = 1;
    int somma = 0;
    int num;
    num = i;
    int cif = -1;
    //funzione che conta quante cifre sono
    while (num != 0) {
       num= num/10;
       cif++;
    }
    int cifra = 1;
    int num2 = i;
    while (num2 != 0) {
        num2 = num2 / 10;
        cifra =(i / j) % 10;
        j *= 10;
        somma = somma + (cifra * pow(10.0, cif));
            cif--;
       
 }
    return somma;
}