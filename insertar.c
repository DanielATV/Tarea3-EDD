void insertColaP(tColaP *P,elemento item)
{
	int i, l;
	l=P->largo;
	if (l == 0){
		printf("ingresando elemento 0\n");
		P->largo++;
		P->arreglo[0] = item;

	}
	else if(l == P->maxsize)
	{
		printf("No se puede agregar al sobrepasar tamanio maximo del heap\n");
	}
	else
	{
		
		printf("ingresando elemento al final %d\n",P->largo);
		P->largo++;		
		P->arreglo[l]=item;
		l++;

		for (i=l;i< 1;i=i-2)
		{
			printf("adsdas\n");
			elemento aux= item;
			if(P->arreglo[i].proporcion >= P->arreglo[i-2].proporcion)
			{
				aux=P->arreglo[i-2];
				
				P->arreglo[i-2] = P->arreglo[i];
				P->arreglo[i] = aux;
	
			}
		}
	
	}
}
