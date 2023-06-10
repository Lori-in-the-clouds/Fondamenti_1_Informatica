#include "matrix.h"

struct matrix* scambia_diagonali(const struct matrix* m) {
	//controllo che la matrice sia quadrata
	if (m->rows != m->cols) {
		return NULL;
	}
	//creo una matrice copia
	struct matrix B;
	B.rows = m->rows;
	B.cols = m->cols;
	B.data = calloc(B.cols * B.rows, sizeof(double));
	for (size_t r = 0; r < B.cols; r++) {
		for (size_t c = 0; c < B.rows; c++) {
			B.data[r * B.cols + c] = m->data[r * m->cols + c];
		}
	}
	//copio i valori delle diagonali
	double* d1 = malloc(m->cols * sizeof(double));
	for (size_t rc = 0; rc < m->cols; rc++) {
		d1[rc] = m->data[rc * m->rows + rc];
	}
	double* d2 = malloc(m->cols * sizeof(double));
	size_t cols = m->cols - 1;
	for (size_t n = 0; n < m->rows; n++) {
		d2[n] = m->data[n * m->rows + cols];
		cols--;
	}
	//carico i nuovi valori nella matrice
	for (size_t rc = 0; rc < m->cols; rc++) {
		B.data[rc * m->rows + rc] = d2[rc];
	}
	cols = m->cols - 1;
	for (size_t n = 0; n < m->rows; n++) {
		B.data[n * m->rows + cols] = d1[n];
		cols--;
	}
	return &B;
}