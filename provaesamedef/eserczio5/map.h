#if !defined MAP_H
#define MAP_H
#include <stdbool.h>
struct connections {
	size_t n;
	bool* data;
};
extern struct connections* load_connections(const char* filename);
#endif //MAP_H