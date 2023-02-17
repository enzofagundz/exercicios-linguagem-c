#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, menor;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);
	menor = n1;
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	if(n2 < menor)
		menor = n2;
	printf("Digite o terceiro valor: ");
	scanf("%d", &n3);
	if(n3 < menor)
	menor = n3;	
	printf("Digite o quarto valor: ");
	scanf("%d", &n4);
	if(n4 < menor)
	menor = n4;
	
	printf("\nO menor valor é %d\n\n", menor);
	
	
	system("pause");
	return("0");
}