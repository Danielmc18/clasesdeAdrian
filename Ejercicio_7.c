#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int filas,columnas;
	
	do{
		printf("\nDigite las filas que quiera: ");
		scanf("%d",&filas);
		printf("\nDigite las columnas que quiera: ");
		scanf("%d",&columnas);
		printf("\n");
	}while(filas!=columnas);
	
	
	int i,j;
	int matriz[filas][columnas];
	
	srand(time(NULL));
	
	//llenado del arreglo y mostrado//
	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
		{
			matriz[i][j]= 1 + rand()% 10;
		}
	}
	
	for(i=0;i<filas;i++)
	{
		for(j=0;j<columnas;j++)
		{
			printf("[%d] ",matriz[i][j]);
		}
		printf("\n");
	}
	
	//aqui se calcula la diagonal principal//
	int suma_diagonal_principal;
	for(i=0;i<filas;i++)
	{
		suma_diagonal_principal += matriz[i][i];
	}
	printf("\nLa suma de la diagonal principal es: %d ",suma_diagonal_principal);
	
	//aqui se calcula la diagonal secundaria//
	int suma_diagonal_secundaria=0;
	for(i=0,j=filas-1;i < filas;i++,j--)
	{
		suma_diagonal_secundaria=suma_diagonal_secundaria+matriz[i][j];
	}
	printf("\nLa suma de la diagonal secundaria es: %d ",suma_diagonal_secundaria);
	
	getch();
}
