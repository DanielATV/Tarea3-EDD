#include <stdio.h>
#include <stdlib.h>
#include "heap.h"
#include "heap.c"

int main(){
	
	int num_obj, peso_max, i,peso_aux, valor_aux;

	
	printf("Ingrese numero de objetos: ");
	scanf("%d",&num_obj);

	
	elemento *objetos=(elemento*)malloc(sizeof(elemento)*num_obj);

	for(i=0; i<num_obj; i++){
		printf("Ingrese el peso %d: ",i);
		
		scanf("%d",&peso_aux);
		objetos[i].peso = peso_aux;
		objetos[i].fraccion = 0;
		
	}
	for(i=0; i<num_obj; i++){
		printf("Ingrese el valor %d: ",i);
		
		scanf("%d",&valor_aux);
		objetos[i].valor= valor_aux;
		objetos[i].proporcion =(float)(objetos[i].valor)/objetos[i].peso;
		
	}
	printf("Ingrese peso maximo: ");
	scanf("%d",&peso_max);
	
//-------------------

	//---------------Para imprimir datos iniciales----------------
	/*
	for(i=0;i<num_obj;i++){
		printf("el objeto %d tiene peso %d valor %d y division(valor/peso) %f\n",i,objetos[i].peso,objetos[i].valor,objetos[i].proporcion);
	}
	printf("cap_max = %d\n",peso_max);
	
	*/
	//-------------------------------------------------------------


	
	



/*
tColaP *cola = initColaP(num_obj);
int cap_actual=cap_max;
for(i = 0;i<num_obj;i++)
{
	insertarelem(cola, objetos[i]);

}
while(cap_actual >0)
{
	elemento *el = buscarmax(cola);
	if(cap_actual - el.peso>=0)
	{
		el.fraccion = 1;
		cap_actual  -= el.pesoM
		eliminarelem(cola,el);
	}
	else
	{
		el.fraccion = (float)(cap_actual - el.peso)/el.peso;
		cap_actual = 0;	
	}


}

*/



//-------------------
	
	free(objetos);
	
	return 0;


}
