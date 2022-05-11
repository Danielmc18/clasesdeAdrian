#include<stdio.h>
#include<conio.h>


int main()
{
	int filas;
	int columnas=3;
	float promedio=0;
	printf("\nDigite los alumnos que va a querer: ");
	scanf("%d",&filas);
	float matriz[filas][columnas];
	int i,j;
	
	for(i = 0; i < filas; i++)
	{
		for(j = 0; j < columnas; j++)
		{
			printf("\n[%d]Digite la matricula del alumno: ",i+1);
			scanf("%f",&matriz[i][0]);
			printf("\n[%d]Digite la calificacion del medio curso: ",i+1);
			scanf("%f",&matriz[i][1]);
			printf("\n[%d]Digite la calificacion del ordinario: ",i+1);
			scanf("%f",&matriz[i][2]);
			break;
		}	
	}
	int aux,errores;
	int ordinario,medio_curso;
	do
	{
		for(i = 0; i < filas; i++)
		{
			for(j = 0;j < columnas; j++)
			{
				if(matriz[i][0] < matriz[i+1][0])
		    	{
				   aux = matriz[i][0];
				   matriz[i][0] = matriz[i+1][0];
			       matriz[i+1][0] = aux;
			       
			       medio_curso=matriz[i][1];
			       matriz[i][1]=matriz[i+1][1];
			       matriz[i+1][1]=medio_curso;
			       
			       ordinario=matriz[i][2];
			       matriz[i][2]=matriz[i+1][2];
			       matriz[i+1][2]=ordinario;
		    	}
			}	
		}
		errores=0;	
		for(i = 0; i < filas; i++)
		{
			for(j = 0; j < columnas; j++)
			{
				if(matriz[i][0] < matriz[i+1][0])
			    {
				  errores=errores+1;
			    }
			}
		}
	}while(errores!=0);
	printf("\n");
	
	for(i = 0; i < filas; i++)
	{
		for(j = 0; j < columnas; j++)
		{
			promedio=(matriz[i][1]+matriz[i][2])/2 *1.0;
			printf("[%d]Matricula:%2.f\t  Medio curso: %2.f\t   Ordinario: %2.f\t  Promedio: %2.f\t",i+1,matriz[i][0],matriz[i][1],matriz[i][2],promedio);
			printf("\n");	
			break;
		}
	}
	getch();
}
