#include "heap.h"
#include <stdlib.h>
#include <stdio.h>

tColaP *initColap(int t){
	elemento *tarreglo;
	tColaP *P;
	tarreglo = (elemento *)malloc(sizeof(elemento)*t);
	P->arreglo = tarreglo;
	P->tamaño = t;
	P->largo = 0;
}
