#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{

	setlocale(LC_ALL, "Portuguese");

	int a, n, x;

	printf("Digite um número: ");
	scanf("%d", &n);
		
	for(a = n; n; a = (n * 2))
	{
		printf("%d\n", a);
		_sleep(50);
	}


	system("pause");
	return 0;
}
