#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "libri.h";
#include <string.h>
bool libro_scrivi(const struct libro* p, FILE* f) {
    if (p -> titolo == NULL) {
        return false;
    }
  
    size_t scritti =fwrite(p->titolo,sizeof(char),strlen(p->titolo)+1,f);
  
    if (scritti != strlen(p->titolo)+1) {
        return false;
    }
    int nchar = 1;
    while (p->anni_ristampe[nchar] != '\0') {
      
        nchar++;
    }
    
        fwrite((*p).anni_ristampe, sizeof(uint16_t),nchar+1 , f);
    

    
 
    return true;
}