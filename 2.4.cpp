#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	printf("Programa que permite al usuario generar la cantidad de numeros aleatorios que desee, indicando el rango del cual se generan para imprimirlos al final, en forma horizontal separado por comas.\n\n");
	int n, m, i, o, pa = 0, im = 0, pr = 0, co = 0, j;
	printf("Introduce la cantidad de numeros aleatorios que deseas: ");
	scanf("%d", &o);
	int x[o];
	printf("Introduce el valor maximo: ");
	scanf("%d", &n);
	printf("Introduce el valor minimo: ");
	scanf("%d", &m);
	for(i=1;m>=n;i++)
	{
		printf("Favor de elegir un valor minimo valido: ");
		scanf("%d", &m);
	}
	printf("\nLos numeros son: ");
	srand(time(NULL));
	for(i=0;i<o;i++)
	{
		x[i] = m + rand()%(n-m+1);
		if(i==o-1)
		{
			printf("%d", x[i]);
		}
		else
		{
			printf("%d, ", x[i]);
		}
		if(x[i]%2 == 0)
		{
			pa = pa + 1;
		}
		else
		{
			im = im + 1;
		}
		for(j=x[i];j>0;j--)
		{
			if(x[i]%j==0)
			{
				co = co + 1;
			}
		}
		if(co == 2)
		{
			pr = pr + 1;
			co = 0;
		}
		else
		{
			co = 0;
		}
	}
	printf("\n\nHay %d numeros pares, %d numeros impares y %d numeros primos", pa, im, pr);
	getch();
}
