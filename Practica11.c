#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int i,j,f,c;
	srand(time(NULL));
	f=500;
	c=500;
	/*do{
		printf("\nDigite las filas: ");
		scanf("%d",&f);
		printf("\nDigite las columnas: ");
		scanf("%d",&c);
	}while(f!=c);
	*/
	int arreglo[f][c];
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			arreglo[i][j]=0+rand()%(10+1)-0;
		}
	}
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("[%d]",arreglo[i][j]);
		}
		printf("\n");
	}
	int suma=0;
	for(i=0;i<f;i++)
	{
		suma +=arreglo[i][i];
	}
	printf("\nLa suma de la diagonal es: %d",suma);
}
