#include <stdio.h>
int sumar_arreglo(int f, int c)
{
	int i,j;
	int arreglo[f][c];
	int suma=0;
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			arreglo[i][j]= 1 + rand()% 10;
		}
	}
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n%d\n", suma);
			suma=suma+arreglo[i][j];
		}
	}
	return suma;
}
