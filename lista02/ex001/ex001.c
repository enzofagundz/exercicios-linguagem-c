#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int a, b, result;
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &a);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &b);
	result = a + b;
	printf("A soma dos n�meros � igual a: %d\n", result);
	result = a - b;
	printf("A subtra��o dos n�meros � igual a: %d\n", result);
	result = a * b;
	printf("A multiplica��o dos dois n�meros � igual a: %d\n", result);
	if (b == 0)
	{
		printf("A divis�o n�o pode ser por zero\n");
	}else{
		result = a / b;
		printf("A divis�o dos dois n�meros � igual a: %d\n", result);
	}

	system("pause");
	return("0");
}
