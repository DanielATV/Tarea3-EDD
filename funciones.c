#include <stdio.h>
void clearColaP(tColaP * c){
  c -> maxsize = 0;
  c -> largo = 0;
  free((void *)c -> arreglo);
}

int sizeColaP(tColaP * c){
  int i;
  i = c ->largo;
  return i;
}

insertColaP
