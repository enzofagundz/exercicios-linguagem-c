#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	char op;
	
	do{
		system("CLS");
		
		
		printf("Algor�tmo para identificar se um n�mero � positivo, negativo e �mpar ou par\n");
		printf("---------------------------------------------------------------------------");
		
		printf("\nDigite um numero inteiro: ");
		scanf("%d", &num);
		
		if(num % 2 == 0)
			printf("O n�mero digitado � par");
		else
			printf("O n�mero digitado � �mpar");
		if(num > 0)
			printf(" e positivo\n");
		else
			printf(" e negativo\n");
		
		printf("Deseja continuar? (S/N) ");
		op = getche();
		
	}while(op == 's' | op == 'S');
	
	
	return(0);
	system("PAUSE");
}