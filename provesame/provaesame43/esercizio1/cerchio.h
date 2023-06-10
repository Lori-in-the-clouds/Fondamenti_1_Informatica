#if !defined CERCHIO_C
#define CERCHIO_C
#include <stdbool.h>
struct punto {
	double x, y;

};
struct cerchio {
	double x, y, r;
};
extern bool nel_cerchio(const struct punto* p, const struct cerchio* c);
#endif //CERCHIO_C