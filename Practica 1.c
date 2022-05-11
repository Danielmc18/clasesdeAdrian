#include<stdio.h>
#include<conio.h>
//parametros de funciones
int suma_2_valores(int a,int b);

//programa que mediante una funcion te regrese la suma de dos valores//

main(){
	//declarar las variables a usar
	int valor1,valor2;
	
	//pedir los dos valores
	printf("\nDigite el numero 1: ");
	scanf("%d",&valor1);
	printf("\nDigite el numero 2: ");
	scanf("%d",&valor2);
	
	//variable a donde se almacenara la suma
	int suma;
	
	//"suma" es donde almacenara el valor de a y b de la función
	suma=suma_2_valores(valor1,valor2);
	
	//donde se va a imprimir el resultado
	printf("\nEl valor del resultado es: %d ",suma);
	
	getch();
}

//funcion que hara la suma de los dos valores
int suma_2_valores(int a,int b)
{
	//con esto la funcion en automatico la funcion te regresara la suma de los dos valores
	return a+b;
}


