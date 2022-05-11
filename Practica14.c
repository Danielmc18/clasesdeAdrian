#include<stdio.h>
#include<conio.h>

//prototipos de las funciones
int funcion_1(void);
int funcion_2(void);
int funcion_3(void);
int funcion_4(void);

int K= 3;  //la K es la variable global//

int main()
{
	int i;
	
	for(i=1; i<=3; i++)
	{
		printf("\nEl resultado de la funcion 1 es: %d ",funcion_1());
		printf("\nEl resultado de la funcion 2 es: %d ",funcion_2());
		printf("\nEl resultado de la funcion 3 es: %d ",funcion_3());
		printf("\nEl resultado de la funcion 4 es: %d " ,funcion_4());
	}
}

int funcion_1(void)
{
	K += K;
	return K;
}

int funcion_2(void)
{
	int K=1;
	K++;
	return K;
}

int funcion_3(void)
{
	static int K= 8;
	K +=2;
	return K;
}

int funcion_4(void)
{
	int K=5;
	
	K = K + ::K;
	
	return K;
	
}
