//Algoritmo para ler um numero e dizer se � par ou impar

#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1;
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	if((n1 % 2) == 0)
		printf("O N�mero %d � par", n1);
	else
		printf("O N�mero %d � �mpar\n\n", n1);

	system("pause");
}
