#if !defined FIRE_SIM_H
#define FIRE_SIM_H
struct forest {
	size_t rows, cols;
	char* data;

};
extern void propagate_fire(const struct forest* f);
#endif //FIRE_SIM_H

