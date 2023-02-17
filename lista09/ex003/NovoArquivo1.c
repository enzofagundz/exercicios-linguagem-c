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
	
	for(i=1; i <= 10; i++){
		valor = i * num;
		printf("%d foto(s) = R$%0.2f\n", i, valor);	
	}
	for(i=11; i<= 20; i++){
		valor = i * (num - 0.03);
		printf("%d foto(s) = R$%0.2f\n", i, valor);
	}
	for(i=21; i<= 50; i++){
		valor = i * ((num - 0.03) - 0.01);
		printf("%d foto(s) = R$%0.2f\n", i, valor);
	}
	printf("/n");
	
	system("PAUSE");
	return 0;
}