#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, result;
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	result = n1 * n1;
	printf("O quadrado de %d � igual a: %d.\n\n", n1, result);
	
	system("pause");
	return("0");
}