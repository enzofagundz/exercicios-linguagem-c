#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, n5, n6, n7, n8, media, pos, cont, desc;

	printf("Digite o 1° número: ");
	scanf("%d", &n1);
	
	if(n1 >= 0 && n1 <= 50)
	{
		cont = n1;
	}
	else
	{
		desc = n1;	
	}
	
	printf("Digite o 2° número: ");
	scanf("%d", &n2);
	
	if(n2 >= 0 && n2 <= 50)
	{
		cont = cont + n2;
	}
	else
	{
		desc = n2;	
	}
	
	printf("Digite o 3° número: ");
	scanf("%d", &n3);
	
	if(n3 >= 0 && n3 <= 50)
	{
		cont = cont + n3;
	}
	else
	{
		desc = n3;	
	}
	
	printf("Digite o 4° número: ");
	scanf("%d", &n4);
	
	if(n4 >= 0 && n4 <= 50)
	{
		cont = cont + n4;
	}
	else
	{
		desc = n4;	
	}
	
	printf("Digite o 5° número: ");
	scanf("%d", &n5);
	
	if(n5 >= 0 && n5 <= 50)
	{
		cont = cont + n5;
	}
	else
	{
		desc = n5;	
	}
	
	printf("Digite o 6° número: ");
	scanf("%d", &n6);
	
	if(n6 >= 0 && n6 <= 50)
	{
		cont = cont + n6;
	}
	else
	{
		desc = n6;	
	}
	
	printf("Digite o 7° número: ");
	scanf("%d", &n7);
	
	if(n7 >= 0 && n7 <= 50)
	{
		cont = cont + n7;
	}
	else
	{
		desc = n7;	
	}
	
	printf("Digite o 8° número: ");
	scanf("%d", &n8);
	
	if(n8 >= 0 && n8 <= 50)
	{
		cont = cont + n8;
	}
	else
	{
		desc = n8;	
	}
	
	printf("A soma dos números entre 0 e 50 é: %d\n\n", cont);
	
	system("PAUSE");
	return 0;
}