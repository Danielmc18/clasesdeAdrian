#include<stdio.h>
#include<conio.h>

void ordenamiento(int arreglo[], char forma[50],int N)
{
    int i;
    int aux;
    int errores;
    printf("\n");
    do
	{
		for(i=0;i<N;i++)
		{
			if(forma=="pares")
			{
				if(arreglo[i]>arreglo[i+1])
				{
					aux=arreglo[i];
					arreglo[i]=arreglo[i+1];
					arreglo[i+1]=aux;
			
				}
			}
			if(forma=="impares")
			{
				if(arreglo[i]<arreglo[i+1])
				{
					aux=arreglo[i];
					arreglo[i]=arreglo[i+1];
					arreglo[i+1]=aux;
			
				}
			}
		}
		errores=0;
		
		for(i=0;i<N;i++)
		{
			if(forma=="pares")
			{
				if(arreglo[i]>arreglo[i+1])
				{
					errores=errores+1;
				}
			}	
			if(forma=="impares")
			{
				if(arreglo[i]<arreglo[i+1])
				{
					errores=errores+1;
				}
			}	
		}
	}while(errores!=0);
	
	for(i=0;i<N;i++)
	{
		printf("%d,",arreglo[i]);
	}
}

main()
{
	int i,N;
	char forma;
	
	printf("Ingrese los valores que ocupe: ",N);
	scanf("\n%d",&N);
	int arr[N];
	
	//Lectura del primer arreglo	
	for(i=0;i<N;i++)
	{
		printf("Introducir un numero:");
		scanf("%d", &arr[i]);
    }
    
    //para sacar el tamaño 
	//de los nuevos arreglos
    int pares=0;
    int impares=0;
    for(i=0;i<N;i++)
    {
    	if(arr[i]%2==0)
    	{
    		pares++;
		}
		else{
			impares++;
		}
	}
	int *arreglo_pares;
	int *arreglo_impares;
	
	//calcular tamaño dinamico
	arreglo_pares = (int*)malloc(sizeof(int)*pares);
	arreglo_impares = (int*)malloc(sizeof(int)*impares);
	
	int i_pares = 0;
	int i_impares= 0;
	for(i=0;i<N;i++)
    {
    	if(arr[i] % 2 == 0 )
		{
			if(i_pares < pares){
				arreglo_pares[i_pares] = arr[i];
				i_pares +=1;
			}
		}
		else
		{
			if(i_impares < impares){
				arreglo_impares[i_impares] = arr[i];
				i_impares +=1;
			}
		}
	}
	printf("antes de ordenar los valores\n");
	//validad arreglo pares
	for(i=0; i<pares; i++){
		printf("%d,", arreglo_pares[i]);
	}
	printf("\n");
	//validar arreglo impares
	for(i=0; i<impares; i++){
		printf("%d,", arreglo_impares[i]);
	}
	printf("\ndespues de ordenar los valores\n");
	ordenamiento(arreglo_pares,"pares",pares);
	ordenamiento(arreglo_impares,"impares",impares);
    return 0;
}
