/*Fa�a um programa em C que leia v�rios inteiros positivos e mostre, no final,
a soma dos n�meros pares e a soma dos n�meros �mpares. O programa para
quando digitar um n�mero maior que 500. No final apresente a somat�ria dos
n�meros pares e �mpares*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i = 0, numPar = 0, numImpar = 0;
	int num[100];

	printf("Digite v�rios n�meros:\n");
	while(i <= 100)
	{
		scanf("%d", &num[i]);

		if(num[i] > 0 && num[i] < 500)
		{
			if(num[i] % 2 == 0)
			{
				numPar = numPar + num[i];
			}
			else
			{
				numImpar = numImpar + num[i];
			}
		}
		else
		{
			i = 101;
		}
		i++;
	}

	printf("\nA soma dos n�meros pares �: %d\n", numPar);
	printf("A soma dos n�meros �mpares �: %d\n", numImpar);

	return 0;
	system("pause");
}
