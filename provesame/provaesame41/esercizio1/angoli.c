#include <stdint.h>
#include "angoli.h"
struct angolo somma_angoli(struct angolo a, struct angolo b) {
	struct angolo ris;
	int dis2 = 0;
	int dis1 = 0;
	int dis = 0;
	//sommaimo i secondi
	uint16_t sommasecondi = a.secondi + b.secondi;

	if ((sommasecondi / 60.) > 1.00001) {
		 dis2 = sommasecondi / 60;
		sommasecondi = sommasecondi - (60 * dis2);
	}
	ris.secondi = sommasecondi;

	//sommaimo i primi
	uint16_t sommaprimi = a.primi + b.primi+(dis2);

	if ((sommaprimi / 60.) > 1.000001) {
		 dis1 = sommaprimi / 60;
		sommaprimi = sommaprimi - (60 * dis1);
	}
	ris.primi = sommaprimi;

	//sommiamo i gradi 
	uint16_t sommagradi = a.gradi + b.gradi + dis1;

	if ((sommagradi / 360.) > 1.00000) {
		dis = sommagradi / 360;
		sommagradi = sommagradi - (360 * dis);
	}
	ris.gradi = sommagradi + dis;
	
	
	

	

	return ris;
}