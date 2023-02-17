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
		printf("Algoritmo para descobrir o maior número digitado");
		printf("\n=================================================\n\n");
		printf("Digite o 1º numero: ");
		scanf("%d", &numero);

		arm = numero;

		printf("Digite o 2º segundo numero: ");
		scanf("%d", &numero);

		if(numero > arm)
			printf("\n%d é o maior número\n\n", numero);
		else
		{
			if (arm > numero)
			printf("\n%d é o maior número\n\n", arm);
			else
				printf("\nNúmeros iguais!\n");
		}
		printf("Deseja continuar? (S/N)\n");
		op = getche();
	}
	while(op == 's' | op == 'S');
	
	return (0);
	system("PAUSE");
}
