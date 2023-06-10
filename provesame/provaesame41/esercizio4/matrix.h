#if !defined MATRIX_H
#define MATRIX_H
struct matrix {
	size_t rows, cols;
	double* data;
};
extern struct matrix* mat_replicate(const struct matrix* m);
#endif //extern struct matrix *mat_replicate(const struct matrix *m);