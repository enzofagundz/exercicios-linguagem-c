#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int contador = 0, numUsuario = 0;

	printf("Digite um número maior que 1: ");
	scanf("%d", &numUsuario);

	if(numUsuario < 1)
		printf("\nInválido, o número precisa ser maior que 1!\n");
	else
	{

		while(contador <= numUsuario)
		{
			printf("%d\n", contador);
			_sleep(50);
			contador++;
		}
	}

	printf("\n");
	system("PAUSE");
	return (0);
}
