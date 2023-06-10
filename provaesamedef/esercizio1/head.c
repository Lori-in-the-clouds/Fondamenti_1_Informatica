#include <stdio.h>
int main(int argc, char* argv[]) {
	FILE* f = fopen(argv[1], "r");
	for (int i = 1; i < 10; i++) {
		fprintf(stdout, "%s", argv[i]);
	}
	return 0;
}