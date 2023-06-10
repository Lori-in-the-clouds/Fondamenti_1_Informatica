#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** args) {

    

    

        

        FILE* f = fopen(args[1], "r");

       
        char c = 0;
        fscanf(f, "%c", &c);
        printf("%c", c);
        fscanf(f, "%c", &c);
}