#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, num, temp = 0;

//leia a entrada do usu�rio.

	printf("Digite qualquer numb para verificar o primeiro: ");
	scanf("%d", &num);

//iterar at� n/2.

	for(i = 2; i <= num/2; i++)
	{
//verifique se num � divis�vel por qualquer n�mero.
		if(num % i == 0)
		{
			temp++;
			break;
		}
	}
	if(temp == 0 && num != 1)
	{
		printf ("%d � um n�mero primo", num);
	}
	else
	{
		printf ("%d n�o � um n�mero primo", num);
	}

	return 0;
}
