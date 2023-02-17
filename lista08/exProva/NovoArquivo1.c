/*
Fa�a um programa em C que fica recebendo do usu�rio n�meros inteiros positivos. 
O programa � interrompido quando o usu�rio digitar um n�mero maior que 500. 
No final apresente a somat�ria separada dos n�meros pares e dos n�meros �mpares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int tam, contPar=0, contImpar=0, i, soma;
	
	printf("Digite a quantidade de n�meros que voc� ir� digitar: ");
	scanf("%d", &tam);
	
	int num[tam];
	
	printf("\nAgora � hora de digitar os n�meros:\n");
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
	printf("\nA somat�ria dos n�meros pares �: %d", contPar);
	printf("\nA somat�ria dos n�meros �mpares �: %d\n\n", contImpar);	
	
	system("PAUSE");
	return 0;
}