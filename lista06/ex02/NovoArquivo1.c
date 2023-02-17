#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{

	setlocale(LC_ALL, "Portuguese");

	int numeroUsuario=0, contador=0;

	do
	{
		printf("Digite um número: ");
		scanf("%d", &numeroUsuario);
		printf("%d * 2 = %d\n", numeroUsuario, numeroUsuario * 2);
		contador = contador + 1;
	}while(contador <= 4);

	system("PAUSE");
	return (0);
}
