#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

const int max = 10;
void lectura(int vec[],int t);
void imprime(int vec[],int t);
void producto(int *x, int* y, int* z, int t);

main()
{
	srand(time(NULL));
	int vec1[max],vec2[max],vec3[max];
	lectura(vec1,max);
	imprime(vec1,max);
	printf("\nArreglo2");
	lectura(vec2,max);
	imprime(vec2,max);
	producto(vec1,vec2,vec3,max);
	printf("\nEl producto de los vectores es: \n");
	imprime(vec3,max);
	printf("\n");
	getch();
}

lectura(int vec[],int t)
{
	int i;
	for(i = 0; i<t; i++)
	{
		vec[i]=1+rand()%10;
	}
}

void imprime(int vec[],int t)
{
	int i;
	for(i = 0; i<t; i++)
	{
		printf("\n Vec[%d]=%d",i+1,vec[i]);
	}
}

void producto(int *x, int* y, int* z, int t)
{
	int i;
	for(i=0;i<t;i++){
		z[i]=x[i]*y[i];
	}
}
