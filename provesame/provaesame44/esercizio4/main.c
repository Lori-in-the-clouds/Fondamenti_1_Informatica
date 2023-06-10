#include <stdlib.h>
void bad_word_filter(char* s, char** words, size_t nwords);
int main(void) {
	char** words = malloc(3 * sizeof(char));
	words[0] = "ciao";
	words[1] = "chiamo";
	words[2] = "brutto";
	char* s = "ciao lori brutto";
	bad_word_filter(s, &(*words), 3);
	return 0;

}

