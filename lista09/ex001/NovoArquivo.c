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
		printf("Digite um n�mero: ");
		scanf("%d", &num);

		if (num % 2 == 0)
		{
			printf("\nO n�mero digitado � par e ");
		}
		else
		{
			printf("\nO n�mero digitado � �mpar e ");
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
