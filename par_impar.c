#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	
	srand(time(NULL));
	int n,i;
	printf("\nDe que Tamanio quiere su arreglo: ");
	scanf("%d",&n);
	
	int arreglo[i];
	for(i = 0; i < n; i++)
	{
		arreglo[i]= 1 + rand()% 100;
	}
	for(i = 0; i < n; i++)
	{
		printf(" [%d] ",arreglo[i]);
	}
	printf("\n");
	int contador_par=0;
	int contador_impar=0;
	int par;
	int impar;
	
	for(i = 0; i < n; i++)
	{
		if(arreglo[i]%2==0)
		{
			contador_par = contador_par + 1;
			par=arreglo[i];
			printf("\nLos pares son: %d ",par);
		}
		else
		{
			contador_impar = contador_impar + 1;
			impar=arreglo[i];
			printf("\nLos impares son: %d ",impar);
		}
	}
	printf("\n");
	printf("\nCantidad de pares: %d ",contador_par);
	printf("\nCantidad de impares: %d ",contador_impar);
	getch();
	
	fflush(stdin);
}
