#include "heap.h"
#include <stdlib.h>
#include <stdio.h>

tColaP *initColaP(int t){
	elemento *tarreglo;
	tColaP *P = (tColaP *)malloc(sizeof(tColaP));
	tarreglo = (elemento *)malloc(sizeof(elemento)*t);
	P->arreglo = tarreglo;
	P->maxsize = t+1;
	P->largo = 0;
	return P;
}

void clearColaP(tColaP * p){
  p -> maxsize = 0;
  p -> largo = 0;
  free((void *)p -> arreglo);
}

// entrega el maximo del heap
elemento findMax(tColaP *P){
	return P->arreglo[1];
}

int sizeColaP(tColaP * p){
  int i;
  i = p ->largo;
  return i;
}

void removeMax(tColaP *P){
	int i;
	elemento aux;

	i = 1;
	P->arreglo[1] = P->arreglo[P->largo];
	P->largo --;

	while(2*i < P->largo || 2*i+1 < P->largo){
		if(P->arreglo[i].proporcion <= P->arreglo[2*i].proporcion || P->arreglo[i].proporcion <= P->arreglo[2*i+1].proporcion){
			if (P->arreglo[2*i].proporcion <= P->arreglo[2*i+1].proporcion){
				aux = P->arreglo[1];
				P->arreglo[i] = P->arreglo[2*i+1];
				P->arreglo[2*i+1] = aux;
				i = 2*i+1;
			}
			else{
				aux = P->arreglo[1];
				P->arreglo[i] = P->arreglo[2*i];
				P->arreglo[2*i] = aux;
				i = 2*i;
			}
		}
		else break;
	}
}


void insertColaP(tColaP *P,elemento item)
{
	int i, l;
	elemento aux;

	l=P->largo;
	item.fraccion = 0.0;

	if(l == P->maxsize)
	{
		printf("No se puede agregar al sobrepasar tamanio maximo del heap\n");
	}
	else
	{
		P->largo++;		
		l++;
		P->arreglo[l]=item;

		for (i=l;i/2 > 0;i=i/2)
		{
			if(P->arreglo[i].proporcion >= P->arreglo[i/2].proporcion)
			{
				aux=P->arreglo[i/2];
				
				P->arreglo[i/2] = P->arreglo[i];
				P->arreglo[i] = aux;
	
			}
			else break;
		}
	
	}
}
