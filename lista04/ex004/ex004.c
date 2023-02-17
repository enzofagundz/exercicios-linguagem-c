#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*Fazer  um  algoritmo para  ler 5  (cinco)  números e mostrar quantos números
lidos  são positivos, negativos, pares e ímpares*/

main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3, n4, n5, par, impar, negativo, positivo;

	printf("Digite o 1° número: ");
	scanf("%d", &n1);

	if(n1 % 2 == 0)
	{
		par = 1;
		impar = 0;
	}
	else
	{
		impar = 1;
		par = 0;
	}
	if(n1 >= 0)
	{
		positivo = 1;
		negativo = 0;
	}
	else
	{
		negativo = 1;
		positivo = 0;
	}
	
	printf("Digite o 2° número: ");
	scanf("%d", &n2);
	
	if(n2 % 2 == 0)
	{
		par = par + 1;
		impar = impar + 0;
	}
	else
	{
		impar = impar + 1;
		par = par + 0;
	}
	if(n2 >= 0)
	{
		positivo = positivo + 1;
		negativo = negativo + 0;
	}
	else
	{
		negativo = negativo + 1;
		positivo = positivo + 0;
	}
	
	printf("Digite o 3° número: ");
	scanf("%d", &n3);
	
	if(n3 % 2 == 0)
	{
		par = par + 1;
		impar = impar + 0;
	}
	else
	{
		impar = impar + 1;
		par = par + 0;
	}
	if(n3 >= 0)
	{
		positivo = positivo + 1;
		negativo = negativo + 0;
	}
	else
	{
		negativo = negativo + 1;
		positivo = positivo + 0;
	}
	
	printf("Digite o 4° número: ");
	scanf("%d", &n4);
	if(n4 % 2 == 0)
	{
		par = par + 1;
		impar = impar + 0;
	}
	else
	{
		impar = impar + 1;
		par = par + 0;
	}
	if(n4 >= 0)
	{
		positivo = positivo + 1;
		negativo = negativo + 0;
	}
	else
	{
		negativo = negativo + 1;
		positivo = positivo + 0;
	}

	printf("Digite o 5° número: ");
	scanf("%d", &n5);
	if(n5 % 2 == 0)
	{
		par = par + 1;
		impar = impar + 0;
	}
	else
	{
		impar = impar + 1;
		par = par + 0;
	}
	if(n5 >= 0)
	{
		positivo = positivo + 1;
		negativo = negativo + 0;
	}
	else
	{
		negativo = negativo + 1;
		positivo = positivo + 0;
	}
	
	
	printf("\n******************************\n");
	printf("Dos 5 números apresentados:\n");
	printf("%d são pares\n", par);
	printf("%d são ímpares\n", impar);
	printf("%d são positivos\n", positivo);
	printf("%d são negativos\n", negativo);
	printf("\n******************************\n\n");
	
	system("PAUSE");
	return 0;
}
