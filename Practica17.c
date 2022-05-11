#include<stdio.h>
#include<stdlib.h>
#include "funciones.h"
#include<conio.h>

int opcion;
struct filas_columnas
{
	int f,c;
};

typedef struct filas_columnas Struct;

Struct pedir_filas_columnas()
{
	Struct s1;
	do{
		printf("\nCuantas filas quiere: ");
		scanf("%d",&s1.f);
		printf("\nCuantas columnas quiere: ");
		scanf("%d",&s1.c);
		printf("\n");
	}while(s1.c!=s1.f);
	return s1;
}

int main()
{
	Struct datos;
	int f,c;	
	do{
		opcion=	Menu();
		switch(opcion)
		{
			case 1:
				srand(time(NULL));
				printf("\nSuma de todo la matriz\n");
				printf("\nLa suma del arreglo es: %d",sumar_arreglo(f,c));
				break;
				
			default:
				printf("\nusted a salido del programa...");
				getch();
				break;		
		}
	}while(opcion!=1);
}


int Menu()
{
	printf("\n1.-Sumar toda la matriz");
	printf("\nQue quiere hacer: ");
	scanf("%d",&opcion);
	printf("\n");
	return opcion;
}





//menu de dos opciones que la 1.- tenga sumar todos los valores del arreglo  2.- la suma de la diagonal principal//
