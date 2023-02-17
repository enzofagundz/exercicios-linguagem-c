#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int pagamento;
	float valor, desconto;

	printf("**************************************************************************************\n");
	printf("Digite o valor do produto: R$");
	scanf("%f", &valor);
	printf("MÉTODOS DE PAGAMENTO \n\n");
	printf("1 - À vista em dinheiro\n 2 - À vista no cartão\n 3 - 2 parcelas\n 4 - 3 parcelas\n\n");
	printf("\nDigite o método de pagamento:");
	scanf("%d", &pagamento);
	printf("**************************************************************************************\n");
	
	if (pagamento == 1)
	{
		desconto = valor - (valor * 0.1);
		printf("Você escolheu à vista em dinheiro e ganhou um desconto de 10%%, o novo valor do seu produto é %0.2f\n\n", desconto);
	}
	if (pagamento == 2)
	{
		desconto = valor - (valor * 0.05);
		printf("Você escolheu à vista no cartão e ganhou um desconto de 5%%, o novo valor do seu produto é %0.2f\n\n", desconto);
	}
	if (pagamento == 3)
	{
		desconto = valor / 2;
		printf("Você escolheu 2 parcelas e o valor de cada será de RS%0.2f\n\n", desconto);
	}
	if (pagamento == 4)
	{
		desconto = (valor + (valor * 0.1)) / 3;
		printf("Você escolheu 3 parcelas e o valor de cada será de RS%0.2f\n\n", desconto);
	}

	system("pause");
	return("0");
}
