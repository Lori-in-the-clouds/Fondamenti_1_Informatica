#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
bool is_date(const char* s) {
	//controllo giorno
	if (s == NULL) {
		return false;
	}
	int j = 0;
	for (int i = 0; i < 2; i++) {
		if (s[i] < 48 || s[i] > 57) {
			return false;
		}
		j = i;
	}
	j++;
	if (s[j] != '/') {
		return false;
	}
	j++;
	for (int i = j; i<2 + j; i++) {
		if (s[i] < 48 || s[i] > 57) {
			return false;
		}
		
	}
	j += 2;
	if (s[j] != '/') {
		return false;
	}
	j++;
	for (int i= j;i< 4 + j; i++) {
		if (s[i] < 48 || s[i] > 57) {
			return false;
		}
		
	}
	if (strlen(s) != 10) {
		return false;
	}
	return true;
}