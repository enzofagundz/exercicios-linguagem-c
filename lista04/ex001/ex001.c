#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int n1, ant;

	printf("Digite um valor: ");
	scanf("%d", &n1);

	ant = n1 - 1;

	if(n1 == 0)
		printf("O n�mero 0 n�o possui antecessor.\n");
	else
		printf("O antecessor de %d � %d\n", n1, ant);


	system("pause");
	return 0;
}
