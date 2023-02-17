#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int anos, dias, meses, total;
	
	printf("Sua idade em anos: ");
	scanf("%d", &anos);
	printf("Sua idade em meses: ");
	scanf("%d", &meses);
	printf("Sua idade em dias: ");
	scanf("%d", &dias);
	
	total = (anos * 365) + (meses * 30) + dias;
	
	printf("Isso quer dizer que você viveu aproximadamente %d dias\n\n", total);
	
	system("PAUSE");
	return 0;
}