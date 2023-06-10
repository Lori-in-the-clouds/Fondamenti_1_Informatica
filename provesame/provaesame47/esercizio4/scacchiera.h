#if !defined SCACCHIERA_H
#define SCACCHIERA_H
#include <stdio.h>
#include <stdlib.h>
struct scacchiera {
	char caselle[64];
};
extern void stampa_scacchiera(const struct scacchiera* sc);
#endif /*SCACCHIERA_H*/