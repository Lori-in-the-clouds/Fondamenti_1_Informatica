#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char* concatena(const char* s1, const char* s2) {
    int num1 = strlen(s1);
    int num2 = strlen(s2);
    char* ris = malloc((num1 + num2 + 1) * sizeof(char));
    for (int i = 0; i < num1; i++) {
        ris[i] = s1[i];
    }
    int j = 0;
    for (int i = num1 ; i < (num1 + num2); i++) {
        ris[i] = s2[j];
        j++;
    }
    ris[num1 + num2] = '/0';
   
    return ris;
}