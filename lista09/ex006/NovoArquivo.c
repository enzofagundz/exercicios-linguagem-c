/*Faça um programa em C que leia vários inteiros positivos e mostre, no final,
a soma dos números pares e a soma dos números ímpares. O programa para
quando digitar um número maior que 500. No final apresente a somatória dos
números pares e ímpares*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i = 0, numPar = 0, numImpar = 0;
	int num[100];

	printf("Digite vários números:\n");
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

	printf("\nA soma dos números pares é: %d\n", numPar);
	printf("A soma dos números ímpares é: %d\n", numImpar);

	return 0;
	system("pause");
}
