#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int minimo,maximo;
	int n;
	srand(time(NULL));
	printf("\nDesde que valor quiere empezar su arreglo: ");
	scanf("%d",&minimo);
	printf("\nDesde que valor quiere terminar su arreglo: ");
	scanf("%d",&maximo);
	printf("\n");
	printf("\nDe que tamanio quiere su arreglo: ");
	scanf("%d",&n);
	printf("\n");
	
	int arreglo[n];
	int i;
	
	//llenado e impresion del arreglo//
	for(i = 0; i < n; i++)
	{
		arreglo[i]= minimo + rand()% maximo;
	}
	
	for(i = 0; i < n; i++)
	{
		printf("[%d] ",arreglo[i]);
	}
	
	int mayor=0;
	int menor=999;
	for(i = 0; i < n; i++)
	{
		if(mayor<arreglo[i])
		{
			mayor=arreglo[i];
		}
		if(arreglo[i]<menor)
		{
			menor=arreglo[i];
		}
	}
	printf("\n");
	printf("\nEl numero mayor es %d ",mayor);
	printf("\nEl numero menor es %d ",menor);	
	getch();
	return 0;
}
