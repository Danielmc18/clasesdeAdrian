#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int numero;
	int continuar;
	numero= 0 + rand()% 25;
	continuar = 1;
	int adivinar;
	do{
		printf("\nDame un valor  del 0 al 25 jugador1 > ");
		scanf("%d", &adivinar);
		
		if(adivinar == numero){
			printf("Jugador 1 gano");
			continuar = 0;
		}
		
		printf("\nDame un valor  del 0 al 25 jugador2 >");
		scanf("%d", &adivinar);
		
		if(adivinar == numero){
			printf("Jugador 2 ha ganado ");
			continuar = 0;
		}
	}while(continuar != 0);
	
	getch();
}
