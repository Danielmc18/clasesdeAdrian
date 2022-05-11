#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

//parametros de la funcion

void suma_multi_arreglo(int n, int arreglo[], int opcion);

//programa que te mediante una funcion te saque la suma ó multiplicacion ó que te sume los pares de un arreglo[n] con valores random 1 y 10//

main()
{
	int n;
	srand(time(NULL));
	
	printf("\nDe que tamaño quiere su arreglo: ");
	scanf("%d",&n);
	
	int arreglo[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		arreglo[i]= 0 + rand() % (10+1)-0;
	}
	for(i=0;i<n;i++)
	{
		printf("[%d] ",arreglo[i]);
	}
	int opcion;

	do{
		printf("\n1.-Sumar Arreglo ");
		printf("\n2.-Multiplicar Arreglo ");
		printf("\n3.-Sumar los Pares ");
		printf("\n4.-Nada ");
		printf("\nQue opcion quiere hacer: ");
		scanf("%d",&opcion);	
			
		if(opcion != 4){
			suma_multi_arreglo( n,  arreglo, opcion);
		}
		else{
			printf("Usted se ha salido del programa");
		}		
	}while(opcion != 4);
	
	
}

void suma_multi_arreglo(int n, int arreglo[], int opcion)
{
	int i;
	int resultado;
	
	if(opcion==2)
	{
		resultado=1;
	}
	else
	{
		resultado=0;
	}
	
	for(i=0;i<n;i++)
	{
		if(opcion==1)
		{
			resultado=resultado+arreglo[i];
		}
		if(opcion==2)
		{
			resultado=resultado*arreglo[i];
		}
		if(opcion==3)
		{
			if(arreglo[i]%2==0)
			{
				resultado=resultado+arreglo[i];
			}
		}
	}
	printf("\nResultado: %d",resultado);
	
}
