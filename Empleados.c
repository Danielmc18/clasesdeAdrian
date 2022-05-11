#include<stdio.h>
#include<conio.h>

/*
Programa que permite capturar una lista de n empleados, otorgando su numero de empleado, sueldo, numero de departamento y 
horas trabajadas al mes, para al final imprimir, este mismo arreglo en forma de una tabla.
*/

int main()
{
	int i,j,n;
	
	printf("\nCuantos Equipos van a ser: ");
	scanf("%d",&n);
	
	int arreglo[n][7];
	
	///entrada de datos
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("\n[%d]Cual es el nombre del Equipo: ",i+1);
			scanf("%d",&arreglo[i][0]);	
			printf("\n[%d]Cuantos partidos jugaron: ",i+1);
			scanf("%d",&arreglo[i][1]);
			printf("\n[%d]Cuantos partidos ganados: ",i+1);
			scanf("%d",&arreglo[i][2]);
			printf("\n[%d]Cuantas son los partidos empatados: ",i+1);
			scanf("%d",&arreglo[i][3]);
			printf("\n[%d]Cuantos son los goles a favor: ",i+1);
			scanf("%d",&arreglo[i][4]);
			printf("\n[%d]Cuantos goles son en contra: ",i+1);
			scanf("%d",&arreglo[i][5]);
			printf("\n[%d]Cuantos son los puntos: ",i+1);
			scanf("%d",&arreglo[i][6]);
			break;
		}
	}
	printf("\n");
	
//	///Acomodar por puntos
//	int aux,errores;
//	int puntos;
//	int aux_2;
//	do
//	{
//		for(i = 0; i <10; i++)
//		{
//			for(j = 0; j < 4; j++)
//			{
//			   if(arreglo[i][1]<arreglo[i+1][1])
//		       {
//		    		if(arreglo[i][2]<arreglo[i+1][2])
//		    		{
//		    			aux=arreglo[i][1];
//			            arreglo[i][1]=arreglo[i+1][1];
//			            arreglo[i+1][1]=aux;
//			       
//			            ventas=arreglo[i][2];
//			            arreglo[i][2]=arreglo[i+1][2];
//			            arreglo[i+1][2]=ventas;
//					}
//		       	}
//			}	
//		}
//		errores=0;	
//		for(i = 0; i < 10; i++)
//		{
//			for(j = 0; j < 4; j++)
//			{
//				if(arreglo[i][1]<arreglo[i+1][1])
//			    {
//				  errores=errores+1;
//			    }
//			}
//		}
//	}while(errores!=0);
	
	
	
	////Impresion
	for(i = 0;i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			
		}
		printf("\n");
	}
	getch();
}
