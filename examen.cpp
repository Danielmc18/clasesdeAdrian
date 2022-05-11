#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	srand(time(NULL));
	
	int minimo,maximo;
	int n = 20;
	int opcion;
	printf("Seleccione una dificultad\nFacil del 1-25\nintermedio 1-50\ndificil 1-100 (1,2,3)> ");
	scanf("%d", &opcion);
	minimo = 1;
	if(opcion==1){
		maximo = 25;
	}
	if(opcion==2){
		maximo = 50;
	}
	if(opcion==3){
		maximo = 100;
	}
	
	int arreglo[n];
	int i;
	
	int suma = 0;
	int porcentaje;
	for(i=0; i < n; i++){
		arreglo[i]= minimo + rand()% maximo;
		suma += arreglo[i];
	}	
	for(i=0; i < n; i++){
		printf("[%d]", arreglo[i]);
	}	
	
	porcentaje = suma/20.0;
	float promedio = float(porcentaje);
	printf("\nPromedio%.2f", promedio);
	float puntos;
	
	if(opcion==1){
		printf("\nDigite el promedio que pueda tener el arreglo (Ej. 1.0-25.0): ");
		scanf("%f", &puntos);
	}
	if(opcion==2){
		printf("\nDigite el promedio que pueda tener el arreglo (Ej. 1.0-50.0): ");
		scanf("%f", &puntos);
	}
	if(opcion==3){
		printf("\nDigite el promedio que pueda tener el arreglo (Ej. 1.0-100.0): ");
		scanf("%f", &puntos);
	}
	float diferencia = promedio - puntos;
	printf("\n%.2f", diferencia);
	if(diferencia <= 0.5 && diferencia >= -0.5){
		printf("\n300 puntos!");
	}
	else if(diferencia >= -1.0 && diferencia <= 1.0){
		printf("\n 100 puntos!");
	}
	else if(diferencia >= -10.0 && diferencia >= 10.0 && diferencia < 11.0){
		printf("\n 50 puntos!");
	}
	else{
		printf("\n 10 puntos :C!");
	}

	

	
	getch();
}
