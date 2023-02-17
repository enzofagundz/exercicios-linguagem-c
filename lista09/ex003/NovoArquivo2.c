#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float num, valor;
	int i;

	printf("Digite o valor da foto: R$\n");
	scanf("%f", &num);
	printf("\n");

	for(i = 1; i <= 50; i++)
	{
		if(i <= 10)
		{
			valor = i * num;
			printf("%2d foto(s) = R$%2.2f\n", i, valor);
		}
		if(i > 10 && i <= 20)
		{
			valor = i * (num - 0.03);
			printf("%2d foto(s) = R$%2.2f\n", i, valor);
		}
		if(i > 20 && i <= 50)
		{
			valor = i * ((num - 0.03) - 0.01);
			printf("%2d foto(s) = R$%2.2f\n", i, valor);
		}
	}
	
	system("PAUSE");
	return 0;
}
