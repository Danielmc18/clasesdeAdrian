#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	srand(time(NULL));
	
	int minimo,maximo;
	int n = 20;
	minimo = 1;
	maximo = 100;
	int arreglo[n];
	int i;
	
	float promedio = 0;
	for(i=0; i < n; i++){
		arreglo[i]= minimo + rand()% maximo;
		promedio += arreglo[i];
	}	
	promedio = (float)100*promedio/n;
	printf("Promedio: [%d]\n", promedio);
	for(i=0; i < n; i++){
		printf("[%d]", arreglo[i]);
	}
	float puntos;
	printf("\nDigite el promedio que pueda tener el arreglo: ");
	scanf("%f", &puntos);
	float diferencia = promedio - puntos;
	
	printf("\n%d", diferencia);
	
	getch();
}
