#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numUsuario, multiplicador=0;
	
	printf("Digite um número: ");
	scanf("%d", &numUsuario);
	
	while(multiplicador <= 10){
		printf("%2d x %2d = %2d\n", numUsuario, multiplicador, numUsuario * multiplicador);
		multiplicador++;
	}

	system("PAUSE");
	return (0);
}