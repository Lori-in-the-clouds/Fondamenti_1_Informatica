#include <stdlib.h>
unsigned int conta_spazi(const char* s) {
	int  i = 0;
	int spazi = 0;
	while (s[i] != 0) {
		if (s[i] == ' ') {
			spazi++;
		}
		i++;
	}
	return spazi;
}
//_________________________________________________________

int main(void) {
	 const char s[] = "Ciao come stai io bene";
	conta_spazi(s);
	return 0;

}