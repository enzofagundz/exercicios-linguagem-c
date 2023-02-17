//Algoritmo para ler um numero e dizer se é par ou impar

#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1;
	printf("Digite um número: ");
	scanf("%d", &n1);
	if((n1 % 2) == 0)
		printf("O Número %d é par", n1);
	else
		printf("O Número %d é ímpar\n\n", n1);

	system("pause");
}
