#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	srand(time(NULL));
	int i,n;
	
	printf("\nDe que tamanio quiere su arreglo: ");
	scanf("%d",&n);
	int arreglo[n];
	
	for(i = 0; i < n; i++)
	{
		arreglo[i]= 1 + rand()% 10;
	}
	for(i = 0; i < n; i++)
	{
		printf("[%d]",arreglo[i]);
	}
	int mayor=0;
	int menor=999;
	for(i=0;i<n;i++)
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
