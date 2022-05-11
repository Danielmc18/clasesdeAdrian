
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void entrada();
void salida();
void sumar_fila();
void sumar_columna();
int f,c,i,j;
int arreglo_1[100][100];

main()
{
	srand (time(NULL)); 
	entrada();
	salida();
	sumar_fila();
	sumar_columna();
}

void entrada()
{
	//Aqui se pregunta las dimensiones del arreglo bidimensional 
    printf("Cantidad de filas:");
	scanf("%d", &f);
	printf("Cantidad de columnas:");
	scanf("%d", &c);
	
	for(i=1;i<=f;i++)//indica la fila
	{
		for(j=1;j<=c;j++)//indica la columna
		{
			//se rellena el arreglo aleatorio
			arreglo_1[i][j]= 0 + rand() % 101;
		}
	}
}

void salida()
{
	printf("\nPrimer Arreglo\n");	
	printf("\n");
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=c;j++)
		{
		 printf("%d\t", arreglo_1[i][j]);	
		}
		printf("\n");
	}	
}

void sumar_fila()
{
	int fila;
	int suma=0;
	
	printf("\nQue fila desea sumar del arreglo: ");
	scanf("%d",&fila);
	
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i==fila)
			{
				suma=suma+arreglo_1[i][j];
			}
		}
	}
	printf("\nLa suma de la fila %d es: %d ",fila,suma);	
}

void sumar_columna()
{
	int columna;
	int total=0;
	
	printf("\n");
	printf("\nQue columna desea sumar: ");
	scanf("%d",&columna);
	
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(j==columna)
			{
				total=total+arreglo_1[i][j];
			}
		}
	}
	printf("\nLa suma de la columna %d es: %d",columna,total);
}
