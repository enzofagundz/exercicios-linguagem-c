#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*Fazer  um  algoritmo para  ler 5  (cinco)  n�meros e mostrar quantos n�meros
lidos  s�o positivos, negativos, pares e �mpares*/

main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3, n4, n5, par, impar, negativo, positivo;

	printf("Digite o 1� n�mero: ");
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
	
	printf("Digite o 2� n�mero: ");
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
	
	printf("Digite o 3� n�mero: ");
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
	
	printf("Digite o 4� n�mero: ");
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

	printf("Digite o 5� n�mero: ");
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
	printf("Dos 5 n�meros apresentados:\n");
	printf("%d s�o pares\n", par);
	printf("%d s�o �mpares\n", impar);
	printf("%d s�o positivos\n", positivo);
	printf("%d s�o negativos\n", negativo);
	printf("\n******************************\n\n");
	
	system("PAUSE");
	return 0;
}
