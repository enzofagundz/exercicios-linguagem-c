#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numerosPares, soma=0;
	
	for (numerosPares=0; numerosPares<=500; numerosPares = numerosPares + 2){
			soma = soma + numerosPares;
	}

	printf("A soma dos n�meros pares de 1 a 500 �  igual a: %d\n", soma);
	
	system("pause");
	return(0);
}