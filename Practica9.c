//programa que valide la hora para ver si es correcta 

#include<stdio.h>
#include<conio.h>



int main()
{
    int hr;
    int min;
    int seg;
    
	printf("\nCuantas horas quiere: ");
	scanf("%d",&hr);
	
	printf("\nCuantos minutos quiere: ");
	scanf("%d",&min);
	
	printf("\nCuantos segundos quiere: ");
	scanf("%d",&seg);
	
	if( (hr > 24 || hr < 0 ) && (min > 60 || min < 0 ) && (seg > 60 || seg < 0)){
		printf("No es una hora valida");		
	}
	else
	{
		printf("Es una hora valida");
	}
	    
		
	getch();
}
