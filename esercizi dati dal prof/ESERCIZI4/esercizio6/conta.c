#include <stdlib.h>
#include <string.h>
size_t conta_parole(const char* s) {
	int num = 0;
	size_t spazio = 0;
	int i = 0;
	while (s[i] != '\0') {  //conto quanti caratteri ha
		  
			if (s[i] == ' ' && ( ( s[i + 1] != ' ' ) && (s[i+1] != '\0') ) ) {
				spazio++;
			}

			i++;
		}
		if (s[0] == ' ') {
			return spazio;
		}
		else {
			return spazio + 1;
		}
	//}
}
	

