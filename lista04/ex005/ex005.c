
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fazer  um  algoritmo paraler5  (cinco)  n�meros e mostrar quantos n�meros 
lidos est�o  no intervalo entre 15 e 30 e quantos n�meros est�o abaixo eacima 
deste intervalo.*/

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, n5, cont;

	printf("Digite o 1� n�mero: ");
	scanf("%d", &n1);
	
	if(n1 >= 15 && n1 <=30)
	{
		cont = 1;
	}
	else
	{
		cont = 0;
	}
	
	printf("Digite o 2� n�mero: ");
	scanf("%d", &n2);
	
	if(n2 >= 15 && n2 <= 30)
	{
		cont = cont + 1;
	}
	else
	{
		cont = cont + 0;
	}
	
	printf("Digite o 3� n�mero: ");
	scanf("%d", &n3);
	
	if(n3 >= 15 && n3 <= 30)
	{
		cont = cont + 1;
	}
	else
	{
		cont = cont + 0;
	}
	
	printf("Digite o 3� n�mero: ");
	scanf("%d", &n4);
	
	if(n4 >= 15 && n4 <= 30)
	{
		cont = cont + 1;
	}
	else
	{
		cont = cont + 0;
	}
	
	printf("Digite o 5� n�mero: ");
	scanf("%d", &n5);
	
	if(n5 >= 15 && n5 <= 30)
	{
		cont = cont + 1;
	}
	else
	{
		cont = cont + 0;
	}
	
	
	printf("\n******************************\n");
	printf("Dos 5 n�meros apresentados, ");
	printf("%d est�o entre 15 e 30\n", cont);
	printf("\n******************************\n\n");
	
	system("PAUSE");
	return 0;	
}