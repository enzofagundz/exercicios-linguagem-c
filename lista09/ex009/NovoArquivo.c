#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int tam = 10;
	int num[tam], i = 0, maior = 0, menor;
	float soma = 0;

	printf("Digite 10 n�meros:\n");
	while(i < tam)
	{
		scanf("%d", &num[i]);
		soma = soma + num[i];
		i++;
	}
	maior = num[0];
	menor = num[0];
	for(i = 0; i < tam; i++)
	{
		if(num[i] > maior)
		{
			maior = num[i];
		}
		if(num[i] < menor)
		{
			menor = num[i];
		}
	}
	
	printf("\nA m�dia aritm�tica dos elementos �: %0.2f", soma/tam);
	printf("\nO menor n�mero digitado �: %d", menor);
	printf("\nO maior n�mero digitado �: %d\n\n", maior);

	system("pause");
	return 0;
}
