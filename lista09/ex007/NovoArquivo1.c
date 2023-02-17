/*Faça um programa em C que receba um número inteiro maior que 1,
verifique se o número fornecido é primo ou não e mostre mensagem de número
primo ou de número não primo. Um número é primo quando é divisível apenas
por 1 e por ele mesmo*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i = 1, num, resultado = 0;

	printf("Digite um número inteiro maior que 1:\n");
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
		printf("O número %d é primo\n", num);
	}
	else
	{
		printf("O número %d não é primo\n", num);
	}


	system("pause");
	return 0;
}
