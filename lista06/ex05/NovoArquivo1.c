#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	int num = 15;
	while(num <= 200)
	{
		printf("%d^%d = %d\n", num, num, num * num);
		_sleep(50);
		num++;
	}

	system("PAUSE");
	return (0);
}
