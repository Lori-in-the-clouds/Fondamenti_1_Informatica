#if !defined MATRIX_H
#define MATRIX_H
struct matrix {
	size_t rows, cols;
	double* data;
};
extern struct matrix* mat_delete_row(const struct matrix* m, size_t i);
#endif //MATRIX_H