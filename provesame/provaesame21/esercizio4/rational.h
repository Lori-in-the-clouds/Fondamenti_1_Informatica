#if !defined RATIONAL_H
#define RATIONAL_H
#include <stdlib.h>
struct rational {
	int num;
	unsigned int den;
};

extern void rational_mul(struct rational* product, const struct rational* multiplicand, const struct rational* multiplier);
#endif /*RATIONAL_H*/