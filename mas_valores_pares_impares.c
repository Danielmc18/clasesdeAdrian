#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
	int n,i;
	
	printf("\nDigite el tamanio del arreglo:");
	scanf("%d",&n);
	int arreglo[n];
	
	for(i = 0; i < n; i++)
	{
		printf("[%d]Digite los valores: ",i+1);
		scanf("%d",&arreglo[i]);
	}
	printf("\nARREGLO\n");
	printf("\n");
	for(i = 0;i < n; i++)
	{
		printf("[%d] ",arreglo[i]);
	}
	
	int contador_par=0;
	int contador_impar=0;
	for(i = 0; i < n; i++)
	{
		if(arreglo[i]%2==0)
		{
			contador_par= contador_par+1;
		}
		else
		{
			contador_impar= contador_impar+1;
		}
	}
	printf("\n");
	printf("\nHay %d pares ",contador_par);
	printf("\nHay %d impares ",contador_impar);
	printf("\n");
	int total_pares;
	int total_impares;
	if(contador_par>contador_impar)
	{
		printf("\nEn el arreglo hay mas pares\n");
		total_pares=contador_par-contador_impar;
		printf("\nLa Diferencia es de %d que hay entre los pares e impares\n",total_pares);
	}
	else
	{
		printf("\nEn el arreglo hay mas impares\n");
		total_impares=contador_impar-contador_par;
		printf("\nLa Diferencia es de %d que hay entre los Impares y Pares\n",total_impares);
	}
	getch();
}
