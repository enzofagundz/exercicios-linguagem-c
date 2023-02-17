#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, num, temp = 0;

//leia a entrada do usuário.

	printf("Digite qualquer numb para verificar o primeiro: ");
	scanf("%d", &num);

//iterar até n/2.

	for(i = 2; i <= num/2; i++)
	{
//verifique se num é divisível por qualquer número.
		if(num % i == 0)
		{
			temp++;
			break;
		}
	}
	if(temp == 0 && num != 1)
	{
		printf ("%d é um número primo", num);
	}
	else
	{
		printf ("%d não é um número primo", num);
	}

	return 0;
}
