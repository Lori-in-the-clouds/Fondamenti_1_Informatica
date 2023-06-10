#include <stdlib.h>
#include <string.h>
char* trim(const char* s) {
	size_t quanti = 0;
	size_t quanti1 = 0;
	size_t j = 1;
	size_t r = 1;
	if (s == NULL) {
		return NULL;
	}
	if (s == "") {
		return NULL;
	}
	size_t lungh = strlen(s);
	//controllo quanta memoria devo togliere
	
		if (s[0] == ' ') {
			quanti++;
			quanti1++;
			while (s[0 + j] == ' ') {  
				quanti++;
				quanti1++;
				j++;
			}
			
		}
		if (s[lungh-1] == ' ') {
			while (s[lungh - r] == ' ') { 
				quanti++;
				r++;
			}
		}

		//_________________________________________________________________________
		size_t c = 0;
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] == ' ') {
				c++;
			}
			else {
				break;
			}

		}
		if (c == strlen(s)) {
			char* ris2 = malloc( 1* sizeof(char));
			ris2[0] = '\0';
			return ris2;
		}
	
	//creo spazio modificato per stringa ris
		char *ris = malloc((lungh-quanti+1) * sizeof(char));
		for (int i = 0; i < (lungh - quanti); i++) { //sposto tutto per metterlo nella nuova stringa 
			ris[i] = s[quanti1];
				quanti1++;
	}
		
		
	
	//aggiungo il terminatore

		ris[lungh - quanti] = '\0';
		return ris;
	
	
}