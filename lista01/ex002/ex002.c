#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, sub;
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	sub = n1 - n2;
	printf("A subtração dos dois numeros é igual a: %d\n\n", sub);
	system("pause");
}