#ifndef MATRIX_H
#define  MATRIX_H
struct matrix {
	size_t rows, cols;
	double *data;
};
extern double* matrix_snake(const struct matrix* m);
#endif // !MATRIX_H
