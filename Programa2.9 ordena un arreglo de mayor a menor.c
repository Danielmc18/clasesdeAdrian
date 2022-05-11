#include<stdio.h>
#include<conio.h>

main()
{
	int i,num,N,mayor,menor;
	int aux;
	int errores;
	
	
	printf("Ingrese los valores que ocupe: ",N);
	scanf("\n%d",&N);
	int arr[N];
	printf("\n");
	for(i = 0; i <=N; i++)
	{
		printf("Introducir un numero:");
		scanf("%d", &arr[i]);
	}
	do
	{
		for(i = 0; i < N; i++)
		{
			if(arr[i]<arr[i+1])
			{
				aux=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=aux;
			}
		}
		errores=0;
		
		for(i = 0; i < N; i++)
		{
			if(arr[i]<arr[i+1])
			{
				errores=errores+1;
			}
		}
	}while(errores!=0);
	printf("\n");
	for(i = 0; i <= N; i++)
	{
		printf("Num[%d]: %d\n", i,arr[i]);
	}
	getch();
}
