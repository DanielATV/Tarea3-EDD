#include "heap.h"
#include <stdlib.h>
#include <stdio.h>

tColaP *initColaP(int t){
	elemento *tarreglo;
	tColaP *P = (tColaP *)malloc(sizeof(tColaP));
	tarreglo = (elemento *)malloc(sizeof(elemento)*t);
	P->arreglo = tarreglo;
	P->maxsize = t;
	P->largo = 0;
	return P;
}

// entrega el maximo del heap
elemento findMax(tColaP *P){
	return P->arreglo[1];
}

void removeMax(tColaP *P){
	int i = 1;
	elemento aux;
	P->arreglo[1] = P->arreglo[P->largo];
	P->largo --;
	while(2*i < P->largo || 2*i+1 < P->largo;){
		if(P->arreglo[i].proporcion <= P->arreglo[2*i].proporcion || P->arreglo[i].proporcion <= P->arreglo[2*i+1].proporcion){
			if (P->arreglo[2*i].proporcion <= P->arreglo[2*i+1].proporcion){
				aux = P->arreglo[1];
				P->arreglo[i] = P->arreglo[2*i+1];
				P->arreglo[2*i+1] = P->arreglo[i];
				i = 2*i+1;
			}
			else{
				aux = P->arreglo[1];
				P->arreglo[i] = P->arreglo[2*i];
				P->arreglo[2*i] = P->arreglo[i];
				i = 2*i;
			}
		}
		else{
			break;
		}
	}
}
