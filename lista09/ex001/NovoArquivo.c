#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num;
	char op;

	do
	{
		system("CLS");
		printf("Digite um número: ");
		scanf("%d", &num);

		if (num % 2 == 0)
		{
			printf("\nO número digitado é par e ");
		}
		else
		{
			printf("\nO número digitado é ímpar e ");
		}

		if (num > 0)
		{
			printf("positivo\n");
		}
		else
		{
			printf("negativo\n");
		}
		
		printf("Deseja repetir o processo? (S/N)\n");
		op = getche();
		
	}while(op == 'S' | op == 's');
	
	system("PAUSE");
	return 0;
}
