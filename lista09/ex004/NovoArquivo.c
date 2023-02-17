#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int	i;

	for(i = 1000; i <= 2020 ; i++)
	{
		if(i % 11 == 5)
		{
			printf("%d\n", i);
			_sleep(50);
		}
	}

	return 0;
}
