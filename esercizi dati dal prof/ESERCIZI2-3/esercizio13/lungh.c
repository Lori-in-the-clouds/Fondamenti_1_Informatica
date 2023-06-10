#include <stdlib.h>
size_t lungh(const char *str) {
	size_t ris = 0;
	int i = 0;
	while (str[i] != 0) {
		ris ++;
		i++;
		
    }
	return ris;
}