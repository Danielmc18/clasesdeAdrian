#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

/*
typedef es una palabra reservada en el lenguaje de programación C y C++. Su función es asignar un nombre alternativo a tipos existentes, a 
menudo cuando su declaración normal es aparatosa, potencialmente confusa o probablemente variable de una implementación a otra.
*/

typedef struct
{
	char artista[50];
	char cancion[50];
}data;

int main()
{
	float arreglo[10][4];
	int i,j;
	data s1;
	float puntos_finales=0.0;
	
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 4; j++)
		{
			arreglo[i][0] =i;
			printf("\nDigite la audiencia radial de la cancion del Artista[%d]: ", i+1);
			scanf("%f",&arreglo[i][1]);
			
			printf("\nDigite las ventas de la cancion Artista[%d]: ", i+1);
			scanf("%f",&arreglo[i][2]);
			break;
		}
	}
	int aux,errores;
	int radio,ventas;
	int aux_2;
	do
	{
		for(i = 0; i <10; i++)
		{
			for(j = 0; j < 4; j++)
			{
			   if(arreglo[i][1]<arreglo[i+1][1])
		       {
		    		if(arreglo[i][2]<arreglo[i+1][2])
		    		{
		    			aux=arreglo[i][1];
			            arreglo[i][1]=arreglo[i+1][1];
			            arreglo[i+1][1]=aux;
			       
			            ventas=arreglo[i][2];
			            arreglo[i][2]=arreglo[i+1][2];
			            arreglo[i+1][2]=ventas;
					}
		       	}
			}	
		}
		errores=0;	
		for(i = 0; i < 10; i++)
		{
			for(j = 0; j < 4; j++)
			{
				if(arreglo[i][1]<arreglo[i+1][1])
			    {
				  errores=errores+1;
			    }
			}
		}
	}while(errores!=0);
	
	printf("\n\t\t\t\t\tBILLBOARD HOT 100\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arreglo[i][0] == 0)
			{
				memcpy(s1.artista,"Ariana Grande",50);
				memcpy(s1.cancion,"7 rings",50);
			}
			if(arreglo[i][0]==1)
			{
				memcpy(s1.artista,"Ariana Grande",50);
				memcpy(s1.cancion,"thank u,next",50);
			}	
			if(arreglo[i][0]==2)
			{
				memcpy(s1.artista,"Ariana Grande",50);
				memcpy(s1.cancion,"Stuck with u",50);
			}
			if(arreglo[i][0]==3)
			{
				memcpy(s1.artista,"Shawn Mendes",50);
				memcpy(s1.cancion,"Seniorita",50);
			}
			if(arreglo[i][0]==4)
			{
				memcpy(s1.artista,"Lady Gaga",50);
				memcpy(s1.cancion,"Shallow",50);
			}
			if(arreglo[i][0] == 5)
			{
				memcpy(s1.artista,"Troye Sivan",50);
				memcpy(s1.cancion,"Dance to This",50);
			}
			if(arreglo[i][0]==6)
			{
				memcpy(s1.artista,"Taylor Swift",50);
				memcpy(s1.cancion,"Blank Space",50);
			}	
			if(arreglo[i][0]==7)
			{
				memcpy(s1.artista,"Harry Styles",50);
				memcpy(s1.cancion,"Spring Day",50);		
			}
			if(arreglo[i][0]==8)
			{
				memcpy(s1.artista,"Billie Eilish",50);
				memcpy(s1.cancion,"Bad Guy",50);
			}
			if(arreglo[i][0]==9)
			{
				memcpy(s1.artista,"Dua Lipa",50);
				memcpy(s1.cancion,"New Rules",50);
			}
			if(arreglo[i][0]==10)
			{
				memcpy(s1.artista,"Sia",50);
				memcpy(s1.cancion,"Chandelier",50);
			} 
			puntos_finales=arreglo[i][1] + arreglo[i][2];                              
			printf("Peak#%d  Artista:%s\t  Cancion:%s\t Audiencia Radial: %2.fMillones\t  Ventas:%2.fMil\t Puntos:%2.f",i+1,s1.artista,s1.cancion,arreglo[i][1],arreglo[i][2],puntos_finales); 
			break;
		}
		printf("\n");
	}
}

