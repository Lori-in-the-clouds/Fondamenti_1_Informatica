#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h> 
#include "images.h"
int main(void) {
	char* s = "file1.txt";
	size_t *n = 0;
	read_images(s,&n);
	return 0;
}