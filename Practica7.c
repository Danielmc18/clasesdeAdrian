#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// programa que genere una matriz 3x3 y que se genere con numeros random de 0 al 1 y despues de la matriz tu le dices al usuario que te diga 
// una coordenada de la matriz generada si en esa coordenada es 0 imprimir perdiste , si es igual a 1 ganastes.

int f=3;
int c=3;

int main()
{
	int i,j;
	int arreglo[f][c];
	srand(time(NULL));
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			arreglo[i][j]= 0+rand()%(1+1)-0;
		}
	}
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("[%d] ",arreglo[i][j]);
		}
		printf("\n");
	}
	
	int f,c;
	printf("\nque fila y columna quiere del arreglo? ");
	scanf("%d,%d",&f,&c);
	
	if(arreglo[f][c]==0)
	{
		printf("\nSu numero fue O asi que....");
		printf("\nUSTED PERDIO");
	}
	else
	{
		printf("\nSu numero fue 1 asi que.....");
		printf("\nusted gano");
	}
	
	
}
