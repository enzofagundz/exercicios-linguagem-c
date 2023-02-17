#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1, n2;
	printf("Digite um número: ");
	scanf("%d", &n1);
	printf("Digite outro número: ");
	scanf("%d", &n2);

	if (n1 == n2)
	{
		printf("Os números são iguais!\n\n");
	}
	if (n1 > n2)
	{
		printf("O número %d é maior e o %d é menor.\n\n", n1, n2);
	}
	if (n1 < n2)
	{
	printf("O número %d é maior e o %d é menor.\n\n", n2, n1);
	}

	system("pause");
	return("0");
}
