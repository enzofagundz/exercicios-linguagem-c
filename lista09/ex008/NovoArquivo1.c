#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i = 0, h[2], maiorPeso=0, maiorAltura=0;
	char nome[2][21];
	float p[2];

	printf("Digite o nome da primeira pessoa: ");
	gets(nome[0]);
	printf("\nDigite o nome da segunda pessoa: ");
	gets(nome[1]);

	for(i = 0; i < 2; i++)
	{
		printf("\nA altura de %s: ", nome[i]);
		scanf("%d", &h[i]);
		printf("\nO peso de %s: ", nome[i]);
		scanf("%f", &p[i]);
	}
	maiorPeso = p[0];
	maiorAltura = h[0];
	for(i = 0; i < 2; i++)
	{
		if(h[i] > maiorAltura)
		{
			printf("%s é mais pesada", nome[i]);
		}
		if(p[i] > maiorPeso)
		{
			printf("%s é mais alta", nome[i]);
		}
	}
	
	system("pause");
	return 0;

}
