#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, aux;
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	
	printf("O valor de A é %d e o valor de B é %d.\n\n", a, aux);
	
	system("pause");
	return("0");
}