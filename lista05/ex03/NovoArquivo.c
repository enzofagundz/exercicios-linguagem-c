#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{

	setlocale(LC_ALL, "Portuguese");

	int contador, num;

	printf("Digite um n�mero: ");
	scanf("%d", &num);

	if (num > 1)
	{
		for(contador = 1; contador <= num; contador++)
		{

			printf("%d\n", contador);
			_sleep(300);
		}
	printf("\n");
	}
	else
	{
		printf("O n�mero n�o pode ser menor que 1\n");
	}
	system("pause");
	return(0);
}
