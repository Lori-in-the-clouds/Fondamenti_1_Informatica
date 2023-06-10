#include <stdbool.h>
bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned c) {
	if ( (  (a * a) + (b * b)  == (c * c) ) || ( (a * a) + (c * c) == (b * b) ) || ( (c * c) + (b * b) == (a * a) ) ) {
		return true;
	} else {
		return false;
	}
}