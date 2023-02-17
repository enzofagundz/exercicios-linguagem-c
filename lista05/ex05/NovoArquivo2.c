#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numerosInteiros;
	
	for(numerosInteiros = 15; numerosInteiros <= 200; numerosInteiros++){
		
		printf("O quadrado de %d é %d\n",numerosInteiros, numerosInteiros*numerosInteiros);
		_sleep(90);
	}	
	
	system("pause");
	return(0);
}