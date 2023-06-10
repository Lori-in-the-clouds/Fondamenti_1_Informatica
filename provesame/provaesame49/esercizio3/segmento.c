#include "segmento.h"
#include <stdlib.h>
struct segmento* intersezione(struct segmento s1, struct segmento s2) {
	if (s1.a > s1.b || s2.a > s2.b) {
		return NULL;
	}
	struct segmento *p= malloc(1*sizeof(struct segmento));
	int m = 1;
	int* vec = malloc(m *sizeof(int));
	int s = 0;
	for (int i = s1.a; i < s1.b; i++) {
		for (int j = s2.a; j < s2.b; j++) {
			if (i == j) {
				
				
				
				vec[s] = i;

				s++;
				m++;
				vec = realloc(vec, m * sizeof(int));
			}
		}
	}
	//se è nullo 
	if (s == 0) {
		free(vec);
		return NULL;
	}
	//cerca il min e il max
	if (s == 1) {
		p->a = vec[0];
		p->b = vec[0] + 1;
		free(vec);
		return p;
	}
	int min = vec[0];
	int max = vec[1];
	for (int i = 0; i < m-1; i++) {
		if (vec[i] <= min) {
			min = vec[i];
		}
		if (vec[i] >= max) {
			max = vec[i];
		}
	}
	p->a = min;
	p->b = max + 1;
	free(vec);
	return p;


}
