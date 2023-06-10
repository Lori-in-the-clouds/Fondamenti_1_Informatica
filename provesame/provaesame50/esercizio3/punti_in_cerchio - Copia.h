#if !defined PUNTI_IN_CERCHIO_H
#define PUNTI_IN_CERCHIO_H
struct punto {
	double x, y;
};
extern struct punto* punti_in_cerchio(const struct punto* p, size_t n, double r, size_t* count);
#endif //PUNTI_IN_CERCHIO_H