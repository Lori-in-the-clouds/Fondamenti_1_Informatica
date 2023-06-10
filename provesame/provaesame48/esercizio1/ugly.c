#include <stdbool.h>
#include <stdlib.h>

bool is_ugly(unsigned int num) {
	//trovo i fattori primi
	int i = 2;
	int j = 0;
	while (num!=1) {
		if (num % 2 == 0) {
			num = num / 2;
			continue;
		}
		if (num % 3 == 0) {
			num = num / 3;
			continue;
		}
		if (num % 5 == 0) {
			num = num / 5;
			continue;
		}
		return false;
	}
	return true;
	
}