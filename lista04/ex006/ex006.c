#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, n5, media, pos, cont, desc;

	printf("Digite o 1° número: ");
	scanf("%d", &n1);
	
	if(n1 >= 0)
	{
		cont = n1;
		pos = 1;
	}
	else
	{
		desc = n1;	
	}

	printf("Digite o 2° número: ");
	scanf("%d", &n2);
	
	if(n2 >= 0)
	{
		cont = cont + n2;
		pos = pos + 1;
	}
	else
	{
		desc = desc + n2;	
	}
	
	printf("Digite o 3° número: ");
	scanf("%d", &n3);
	
	if(n3 >= 0)
	{
		cont = cont + n3;
		pos = pos + 1;
	}
	else
	{
		desc = desc + n3;	
	}
	
	printf("Digite o 4° número: ");
	scanf("%d", &n4);
	
	if(n4 >= 0)
	{
		cont = cont + n4;
		pos = pos + 1;
	}
	else
	{
		desc = desc + n4;	
	}
	
	printf("Digite o 5° número: ");
	scanf("%d", &n5);
	
	if(n3 >= 0)
	{
		cont = cont + n5;
		pos = pos + 1;
	}
	else
	{
		desc = desc + n5;	
	}
	
	media = cont / pos;

	printf("%d media\n", media);
	
	system("PAUSE");
	return 0;	
}