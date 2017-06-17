#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
#include "heap.c"

int main(){
	elemento *objetos;
	int  peso_max, peso_aux, valor_aux;
	tColaP *P;
	elemento el;
	long unsigned int num_obj, i;
	float frac;
	
	//printf("Ingrese numero de objetos: ");
	scanf("%lu",&num_obj);

	
	objetos=(elemento*)malloc(sizeof(elemento)*num_obj);

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
	//printf("Ingrese peso maximo: ");
	scanf("%d",&peso_max);

	P = initColaP(num_obj);

	for(i =0; i <num_obj;i++) insertColaP(P,objetos[i]);	

	while(peso_max >0)
	{
		el = findMax(P);
		if(peso_max - el.peso>=0)
		{
			el.fraccion = 1;
			peso_max  -= el.peso;
			
			objetos[el.pos] = el;
			removeMax(P);
		}
		else
		{
			frac = (float)(el.peso - peso_max)/el.peso;
			el.fraccion =1- frac;
			el.peso = el.peso * (frac);
			el.valor = el.valor * (frac);
			el.proporcion = (float)el.valor/el.peso;
			peso_max = 0;
			objetos[el.pos] = el;

			removeMax(P);
			insertColaP(P,el);
		}
	}



	for(i =0; i <num_obj;i++) printf("%.6f\n",objetos[i].fraccion);

	//clearColaP(P);
	free(objetos);
	
	return 0;


}
