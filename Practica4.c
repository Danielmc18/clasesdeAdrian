#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//arreglo bidi de tamaño filas*columnas que sume una fila si y una fila no
int main()
{
	int i,j,f,c;
	int suma;
	srand(time(NULL));
	printf("\nCuantas filas quiere: ");
	scanf("%d",&f);
	printf("\nCuantas columnas quiere: ");
	scanf("%d",&c);
	
	int arreglo[i][j];	
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
		   arreglo[i][j]= 0+rand()%(10+1)-0;	
		}
		printf("\n");
	}
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
		   printf("%d, ",arreglo[i][j]);	
		}
		printf("\n");
	}
	for(i=0;i<f;i+=2)
	{
		for(j=0;j<c;j++)
		{
		   	suma=suma+arreglo[i][j];
		}
	}
	printf("\n La suma es %d",suma);
	
	
	
	
}
