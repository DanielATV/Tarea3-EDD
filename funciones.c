#include <stdio.h>
void clearColaP(tColaP * p){
  p -> maxsize = 0;
  p -> largo = 0;
  free((void *)p -> arreglo);
}

int sizeColaP(tColaP * p){
  int i,l;
  i = p ->largo;
  return i;
}

void insertColaP(tColaP *p,elemento a){
  if (sizeColaP(p) == 0){
    p-> largo ++;
    *(p-> arreglo + sizeColaP(p)) = a;
  }
  else{
    p-> largo ++;
    *(p-> arreglo + sizeColaP(p)) = a;
    l = sizeColaP(p);
    while(a->proporcion > *(p-> arreglo + l%2)){
    }
  }
  
}
