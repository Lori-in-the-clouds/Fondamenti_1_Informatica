#include "matrix.h"

//costruisco la matrice 
mat_constr(struct matrix* m, size_t rows, size_t cols) {
	m->rows = rows;
	m->cols = cols;
	m->data = calloc(rows * cols, sizeof(double));
}
//visualizza la matrice 
void mat_fprint(const struct matrix* m, FILE* f) {
	size_t rows = m->rows;
	size_t cols = m->cols;
	double* data = m->data;
	for (size_t r = 0; r < cols; r++) {
		for (size_t c = 0; c < rows; c++) {
			double val;
			val = data[r * cols + c];
			fprintf(f, "%.2f\t", val);
		}
		fprintf(f, "\n");
	}
}
int main(void) {
	//costruisco la matrice A
	struct matrix A;
	mat_constr(&A, 3, 3);
	A.data[0] = 1.00;	A.data[1] = 2.00;	A.data[2] = 3.00;
	A.data[3] = 4.00;	A.data[4] = 5.00;	A.data[5] = 6.00;
	A.data[6] = 7.00;	A.data[7] = 8.00;	A.data[8] = 9.00;
	//scambio le diagonali
	struct matrix *B = scambia_diagonali(&A);
	//visuallizza la matrice B
	mat_fprint(B, stdout);
	return 0;
}