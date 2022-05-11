#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int tirar_dado();

void avanzar(int tablero[][10], int pasos);

int total_pasos =0;

int continuar =1;

//programa que genere una matriz de 10x10 con numeros random del 1 al 5 y despues llegar lo mas lejos de la matriz al momento de imprimirla 
//al usuariao le dices va a poder llamar una funcion que se llama tirar dado y te regresa el valor que vas a vanzar en la matriz 

int main()
{
	srand(time(NULL));
	int f=10;
	int c=10;
	int i,j;
	int matriz[f][c];
	int dado;
	
	// aqui se genera el arreglo con numeros random
	for(i=0;i<f;i++)
	{
		for(j=0;j<c;j++)
		{
		  matriz[i][j]=	1 + rand() % 6;
		}
	}
	
	while(continuar == 1)
	{
		//si el total supera a los 100 pasos es que ya no hay mas de una matriz  10x10=100
		if(total_pasos >= 100)
		{
			continuar = 0;
			printf("Fin del juego!");
		}
		//sino vas a continuar tirando el dado hasta que pierdas o ganes
		else
		{
			//este es como para que tires el dado con el puro espacio
			printf("\nPresione enter para lanzar el dado\n");
			getch();
			
			//aqui el dado esta tomando el valor de la funcion tirar dado 
			dado = tirar_dado();
			
			//aqui es donde te imprime que valor del 1-6 te toco del dado
			printf("Obtuviste: %d\n", dado);
			
			//aqui hacemos llamada la funcion avanzar que es la que va estar iterando le pasamos como parametros la matriz y el valor del dado
			avanzar(matriz, dado);
			
			//aqui la variable continuar cuando es 0 por q en los condicionales de la funcion dio 0 es donde finaliza el programa
			if(continuar == 0)
			{
				printf("\nHas perdido, bye!\n");
			}
			printf("\n");
		}
	}
	
}

int tirar_dado()
{
	int dado;
	dado= 1 + rand() % 6;
	return dado;
}

void avanzar(int tablero[][10], int dado)
{
	int i,j;
	int pasos;
	total_pasos += dado;
	pasos = total_pasos;
	
	printf("\nTotal pasos: %d\n", total_pasos);
	for(i=0; i < 10; i++)
	{
		for(j=0; j < 10; j++)
		{
			if(pasos == 0)
			{
				if(tablero[i][j-1] == 3)
				{
					continuar = 0;
					return;
				}	
				else if(tablero[i][j-1] == 5)
				{
					printf("\nObtuviste un paso extra!\n");
					total_pasos += 1;
					printf("[%d]\n", tablero[i][j]);
					if(tablero[i][j] == 3)
					{
						continuar = 0;
					}
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				printf("[%d]", tablero[i][j]);
				pasos -= 1; 
			}
		}
		printf("\n");
	}
	return;
}
