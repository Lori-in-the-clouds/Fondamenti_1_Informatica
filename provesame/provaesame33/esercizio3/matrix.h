#if !defined MATRIX_H
#define MATRIX_H
#include <stdbool.h>
#include <stdlib.h>
struct matrix {
	size_t rows, cols;
	double* data;
};
struct bmatrix {
	size_t rows, cols;
	bool* data;
};
enum comparisons {
	LT,LE,EQ,NE,GE,GT
};
extern struct bmatrix* mat_boolean(const struct matrix* m, double rhs, enum comparisons cmp);

#endif //MATRIX_H