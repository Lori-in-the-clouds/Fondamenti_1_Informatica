#include <stdbool.h>
extern bool is_date(const char* s);
int main(void) {
	char* s = "xx/yy/zzzz";
	is_date(s);
	return 0;
 }