#include <stdio.h>
#include <stdint.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, d;
	printf("Digite o primeiro numero ");
	scanf("%d", &n1);

	printf("Digite o segundo numero ");
	scanf("%d", &n2);

	d = n1 / n2;

	printf("O valor da divisao e: %d", d);

	if (n2 = 0)
	{
		printf("O segundo numero nao pode ser zero\n");
	}
	
	system("pause")
}