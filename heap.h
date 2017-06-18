#ifndef __heap_h__
#define __heap_h__

#include <stdlib.h>


typedef struct{
	int peso;
	int valor;
	float proporcion;
	long unsigned int pos;
	float fraccion;
} elemento;

typedef struct{
	elemento *arreglo;
	long unsigned int maxsize;
	long unsigned int largo;	
} tColaP;

// inicializa un heap como vacío
tColaP *initColaP (long unsigned int t);
// elimina todos los elementos de una cola de prioridad, dejándola vacía
void clearColaP (tColaP *P);
// encuentra el máximo elemento del conjunto
elemento findMax (tColaP *P);
// cantidad de elementos en la cola de prioridad
long unsigned int sizeColaP (tColaP *P);
// elimina el máximo elemento del conjunto
void removeMax (tColaP *P);
// inserta un elemento “item” en la cola de prioridad
void insertColaP (tColaP *P,elemento item);
#endif

