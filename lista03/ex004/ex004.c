#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	float imp, pf, lucro, pv;
	
	printf("Digite o nome do autom�vel: ");
	scanf("%s", &nome);
	printf("Digite o pre�o do carro: R$");
	scanf("%f", &pf);
	
	printf("Calculando o pre�o...\n\n");
	
	imp = pf * 0.45;
	lucro = pf * 0.28;
	pv = pf + imp + lucro;
	
	printf("O pre�o de mercado do ve�culo %s �: R$%0.2f\n\n", nome, pv);
	
	
	
	
	system("pause");
	return 0;	
}