#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int num = 0, counter = 0;
	
	while(num <= 500)
	{
		counter = counter + num;
		num = num + 2;
	}

	printf("A somat�ria dos n�meros pares entre 0 e 500 � igual a %d\n", counter);
	
	system("PAUSE");
	return (0);
}
