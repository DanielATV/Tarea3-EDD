#include <stdio.h>
#include <stdlib.h>



int main(){
	FILE *fp;
	int num_obj, peso_max, i;

	fp = fopen("input-edd-t3.txt","r");

	fscanf(fp,"%d",&num_obj);

	int *precios=(int*)malloc(sizeof(int)*num_obj);
	int *pesos=(int*)malloc(sizeof(int)*num_obj);
	
	if (precios==NULL || pesos==NULL)	printf("error en manejo de memoria precios o pesos");

	for(i=0; i<num_obj; i++)	fscanf(fp,"%d",&precios[i]);
	
	for(i=0; i<num_obj; i++)	fscanf(fp,"%d",&pesos[i]);
		
	fscanf(fp,"%d",&peso_max);
//-------------------









//-------------------
	fclose(fp);
	free(precios);
	free(pesos);
	return 0;


}
