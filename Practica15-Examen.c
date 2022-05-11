#include<stdio.h>
#include<conio.h>

/*
Programa que permite capturar una lista de n empleados, otorgando su numero de empleado, sueldo, numero de departamento y 
horas trabajadas al mes, para al final imprimir, este mismo arreglo en forma de una tabla.
*/

int main()
{
	int i,j,n;
	
	printf("\nCuantos empleados van a ser: ");
	scanf("%d",&n);
	
	int arreglo[n][3];
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\n[%d]Cual es el numero del empleado: ",i+1);
			scanf("%d",&arreglo[i][0]);	
			printf("\n[%d]Cual es el sueldo del empleado: ",i+1);
			scanf("%d",&arreglo[i][1]);
			printf("\n[%d]Cual es su numero de apartamento: ",i+1);
			scanf("%d",&arreglo[i][2]);
			printf("\n[%d]Cuantas Horas trabajo al mes: ",i+1);
			scanf("%d",&arreglo[i][3]);
			break;
		}
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Empleado:[%d]\t Sueldo del Empleado:$%d\t Numero de Apartamento:#%d\t Horas Trabajadas al mes:%dhr\t ",arreglo[i][0],arreglo[i][1],arreglo[i][2],arreglo[i][3]);
			break;
		}
		printf("\n");
	}
}
