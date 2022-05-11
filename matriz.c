#include<stdio.h>
#include<conio.h>


int main()
{
	int filas,columnas;
	
	do{
		printf("\nDigite las filas que ocupe: ");
		scanf("%d",&filas);
		printf("\nDigite las columnas que ocupe: ");
		scanf("%d",&columnas);
	}while(filas!=columnas);
	
	int matriz[filas][columnas];
	int i,j;
	
	for(i = 0; i < filas; i++)
	{
		for(j = 0; j < columnas; j++)
		{
			matriz[i][j]= 1 + rand()% 10;
		}
	}
	for(i = 0; i < filas; i++)
	{
		for(j = 0; j < columnas; j++)
		{
			printf("[%d] ",matriz[i][j]);
		}
		printf("\n");
	}
	int contador_par=0;
	int contador_impar=0;
	for(i = 0; i < filas; i++)
	{
		for(j = 0; j < columnas; j++)
		{
			if(matriz[i][j]%2==0)
			{
				contador_par=contador_par+1;
				printf("\nHAY %d PARES",contador_par);
			}
			else
			{
				contador_impar=contador_impar+1;
				printf("\nHAY %d IMPARES",contador_impar);
			}
		}
	}
	getch();
}
