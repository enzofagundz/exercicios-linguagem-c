#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{

	setlocale(LC_ALL, "Portuguese");

	int numero, arm;
	char op;
	do
	{
		system("CLS");
		printf("Algoritmo para descobrir o maior n�mero digitado");
		printf("\n=================================================\n\n");
		printf("Digite o 1� numero: ");
		scanf("%d", &numero);

		arm = numero;

		printf("Digite o 2� segundo numero: ");
		scanf("%d", &numero);

		if(numero > arm)
			printf("\n%d � o maior n�mero\n\n", numero);
		else
		{
			if (arm > numero)
			printf("\n%d � o maior n�mero\n\n", arm);
			else
				printf("\nN�meros iguais!\n");
		}
		printf("Deseja continuar? (S/N)\n");
		op = getche();
	}
	while(op == 's' | op == 'S');
	
	return (0);
	system("PAUSE");
}
