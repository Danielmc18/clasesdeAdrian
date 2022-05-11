#include <stdio.h>
void entrada ();
void salida ();
void Diagonal_Pri();
int f, c, j, i, matriz[100][100],Sum;
main ()
{
 entrada ();
 salida();
 Diagonal_Pri();
 return 0;
}

void entrada ()
{
 do
 {	
  printf("Ingrese el tamaño de Filas ");
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

void Diagonal_Pri()
{
 Sum=0;
 for(i=0;i<f;i++)
   {
   	for(j=0;j<c;j++)
   	  {
   	  	if(i==j)
   	  	  {
   	  	  	printf("\n");
   	  	  	printf("%d",matriz[i][j]);
   	  	  	Sum+=matriz[i][j];
   	  	  }
   	  }
   }
 printf("\nLa suma es de %d",Sum);
 return;
}

