#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//programa que genere un arreglo de tamaño 5 que contenga a mexico,canada,USA,china y españa cada pais va a tener medallas de oro,plata y bronce y 
//suma de los 3 

typedef struct{
	char pais[30];
} data;

int main()
{
	int arreglo[5][4];
	int i,j;
	int total=0;
	data s1;
	for(i = 0; i < 5; i++){
		
		for(j = 0; j < 4; j++){
			printf("Ingrese el nombre del Pais: ");
			scanf("%d", &arreglo[i][0]);
		
			printf("Ingrese las medallas de oro: ");
			scanf("%d", &arreglo[i][1]);
			
			printf("Ingrese las medallas de plata: ");
			scanf("%d", &arreglo[i][2]);
			
			printf("Ingrese las medallas de bronce: ");
			scanf("%d", &arreglo[i][3]);
			break;
		}
		printf("\n");
		total=arreglo[i][1]+arreglo[i][2]+arreglo[i][3];
	}	
	
	
	for(i = 0;  i < 5; i++){
		for(j = 0; j < 4; j++){
			if(arreglo[i][0] == 0)
			{
				memcpy(s1.pais,"mex",3);
			}
			if(arreglo[i][0]==1)
			{
				memcpy(s1.pais,"EUA",3);
			}	
			if(arreglo[i][0]==2)
			{
				memcpy(s1.pais,"Italia",6);			
			}
			if(arreglo[i][0]==3)
			{
				memcpy(s1.pais,"España",6);
			}
			if(arreglo[i][0]==4)
			{
				memcpy(s1.pais,"Francia",7);
			}
			printf("Pais:%s \tM.D.O: %d \tM.D.P: %d \tM.D.B: %d \t Total de medallas: %d",s1.pais,arreglo[i][1],arreglo[i][2],arreglo[i][3],total);
			break;
		}
		printf("\n");
	}
}
