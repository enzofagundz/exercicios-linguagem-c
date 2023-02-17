#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float p, t, con;
	printf("Digite o preço do produto: R$ \n");
	scanf("%f", &p);
	printf("Digite a taxa de conversão: U$: \n");
	scanf("%f", &t);
	con = p / t;
	printf("Convertendo o valor de R$%0.2f para dólares, obtemos o resultado de U$%0.2f.\n\n", p, con);
	
	system("pause");
	return("0");
}