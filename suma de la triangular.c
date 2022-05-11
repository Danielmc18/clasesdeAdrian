#include <stdio.h>
#include <windows.h>
void entrada();
void Triangular();
void salida ();
int f,c,i,j,Matriz[10][10],SumaT;
main()

{
 entrada ();
 Triangular();
 salida ();
 return 0;
}

void entrada ()
{
 do
  {
   system ("cls");
   printf("Ingrese el numero de filas  ");
   scanf("%d",&f);
   printf("Ingrese el numero de columnas  ");
   scanf("%d",&c);
   printf("\n");
  }
  while(f!=c);
   for(i=1;i<=f;i++)
    {
     for(j=1;j<=c;j++)
     {
      printf("Ingrese un numero %d %d ",i,j);
      scanf("%d",&Matriz[i][j]);
     }
    }
 return;
}

void Triangular ()
{
 for (i=1;i<=f;i++)
  {
  	for (j=1;j<=c;j++)
  	  {
  	  	if(i>j)
  	  	 {
  	  	   SumaT=SumaT+Matriz[i][j];
  	  	 }
  	  }
  }
  return;
}

void salida ()
{
 printf("\n");
 for(i=1;i<=f;i++)
    {
     for(j=1;j<=c;j++)
     {
      printf("%d",Matriz[i][j]);
     }
     printf("\n");    
	}
	printf("\nLa suma total de la parte inferior de la diagonal es de %d ",SumaT);
 return;
}

