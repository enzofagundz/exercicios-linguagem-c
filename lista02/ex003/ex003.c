#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1, n2;
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	printf("Digite outro n�mero: ");
	scanf("%d", &n2);

	if (n1 == n2)
	{
		printf("Os n�meros s�o iguais!\n\n");
	}
	if (n1 > n2)
	{
		printf("O n�mero %d � maior e o %d � menor.\n\n", n1, n2);
	}
	if (n1 < n2)
	{
	printf("O n�mero %d � maior e o %d � menor.\n\n", n2, n1);
	}

	system("pause");
	return("0");
}
