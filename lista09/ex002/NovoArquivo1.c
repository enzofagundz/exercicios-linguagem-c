#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;

	printf("Digite um n�mero menor que 100: \n");
	scanf("%d", &num);

	if(num > 100)
		printf("N�mero invalido!");
	else
	{

		do
		{
			num = num + 1;
			printf("%d\n", num);
		}
		while(num <= 99);
	}

	return 0;
}