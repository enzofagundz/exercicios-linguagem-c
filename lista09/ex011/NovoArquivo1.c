#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int tam;
	int i = 0, maior = 0, menor;
	float soma = 0;

	printf("Determine a quantidade de n�meros: ");
	scanf("%d", &tam);
	
	int num[tam];
	
	printf("Agora digite %d n�meros:\n", tam);
	while(i < tam)
	{
		scanf("%d", &num[i]);
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
	
	printf("\nO menor n�mero digitado �: %d", menor);
	printf("\nO maior n�mero digitado �: %d\n\n", maior);

	system("pause");
	return 0;
}