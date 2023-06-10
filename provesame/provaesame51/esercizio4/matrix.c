#include "matrix.h"
#include <stdlib.h>
struct matrix* mat_mul(const struct matrix* m1, const struct matrix* m2) {
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->cols = m2->cols;
	p->rows = m1->rows;
	p->data = calloc(p->cols*p->rows,sizeof(double));
	double* data = malloc(m1->cols * m1->rows * sizeof(double));
	double* data1 = malloc(m2->cols * m2->rows * sizeof(double));
	double prodotto = 0;
	int contatore = 0;
	//leggo per riga e metto nell'array la prima matrice 
	int i = 0;
	for (size_t r = 0; r < p->rows; r++) {
		for (size_t c = 0; c < p->cols; c++) {

			
			
			for (size_t r1 = 0; r1 < m1->rows; r1++) {

				for (size_t c2 = 0; c2 < m2->cols; c2++) {
					for (size_t c1 = 0; c1 < m1->cols; c1++) {
						contatore = 0;
						for (size_t r2 = 0; r2 < m2->rows; r2++) {
							if (r1 == c1 && contatore==0) {
								
								prodotto += m1->data[r1 * m1->cols + c1] * m2->data[r2 * m2->cols + c2];
								contatore++;
							}
						}
					}


					
				}
			}
			p->data[i] = prodotto;
			prodotto = 0;
			i++;
		
		
		
		
		
		
		
		
		
		}
	}


	i = 0;
	for (size_t c = 0; c < m2->cols; c++) {
		for (size_t r = 0; r < m2->rows; r++) {
			data1[i] = m2->data[r * m2->cols + c];
			i++;
		}
	}
	int l1 = 0;
	int l2 = 0;
	for (size_t r = 0; r < m1->rows; r++) {
		for (size_t c = 0; c < m1->cols; c++) {
			prodotto = 0;
			
			for ( int j = 0; j < m1->cols; j++) {
				prodotto += (data[l1] * data1[l2]);
				l1++;
				l2++;
			}
			l1 -= m1->cols;
			p->data[i] = prodotto;
			i++;
		}
	}
	
}