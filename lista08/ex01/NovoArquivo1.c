#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

main()
{

	setlocale(LC_ALL, "Portuguese");

	int i, n;
	srand(time(NULL));
	printf("Digite o tamanho do vetor\n");
	scanf("%d", &n);

	int num[n];

	for(i = 0; i < n; i++)
	{

		//scanf("%d", &num[i]);
		num[i] = rand() % 100;
	}
	for(i = 0; i < n; i++)
	{
		printf("Valor de num[%d] = %2d\n", i, num[i]);
	}
	system("PAUSE");
}
