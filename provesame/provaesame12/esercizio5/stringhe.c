#include <string.h>
#include <stdlib.h>
char* rimuovimultipli(const char* str) {
	if (str == NULL) {
		return NULL;
	}
	int num = strlen(str);
	int n = 1;
	int j = 0;
	
	char* ris = malloc(n * sizeof(char));
	for (int i = 0; i < num; i++) {
		if (str[i] == str[i + 1]) {
			ris[j] = str[i];
			j++;
			int k = 0;
			n++;
			ris = realloc(ris, n * sizeof(char));
			while (str[i] == str[i + 1]) {
				i++;
				
			}
			continue;
		}
		ris[j] = str[i];
		j++;
		n++;
		ris = realloc(ris, n * sizeof(char));

}
	ris[n - 1] = '\0';
	return ris;
}