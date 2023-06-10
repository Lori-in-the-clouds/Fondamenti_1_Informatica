#include "weight.h"
#include <math.h> 
double ideal_weight(int h, int age, char sex, enum formula f) {
	double peso = 0;
	if (h < 0 || age < 0 || (sex != 'M' && sex != 'F')) {
		return -1;
	}
	if (f != lorenz && f != keys && f != berthean) {
		return -1;
	}
	//primo tipo di misurazione
	if (f == lorenz) {
		if (sex == 'M') {
			peso = h - 100. - (h - 150.) / 4.;
		} 
		 else if (sex == 'F') {
			peso = h - 100. - (h - 150.) / 2.;
		}
	}
	//secondo tipo di misurazione
	if (f == keys) {
		if (sex == 'M') {
			peso = ((h / 100.) * (h / 100.)) * 22.1;
		}
		else if (sex == 'F') {
			peso = ((h / 100.) * (h / 100.)) * 20.6;
		}
	}
	//terzo tipo di misurazione
	if (f == berthean) {
		peso = 0.8 * (h - 100.) + age / 2.;
	}
	return peso;
}