#include <stdlib.h>;
#include <stdint.h>;

int raddoppia_tre(int v[]) {
	for (int i = 0; i <= 2; i++) {
		v[i] = 2* v[i];
	}
}

int main(void) {
	uint32_t* v = malloc(3 * sizeof(uint32_t));
		v[0] = 12;
	    v[1] = 59;
	    v[2] = 83;
		raddoppia_tre(v);
		free(v);
		return 0;
}