#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float sal, novosal;
	printf("Digite o seu sal�rio: R$");
	scanf("%f", &sal);
	if (sal <= 500)
	{
		novosal = (sal + (sal * 0.2));
		printf("O seu novo sal�rio �: R$%0.2f\n\n", novosal);
	}
	else
	{
		novosal = (sal + (sal * 0.1));
		printf("O seu novo sal�rio �: R$%0.2f\n\n", novosal);
	}

	system("pause");
	return("0");
}
