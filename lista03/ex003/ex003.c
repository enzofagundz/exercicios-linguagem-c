#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float b, h, a;
	
	printf("Digite a base do seu tri�ngulo: ");
	scanf("%f", &b);
	printf("Digite a altura do seu tri�ngulo: ");
	scanf("%f", &h);
	
	a = (b * h) / 2;
	
	printf("A �rea do seu tri�ngulo � de %0.2f\n\n", a);
		
	system("pause");
	return("0");	
}