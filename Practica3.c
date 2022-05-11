#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// programa que genere un arreglo de tamaño N con rango de 0 a 10 y multiplique los valores pero que no tome en cuenta lo 0
int main()
{
	srand(time(NULL));
	int n;
	int multiplicar=1;
	
	printf("\nDe que tamanio quiere su arreglo: ");
	scanf("%d",&n);
	
	int arreglo[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		arreglo[i]= 0 + rand() % (10+1)-0;
	}
	for(i=0;i<n;i++)
	{
		printf("[%d] ",arreglo[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arreglo[i]>0)
		{
			multiplicar=multiplicar*arreglo[i];
		}
	}
	printf("\n La multiplicacion es: %d ",multiplicar);
	
	
	
	
}
