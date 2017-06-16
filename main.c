#include <stdio.h>
#include <stdlib.h>

typedef struct Objeto{
 int peso;
 int valor;
 float division;
} Objeto;

int main(){
	
	int num_obj, peso_max, i;

	
	printf("Ingrese numero de objetos: ");
	scanf("%d",&num_obj);

	
	Objeto *objetos=(Objeto*)malloc(sizeof(Objeto)*num_obj);

	for(i=0; i<num_obj; i++){
		printf("Ingrese el peso %d: ",i);
		int peso_aux;
		scanf("%d",&peso_aux);
		objetos[i].peso = peso_aux;
		
	}
	for(i=0; i<num_obj; i++){
		printf("Ingrese el valor %d: ",i);
		int valor_aux;
		scanf("%d",&valor_aux);
		objetos[i].valor= valor_aux;
		objetos[i].division =(float)(objetos[i].valor)/objetos[i].peso;
		
	}
	printf("Ingrese peso maximo: ");
	scanf("%d",&peso_max);
	
//-------------------

	//Para imprimir datos iniciales
	/*
	for(i=0;i<num_obj;i++){
		printf("el objeto %d tiene peso %d valor %d y division(valor/peso) %f\n",i,objetos[i].peso,objetos[i].valor,objetos[i].division);
	}
	printf("cap_max = %d\n",peso_max);
	
	*/


//-------------------
	
	free(objetos);
	
	return 0;


}
