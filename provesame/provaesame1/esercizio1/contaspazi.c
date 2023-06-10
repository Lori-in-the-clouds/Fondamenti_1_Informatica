#include <string.h>
unsigned int conta_spazi(const char* s) {
    unsigned int contatore = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            contatore++;
       }
 }
    return contatore;
}