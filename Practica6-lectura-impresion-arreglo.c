#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

const int max=10;

void lectura(int arreglo[][max],int f,int c);
void imprimir(int arreglo[][max],int f,int c);

/*
Programa que genere un arreglo bidi n1xn2 una para leer y el otro para imprimir un arreglo bidiminesional.1-10
*/

int main()
{
	srand(time(NULL));
	int f,c;
	
	printf("\nCuantas filas quiere: ");
	scanf("%d",&f);
	do{
		printf("\nCuantas columnas quiere: ");
		scanf("%d",&c);
	}while(c>=max);

	int arreglo[f][c];
    
    lectura(arreglo,f,c);
    imprimir(arreglo,f,c);
    
	getch();
	return 0;
}

void lectura(int arreglo[][max],int f,int c)
{
	int i,j;
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			arreglo[i][j]= 0+rand()%(10+1)-0;
		}
	}
}

void imprimir(int arreglo[][max],int f,int c)
{
	int i,j;
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("[%d] ",arreglo[i][j]);
		}
		printf("\n");
	}
}



