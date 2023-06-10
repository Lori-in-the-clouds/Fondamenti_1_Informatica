#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include "carcassonne.h";

int main(void) {
	struct casella c;
	c.x = 2;
	c.y = -1;
	c.lati[0] = 's';
	c.lati[1] = 's';
	c.lati[2] = 'f';
	c.lati[3] = 'c';

	struct casella* tabellone = malloc(7* sizeof(char));
	tabellone[0].x = 2;
	tabellone[0].y = 0;
	tabellone[0].lati[0] = 'f';
	tabellone[0].lati[1] = 'f';
	tabellone[0].lati[2] = 's';
	tabellone[0].lati[3] = 's';

	tabellone[1].x = 1;
	tabellone[1].y = -1;
	tabellone[1].lati[0] = 'f';
	tabellone[1].lati[1] = 'c';
	tabellone[1].lati[2] = 'f';
	tabellone[1].lati[3] = 's';
	
	tabellone[2].x = 1;
	tabellone[2].y = 0;
	tabellone[2].lati[0] = 'f';
	tabellone[2].lati[1] = 's';
	tabellone[2].lati[2] = 'f';
	tabellone[2].lati[3] = 's';

	tabellone[3].x = 0;
	tabellone[3].y = 1;
	tabellone[3].lati[0] = 'c';
	tabellone[3].lati[1] = 'c';
	tabellone[3].lati[2] = 'c';
	tabellone[3].lati[3] = 'c';

	tabellone[4].x = 1;
	tabellone[4].y = 1;
	tabellone[4].lati[0] = 'f';
	tabellone[4].lati[1] = 'f';
	tabellone[4].lati[2] = 'f';
	tabellone[4].lati[3] = 'c';

	tabellone[5].x = 0;
	tabellone[5].y = 0;
	tabellone[5].lati[0] = 'c';
	tabellone[5].lati[1] = 's';
	tabellone[5].lati[2] = 'f';
	tabellone[5].lati[3] = 's';

	tabellone[6].x = 0;
	tabellone[6].y = -1;
	tabellone[6].lati[0] = 'f';
	tabellone[6].lati[1] = 's';
	tabellone[6].lati[2] = 's';
	tabellone[6].lati[3] = 's';

	size_t dim = 7;
	controlla_casella(&c,&(*tabellone), dim );
	return 0;
}