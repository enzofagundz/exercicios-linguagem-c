#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

mani()
{

	setlocale(LC_ALL, "Portuguese");

	float VH, SB, PD, TD, SL, HT;

	printf("Qual o valor da hora/aula em sua intitui��o? R$");
	scanf("%f", &VH);
	printf("Quantas horas voc� trabalhou no m�s? ");
	scanf("%f", &HT);
	printf("Qual o percentual de desconto do INSS? ");
	scanf("%f", &PD);

	SB = HT * VH;
	TD = ((PD / 100) * SB);
	SL = SB - TD;

	printf("Seu sal�rio bruto � igual a: R$%0.2f\n", SB);
	printf("Conforme a al�quota de %0.2f% informada, o seu sal�rio l�quido � equivalente a: R$%0.2f\n\n", PD, SL);

	system("pause");
	return("0");
}
