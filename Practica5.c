#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
programa que genere un arreglo de tamaño N unidi que genere valores de 0 a 10 y que el usuario ingrese un valor entre 0 y 10 y sepa cuantas 
veces hay ese numero.
*/
main()
{
	int i,n;
	srand(time(NULL));
	
	printf("Que tamanio quiere su arreglo: ");
	scanf("%d",&n);
	
	int arreglo[n];
	
	for(i=0;i<n;i++)
	{
		arreglo[i]= 0 + rand()% (10+1)-0;
	}
	for(i=0;i<n;i++)
	{
		printf("[%d] ",arreglo[i]);
	}
	
	int contador=0,numero;
	
	printf("\nQue valor quiere buscar en el arreglo: ");
	scanf("%d",&numero);
	
	for(i=0;i<n;i++)
	{
		if(arreglo[i]==numero)
		{
			contador+=1;
		}
	}
	
	printf("\nEl numero %d estaba %d veces en el arreglo. ",numero,contador);
	
	
	

	
}
