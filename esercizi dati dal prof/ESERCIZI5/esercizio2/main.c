#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lettura.h"
int main(void) {
  const char *s = "dati1 (1).bin";
  size_t* size;
  int *soluzione =leggiinteri(s, &size);
  free(soluzione);
  return 0;
}