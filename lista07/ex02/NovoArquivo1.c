#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int num;

	printf("Digite um n�mero menor que 100: ");
	scanf("%d", &num);

	if(num > 100)
		printf("\nInv�lido, o n�mero precisa ser menor que 100!\n");
	else
	{

		while(num <= 100)
		{
			printf("%d\n", num);
			_sleep(50);
			numUsuario++;
		}
	}

	printf("\n");
	system("PAUSE");
	return (0);
}