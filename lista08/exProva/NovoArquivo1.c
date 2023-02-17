/*
Faça um programa em C que fica recebendo do usuário números inteiros positivos. 
O programa é interrompido quando o usuário digitar um número maior que 500. 
No final apresente a somatória separada dos números pares e dos números ímpares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int tam, contPar=0, contImpar=0, i, soma;
	
	printf("Digite a quantidade de números que você irá digitar: ");
	scanf("%d", &tam);
	
	int num[tam];
	
	printf("\nAgora é hora de digitar os números:\n");
	for(i = 0; i < tam; i++)
	{
		scanf("%d", &num[i]);
		if(num[i] <= 500)
		{
			if(num[i]%2 == 0)
			{
				contPar = contPar + num[i];
			}
			else
			{
				contImpar = contImpar + num[i];
			}
		}
		else
		{
			break;
		}
	}
	printf("\nA somatória dos números pares é: %d", contPar);
	printf("\nA somatória dos números ímpares é: %d\n\n", contImpar);	
	
	system("PAUSE");
	return 0;
}