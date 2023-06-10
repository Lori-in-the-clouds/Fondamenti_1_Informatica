#ifndef MARIX_H
#define MARIX_H
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
extern struct matrix* mat_pad(const struct matrix* mat);
#endif // !MARIX_H
