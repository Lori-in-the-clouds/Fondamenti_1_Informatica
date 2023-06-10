#include <stdlib.h>
#include "unico.h"
int main(void) {
    struct carta c = {
        (struct oggetto[]) {
            { "nota", "nera" },
            { "penna", "giallo" },
            { "penna", "verde" },
            { "penna", "giallo" },
            { "nota", "giallo" },
            
        }, 5 };
    const struct oggetto* o = unico(&c);
}