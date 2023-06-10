#if !defined WTK_H
#define WTK_H
struct point {
	double x, y;
};
#include <stdio.h>
extern size_t write_points(FILE* f, const struct point* p, size_t n);
#endif //WTK_H