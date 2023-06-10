#include <stdlib.h>
#include "matrix.h"
#include <stdbool.h>
#include <math.h>
void mat_swapcols(struct matrix* mat, size_t c1, size_t c2) {
	int i = 0;
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->N = mat->N;
	p->M = mat->M;
	p->data = calloc(p->N * p->M, sizeof(double));
	int controller = 0;
	for (size_t r = 0; r < p->N; r++) {
		for (size_t c = 0; c < p->M; c++) {
			if (c == c1) {
				p->data[i] = mat->data[r * p->M + c2];
				i++;
				continue;
			}
			if (c == c2) {
				p->data[i] = mat->data[r * p->M + c1];
				i++;
				continue;
			}
			p->data[i] = mat->data[r * p->M + c];
			i++;
		}
	}
	i = 0;
	for (size_t r = 0; r < p->N; r++) {
		for (size_t c = 0; c < p->M; c++) {
			mat->data[i] = p->data[r * p->M + c];
			i++;
		}
	}

	free(p->data);
	free(p);
	

}