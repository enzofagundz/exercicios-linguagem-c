#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int a, b, result;
	printf("Digite o primeiro número: ");
	scanf("%d", &a);
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	result = a + b;
	printf("A soma dos números é igual a: %d\n", result);
	result = a - b;
	printf("A subtração dos números é igual a: %d\n", result);
	result = a * b;
	printf("A multiplicação dos dois números é igual a: %d\n", result);
	if (b == 0)
	{
		printf("A divisão não pode ser por zero\n");
	}else{
		result = a / b;
		printf("A divisão dos dois números é igual a: %d\n", result);
	}

	system("pause");
	return("0");
}
