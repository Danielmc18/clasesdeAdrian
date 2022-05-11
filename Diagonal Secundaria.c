#include <stdio.h>
#include <windows.h>
void entrada ();
void salida ();
void Diagonal_Sec();
int f, c, j, i, matriz[100][100];
main ()
{
 entrada ();
 salida();
 Diagonal_Sec();
 return 0;
}

void entrada ()
{
 do
 {
  system("cls");	
  printf("Ingrese el tamaño de filas ");
  scanf("%d",&f);
  printf("Ingrese el tamaño de columnas ");
  scanf("%d",&c);
 }
 while(f!=c);
  for(i=0;i<f;i++)
   {
   	for(j=0;j<c;j++)
   	 {
   	  printf("Ingrese un numero %d %d ",i,j);
   	  scanf("%d",&matriz[i][j]);
     }
   }
 return;
}

void salida ()
{
 for(i=0;i<f;i++)
  {
   for(j=0;j<c;j++)
    {
     printf("%d \t", matriz[i][j]);
    }
    printf("\n");
  }
 return;
}

void Diagonal_Sec()
{
 for(i=0;i<f;i++)
   {
   	for(j=0;j<c;j++)
   	  {
   	  	if((c+1)==(i+j))
   	  	  {
   	  	  	printf("\n");
   	  	  	printf("%d",matriz[i][j]);
   	  	  }
   	  }
   }
 return;
}

