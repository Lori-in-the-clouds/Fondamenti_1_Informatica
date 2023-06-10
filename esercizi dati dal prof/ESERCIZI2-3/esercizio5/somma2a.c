#include <stdlib.h>
#include <stdint.h>
 uint32_t  *somme_2a2(uint32_t* vett, size_t size) {
     uint32_t* w = malloc(6 * sizeof(uint32_t));
     w[0] = vett[0] + vett[1];
     int j = 1;
     for (int i = 1; i <= ((size / 2)-1); i++) {  //quante volte lo devo fare
              j = j*2;
             w[i] = vett[j] + vett[j + 1];
             
         }
     return w;
         
     }
     
     

