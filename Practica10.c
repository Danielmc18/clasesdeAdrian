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
	if(hr<25)
	{
		printf("\nCuantos minutos quiere: ");
	    scanf("%d",&min);
	    if(min<61)
	    {
	    	printf("\nCuantos segundos quiere: ");
	        scanf("%d",&seg);
	        if(seg<61)
			{
				printf("\nLa hora es %d:%d:%d",hr,min,seg);
			}
			else
			{
				printf("\nLa hora no existe");
			}
		}
	}
	getch();
}
