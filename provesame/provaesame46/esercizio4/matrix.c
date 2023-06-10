#include <stdlib.h>
#include "matrix.h"
struct matrix* mat_pad(const struct matrix* mat) {
	struct matrix* p = malloc(1 * sizeof(struct matrix));
	p->rows = (mat->rows) + ((mat->rows) - 1);
	p->cols = (mat->cols) + ((mat->cols) - 1);
	p->data = calloc(p->cols * p->rows, sizeof(struct matrix));
	int i = 0;
	int n = 0;
	
	for(size_t r=0; r < p->rows; r++) {
		int controller = 0;
		for (size_t c = 0; c < p->cols; c++) {

			if (controller == 0) {
				if (r % 2 != 0) {
					for (size_t c = 0; c < p->cols; c++) {
						p->data[i] = 0;
						i++;

					}
					controller++;
					n++;
					break; //attenzione
				}
			}
			 

				if (i == ((r+1) * p->cols - 1)) {
					p->data[i] = mat->data[(r-n) * (mat->cols) + c];
					i++;
					break;
				}
				p->data[i] = mat->data[(r-n) * (mat->cols) + c];//attenzione
				i++;

				p->data[i] = 0;
				i++;
			}
			
		}
		
	return p;





}