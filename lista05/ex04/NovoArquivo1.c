#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numeroUsuario, numeroMultiplicador;
	
	printf("Digite um número: ");
	scanf("%d", &numeroUsuario);
	
	for(numeroMultiplicador = 0; numeroMultiplicador <=10; numeroMultiplicador++){
		
		printf("%d * %d = %d\n", numeroUsuario, numeroMultiplicador, numeroUsuario * numeroMultiplicador);
		
	}
		
	system("pause");
	return(0);	
}