
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fazer  um  algoritmo paraler5  (cinco)  números e mostrar quantos números 
lidos estão  no intervalo entre 15 e 30 e quantos números estão abaixo eacima 
deste intervalo.*/

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, n5, cont;

	printf("Digite o 1° número: ");
	scanf("%d", &n1);
	
	if(n1 >= 15 && n1 <=30)
	{
		cont = 1;
	}
	else
	{
		cont = 0;
	}
	
	printf("Digite o 2° número: ");
	scanf("%d", &n2);
	
	if(n2 >= 15 && n2 <= 30)
	{
		cont = cont + 1;
	}
	else
	{
		cont = cont + 0;
	}
	
	printf("Digite o 3° número: ");
	scanf("%d", &n3);
	
	if(n3 >= 15 && n3 <= 30)
	{
		cont = cont + 1;
	}
	else
	{
		cont = cont + 0;
	}
	
	printf("Digite o 3° número: ");
	scanf("%d", &n4);
	
	if(n4 >= 15 && n4 <= 30)
	{
		cont = cont + 1;
	}
	else
	{
		cont = cont + 0;
	}
	
	printf("Digite o 5° número: ");
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
	printf("Dos 5 números apresentados, ");
	printf("%d estão entre 15 e 30\n", cont);
	printf("\n******************************\n\n");
	
	system("PAUSE");
	return 0;	
}