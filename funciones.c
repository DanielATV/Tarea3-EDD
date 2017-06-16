#include <stdio.h>
void clearColaP(tColaP * p){
  p -> maxsize = 0;
  p -> largo = 0;
  free((void *)p -> arreglo);
}

int sizeColaP(tColaP * p){
  int i,l,aux;
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
    while(l%2 =! 0){
      if (a->proporcion > *(p-> arreglo + l%2).proporcion){
        *(p-> arreglo + l) = *(p-> arreglo + l%2);
        *(p-> arreglo + l%2) = a;
        l = l%2;
      }
      else break;
    }
  }
  
}
