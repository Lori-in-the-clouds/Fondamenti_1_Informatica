#include <stdbool.h>
#include <string.h>
bool is_pangram(const char* sentence) {
	if (sentence == "" || sentence == NULL) {
		return false;
	}
	
	for (int i = 97; i < 123; i++) {
		if (i == 106) {
			i += 2;
		}
		if (i == 119) {
			i = i + 3;
		}
		for (int j = 0; j < strlen(sentence); j++) {
			if (sentence[j] == i || sentence[j]== (i-32) ) {
				break;
			}
			
			if (j == strlen(sentence)-1) {
				return false;
			}
		}

	}
	return true;

	 
	
	
}