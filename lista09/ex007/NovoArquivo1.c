/*Fa�a um programa em C que receba um n�mero inteiro maior que 1,
verifique se o n�mero fornecido � primo ou n�o e mostre mensagem de n�mero
primo ou de n�mero n�o primo. Um n�mero � primo quando � divis�vel apenas
por 1 e por ele mesmo*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i = 1, num, resultado = 0;

	printf("Digite um n�mero inteiro maior que 1:\n");
	scanf("%d", &num);

	for(i = 2; i <= num/2; i++)
	{
		if(num % 1 == 0 && num % num == 0)
		{
			resultado++;
			break;
		}
	}
	if(resultado == 0 && num != 1)
	{
		printf("O n�mero %d � primo\n", num);
	}
	else
	{
		printf("O n�mero %d n�o � primo\n", num);
	}


	system("pause");
	return 0;
}
