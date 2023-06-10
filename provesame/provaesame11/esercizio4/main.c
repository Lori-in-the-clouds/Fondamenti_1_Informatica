#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "audio.h"
int main(void) {
	char* s = "prova.txt";
	struct audio a;
	audio_read(s, &a);
	return 0;
}