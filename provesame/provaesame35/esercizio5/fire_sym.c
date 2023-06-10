#include <stdlib.h>
#include "fire_sym.h"
void propagate_fire(const struct forest* f) {
	struct forest p;
	p.rows = f->rows;
	p.cols = f->cols;
	p.data = calloc(p.rows * p.cols, sizeof(char));
	int i = 0;
	int n = 1;
	int* vec = malloc(n * sizeof(int));
	int k = 0;
	int contatore = 0;
	for (size_t r = 0; r < p.rows; r++) {
		for (size_t c = 0; c < p.cols; c++) {
			contatore = 0;
			for (int i = 0; i < k; i++) {		//controllo
				if ((r * f->cols + c) == vec[i]) {
					contatore++;
				}
			}
			if (contatore == 0) {
				p.data[i] = f->data[r * f->cols + c];


				if (f->data[r * f->cols + c] == 'F') {
					if (c != 0) {
						if (p.data[i - 1] != 'F') {
							p.data[i - 1] = 'F';  //ovest
							vec[k] = i - 1;
							n++;
							k++;
							vec = realloc(vec, n * sizeof(int));
						}
					}
					if (c != p.cols - 1) {
						if (f->data[i + 1] != 'F') {
							p.data[i + 1] = 'F'; //est
							vec[k] = i + 1;
							n++;
							k++;
							vec = realloc(vec, n * sizeof(int));
						}
					}
					if (r != 0) {
						if (f->data[i - p.cols] != 'F') {
							p.data[i - p.cols] = 'F'; //nord
							vec[k] = i - p.cols;
							n++;
							k++;
							vec = realloc(vec, n * sizeof(int));
						}
					}
					if (r != p.rows - 1) {
						if (f->data[i + p.cols] != 'F') {
							p.data[i + p.cols] = 'F';
							vec[k] = i + p.cols; //sud
							n++;
							k++;
							vec = realloc(vec, n * sizeof(int));
						}
					}
				}
			}
			i++;
		}
	}
	//ricopio la matrice in quella di partenza 
	i = 0;
	for (size_t r = 0; r < p.rows; r++) {
		for (size_t c = 0; c < p.cols; c++) {
			f->data[i] = p.data[r * p.cols + c];
			i++;
		}
	}
	free(p.data);
	free(vec);
	
}