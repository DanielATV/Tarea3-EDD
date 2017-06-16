#ifndef __heap_h__
#define __heap_h__

#include <stdlib.h>


typedef struct elemento{
	int peso;
	int valor;
	int proporcion;
} elemento;

typedef struct heap{
	int *arreglo;
	int tamaño ;
	int largo;	
} tColaP;

// inicializa un heap con un tamaño t
void initColaP (tColaP *P, int t)
// elimina todos los elementos de una cola de prioridad, dejándola vacía
void clearColaP (tColaP *P);
// encuentra el máximo elemento del conjunto
tipoElem findMax (tColaP *P);
// cantidad de elementos en la cola de prioridad
int sizeColaP (tColaP *P)
// elimina el máximo elemento del conjunto
void removeMax (tColaP *P);
// inserta un elemento “item” en la cola de prioridad
void insertColaP (tCola *P,elemento item);
#endif
