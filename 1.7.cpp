#include <stdio.h>
#include <conio.h>

main()
{
	printf("Programa que imprime unicamente el numero indicado de terminos de la siguiente serie\n\n");
	int i, c, s;
	s = 2;
	printf("Indique el numero de caracteres que quiere que imprima la serie: ");
	scanf("%d", &c);
	for(i = 1; i <= c; i++)
	{
		if(i % 2 == 0){
			s = s * 2;
		}else if(i == 1){
		}else{
			s = s - 1;
		}
		printf("%d ", s);
	}
	getch();
}
