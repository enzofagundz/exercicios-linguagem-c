#include <stdio.h>
#include <stdlib.h> //função system e rand srand
#include <time.h> //função time
#include <conio.h>
main()
{
	int i, n, cont = 0;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	int num[n];
	printf("Preencher os %d numeros do Vetor:\n\n", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] != -1)
		{
			cont++;
		}
		else
		{
			i = n;
		}
	}
	for(i = 0; i < cont; i++)
	{
		printf("Valor de num[%d] = %d\n", i, num[i]);
	}
	system("pause");
}
