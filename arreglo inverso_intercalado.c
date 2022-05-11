#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int minimo,maximo;
	int n,i;
	
	srand(time(NULL));
	printf("\nDigite desde donde quiere empezar: ");
	scanf("%d",&minimo);
	printf("\nDigite desde donde quiere terminar el rango: ");
	scanf("%d",&maximo);
	printf("\nDe que tamanio quiere su arreglo: ");
	scanf("%d",&n);
    
	int A[n];
	for(i = 0; i < n; i++)
	{
		A[i] = minimo + rand() % maximo;
	}
	printf("Arreglo A: ");
	for(i = 0; i < n; i++)
	{
		printf("[%d]", A[i]);
	}
	
	int B[n];
	int j;
	for(i = 0, j = n-1; i < n; i++, j--)
	{
		B[i] = A[j];
	}
	printf("\nArreglo B: ");
	for(i = 0; i < n; i++)
	{
		printf("[%d]", B[i]);
	}
	
	int C[n*2];
	for(i = 0, j = 0; i < n*2; i+=2, j++)
	{
		C[i] = A[j];
		C[i+1] = B[j];
	}
	printf("\nArreglo C: ");
	for(i = 0; i < n*2; i++)
	{
		printf("[%d]", C[i]);
	}
	getch();
	return 0;
}
