#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, t1 = 0, t2 = 1, numProx = 0;
	
	printf("Sequência de Fibonacci: \n\n");
	
	for(i = 1; i < 22; i++)
	{
		printf("%d\n", t1);
		numProx = t1 + t2;
		t1 = t2;
		t2 = numProx;
		_sleep(50);
	}
	
	printf("...\n");

	return 0;
}

