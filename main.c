#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

/*****
*
int main()
******
*
Hace funcionar todo el programa, implementa todo el tda del heap para resolver el problema pedido en la tarea, utilizando
un arreglo auxiliar para mantener el orden de ingreso..
******
*
Input:
*
void.
*
******
*
Returns:
*
int, retorna 0 por convencion.
*****/
int main(){
	elemento *objetos;
	int  peso_aux, valor_aux; // peso y precio de cada elemento
	long int peso_max; // peso maximo del barco
	tColaP *P;
	elemento el; // elemento auxiliar
	long unsigned int num_obj, i; // tamaño del arreglo y el heap
	float frac; // fracion de cada elemento
	
	//printf("Ingrese numero de objetos: ");
	scanf("%lu",&num_obj);

	
	objetos=(elemento*)malloc(sizeof(elemento)*num_obj); // creacion del arreglo auxiliar

	for(i=0; i<num_obj; i++){
		//printf("Ingrese el peso %d: ",i);
		
		scanf("%d",&peso_aux);
		objetos[i].peso = peso_aux;
		objetos[i].pos = i;
		
	}
	for(i=0; i<num_obj; i++){
		//printf("Ingrese el valor %d: ",i);
		
		scanf("%d",&valor_aux);
		objetos[i].valor= valor_aux;
		objetos[i].proporcion =(float)(objetos[i].valor)/objetos[i].peso;
		
	}
	// hasta aca solo tenemos un arreglo
	//printf("Ingrese peso maximo: ");
	scanf("%li",&peso_max);

	P = initColaP(num_obj);

	for(i =0; i <num_obj;i++) insertColaP(P,objetos[i]);	
	// creamos y agregamos los datos en el heap de maximos.
	//printf("peso_max: %d\n",peso_max);
	while(peso_max >0)
	{
		//printf("peso_max: %d\n",peso_max);
		el = findMax(P);
		if(peso_max - el.peso>=0) // un elemento que aun pueda estar dentro del barco
		{
			el.fraccion = 1;
			peso_max  -= el.peso;
			
			objetos[el.pos] = el; // es necesario reemplazarlo en el arreglo para el orden
			removeMax(P);
		}
		else // ultimo elemento que entra, es una fraccion
		{
			frac = (float)(el.peso - peso_max)/el.peso; // hacemos la fraccion
			el.fraccion =1- frac;
			el.peso = el.peso * (frac);
			el.valor = el.valor * (frac);
			el.proporcion = (float)el.valor/el.peso;
			peso_max = 0;
			objetos[el.pos] = el; // se reemplaza

			removeMax(P);
			insertColaP(P,el);
		}
	}



	for(i =0; i <num_obj;i++) printf("%.6f\n",objetos[i].fraccion); // se imprime las fracciones

	clearColaP(P); // liberamos memoria
	free(objetos);
	
	return 0; // listo!


}
